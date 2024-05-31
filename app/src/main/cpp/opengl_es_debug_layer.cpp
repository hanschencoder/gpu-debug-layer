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

namespace {

std::unordered_map<std::string, EGLFuncPointer> functionMap;
char mDebugMessage[8192];
uint64_t mCmdIndex = 0;
bool mEnableLog = true;
bool mEnableLogParams = true;
bool mEnableTrace = true;
bool mEnableIndex = true;

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