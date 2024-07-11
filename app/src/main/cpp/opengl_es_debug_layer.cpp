#include <android/log.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES/gl.h>
#include <GLES3/gl3.h>
#include <GLES3/gl32.h>
#include <GLES2/gl2ext.h>
#include <string>
#include <string.h>
#include <unordered_map>
#include <android/trace.h>
#include <inttypes.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/system_properties.h>


#define LOG_TAG "OpenGLESDebugLayer"

#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__);
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

typedef __eglMustCastToProperFunctionPointerType EGLFuncPointer;
typedef void *(*PFNEGLGETNEXTLAYERPROCADDRESSPROC)(void *, const char *);

#define GETPROCADDR(func) \
    if(!strcmp(funcName, #func)) { \
        return (EGLFuncPointer)opengl_es_layer_##func; \
    }

class ScopedTrace {
public:
    inline ScopedTrace(bool cond, const char* name) : mTrace(cond) {
        if (mTrace) {
            ATrace_beginSection(name);
        }

    }

    inline ~ScopedTrace() {
        if (mTrace) {
            ATrace_endSection();
        }
    }
private:
    bool mTrace;
};

#define _PASTE(x, y) x ## y
#define PASTE(x, y) _PASTE(x,y)
#define ATRACE_NAME_IF(cond, name) ScopedTrace PASTE(___tracer, __LINE__)(cond, name)
#define GL_FINISH_IF(cond, name) ScopedFinish PASTE(___tracer, __LINE__)(cond, name)

namespace {

std::unordered_map<std::string, EGLFuncPointer> functionMap;
char mDebugMessage[8192];
uint64_t mCmdIndex = 0;
bool mEnableLog = true;
bool mEnableLogParams = true;
bool mEnableTrace = true;
bool mEnableIndex = true;
bool mEnableGlFinish = false;

class ScopedFinish {
public:
    inline ScopedFinish(bool cond, const char* name) : mFinish(cond), mFunction(name) {
    }

    inline ~ScopedFinish() {
        if (mFinish && std::string("glFinish") != mFunction) {
            auto it = functionMap.find("glFinish");
            if (it == functionMap.end()) {
                ALOGE("%s", "Unable to find functionMap entry for glFinish");
            }

            if (mEnableTrace) {
                ATrace_beginSection("glFinish");
            }
            typedef void (*PFNGLFINISHPROC)(void);
            PFNGLFINISHPROC next = reinterpret_cast<PFNGLFINISHPROC>(it->second);
            next();
            if (mEnableTrace) {
                ATrace_endSection();
            }
        }
    }
private:
    bool mFinish;
    const char* mFunction;
};

void logMessageIf(bool cond, const char* message) {
    if (!cond) {
        return;
    }
    auto string = std::string(message);
    size_t pos = 0;
    // Perfetto ignores \n, so split up manually into separate ALOGD statements.
    const size_t size = string.size();
    while (pos < size) {
        const size_t end = std::min(string.find("\n", pos), size);
        ALOGD("%s", string.substr(pos, end - pos).c_str());
        pos = end + 1;
    }
}

#include "opengl_es_layer_function.h"

EGLAPI void EGLAPIENTRY opengl_es_layer_InitializeLayer(void *layer_id, PFNEGLGETNEXTLAYERPROCADDRESSPROC get_next_layer_proc_address) {
    char valueBuf[PROP_VALUE_MAX];
    if (__system_property_get("debug.gpu.enable_log", valueBuf) > 0) {
        mEnableLog = atoi(valueBuf) != 0;
    }
    if (__system_property_get("debug.gpu.log_params", valueBuf) > 0) {
        mEnableLogParams = atoi(valueBuf) != 0;
    }
    if (__system_property_get("debug.gpu.enable_trace", valueBuf) > 0) {
        mEnableTrace = atoi(valueBuf) != 0;
    }
    if (__system_property_get("debug.gpu.enable_index", valueBuf) > 0) {
        mEnableIndex = atoi(valueBuf) != 0;
    }
    if (__system_property_get("debug.gpu.enable_gl_finish", valueBuf) > 0) {
        mEnableGlFinish = atoi(valueBuf) != 0;
    }
    if (__system_property_get("debug.gpu.cmdline", valueBuf) > 0) {
        char cmdline[255];
        char proc_path[64];
        int fd;

        strcpy(cmdline, "unknown");
        sprintf(proc_path, "/proc/%d/cmdline", getpid());
        fd = open(proc_path, O_RDONLY | O_CLOEXEC);
        if (fd >= 0) {
            ssize_t rc = read(fd, cmdline, sizeof(cmdline) - 1);
            if (rc < 0) {
                ALOGE("read /proc/%d/cmdline (%s)", getpid(), strerror(errno));
            } else {
                cmdline[rc] = 0;
            }
            close(fd);
        }

        if (std::string(cmdline) != valueBuf) {
            mEnableLog = false;
            mEnableLogParams = false;
            mEnableTrace = false;
            mEnableIndex = false;
            mEnableGlFinish = false;
            ALOGE("cmdline:[%s] does not match debug.gpu.cmdline:[%s]", cmdline, valueBuf);
        }
    }

    ALOGD("opengl_es_layer_InitializeLayer called with layer_id %p, mEnableLog=%d, mEnableLogParams=%d, mEnableTrace=%d, mEnableIndex=%d", layer_id, mEnableLog, mEnableLogParams, mEnableTrace, mEnableIndex);
}

EGLAPI EGLFuncPointer EGLAPIENTRY opengl_es_layer_GetLayerProcAddress(const char *funcName, EGLFuncPointer next) {
    EGLFuncPointer entry = hookFunction(funcName);
    if (entry != nullptr) {
        functionMap[std::string(funcName)] = next;
        ALOGD("Hook function %s successfully", funcName);
    } else {
        entry = next;
        ALOGE("Hook function %s failed" PRId64 "", funcName);
    }

    return entry;
}
}

extern "C" {

__attribute((visibility("default"))) EGLAPI void AndroidGLESLayer_Initialize(void *layer_id,
                                                                             PFNEGLGETNEXTLAYERPROCADDRESSPROC get_next_layer_proc_address) {
    return (void) opengl_es_layer_InitializeLayer(layer_id, get_next_layer_proc_address);
}

__attribute((visibility("default"))) EGLAPI void *AndroidGLESLayer_GetProcAddress(const char *funcName, EGLFuncPointer next) {
    return (void *) opengl_es_layer_GetLayerProcAddress(funcName, next);
}
}