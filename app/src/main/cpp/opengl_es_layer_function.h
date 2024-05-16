EGLDisplay opengl_es_layer_eglGetDisplay(EGLNativeDisplayType param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "eglGetDisplay", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetDisplay");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetDisplay");
    }

    typedef EGLDisplay (*PFNEGLGETDISPLAYPROC)(EGLNativeDisplayType);
    PFNEGLGETDISPLAYPROC next = reinterpret_cast<PFNEGLGETDISPLAYPROC>(it->second);
    return next(param0);
}

EGLDisplay opengl_es_layer_eglGetPlatformDisplay(EGLenum param0, EGLNativeDisplayType param1, EGLAttrib* param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %p)", mCmdIndex++, "eglGetPlatformDisplay", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetPlatformDisplay");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetPlatformDisplay");
    }

    typedef EGLDisplay (*PFNEGLGETPLATFORMDISPLAYPROC)(EGLenum, EGLNativeDisplayType, EGLAttrib*);
    PFNEGLGETPLATFORMDISPLAYPROC next = reinterpret_cast<PFNEGLGETPLATFORMDISPLAYPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglInitialize(EGLDisplay param0, EGLint* param1, EGLint* param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p)", mCmdIndex++, "eglInitialize", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglInitialize");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglInitialize");
    }

    typedef EGLBoolean (*PFNEGLINITIALIZEPROC)(EGLDisplay, EGLint*, EGLint*);
    PFNEGLINITIALIZEPROC next = reinterpret_cast<PFNEGLINITIALIZEPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglTerminate(EGLDisplay param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "eglTerminate", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglTerminate");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglTerminate");
    }

    typedef EGLBoolean (*PFNEGLTERMINATEPROC)(EGLDisplay);
    PFNEGLTERMINATEPROC next = reinterpret_cast<PFNEGLTERMINATEPROC>(it->second);
    return next(param0);
}

EGLBoolean opengl_es_layer_eglGetConfigs(EGLDisplay param0, EGLConfig* param1, EGLint param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %p)", mCmdIndex++, "eglGetConfigs", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetConfigs");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetConfigs");
    }

    typedef EGLBoolean (*PFNEGLGETCONFIGSPROC)(EGLDisplay, EGLConfig*, EGLint, EGLint*);
    PFNEGLGETCONFIGSPROC next = reinterpret_cast<PFNEGLGETCONFIGSPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglChooseConfig(EGLDisplay param0, EGLint* param1, EGLConfig* param2, EGLint param3, EGLint* param4) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %d, %p)", mCmdIndex++, "eglChooseConfig", param0, param1, param2, param3, param4);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglChooseConfig");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglChooseConfig");
    }

    typedef EGLBoolean (*PFNEGLCHOOSECONFIGPROC)(EGLDisplay, EGLint*, EGLConfig*, EGLint, EGLint*);
    PFNEGLCHOOSECONFIGPROC next = reinterpret_cast<PFNEGLCHOOSECONFIGPROC>(it->second);
    return next(param0, param1, param2, param3, param4);
}

EGLBoolean opengl_es_layer_eglGetConfigAttrib(EGLDisplay param0, EGLConfig param1, EGLint param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %p)", mCmdIndex++, "eglGetConfigAttrib", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetConfigAttrib");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetConfigAttrib");
    }

    typedef EGLBoolean (*PFNEGLGETCONFIGATTRIBPROC)(EGLDisplay, EGLConfig, EGLint, EGLint*);
    PFNEGLGETCONFIGATTRIBPROC next = reinterpret_cast<PFNEGLGETCONFIGATTRIBPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSurface opengl_es_layer_eglCreateWindowSurface(EGLDisplay param0, EGLConfig param1, NativeWindowType param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreateWindowSurface", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateWindowSurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateWindowSurface");
    }

    typedef EGLSurface (*PFNEGLCREATEWINDOWSURFACEPROC)(EGLDisplay, EGLConfig, NativeWindowType, EGLint*);
    PFNEGLCREATEWINDOWSURFACEPROC next = reinterpret_cast<PFNEGLCREATEWINDOWSURFACEPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSurface opengl_es_layer_eglCreatePlatformWindowSurface(EGLDisplay param0, EGLConfig param1, void* param2, EGLAttrib* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreatePlatformWindowSurface", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreatePlatformWindowSurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreatePlatformWindowSurface");
    }

    typedef EGLSurface (*PFNEGLCREATEPLATFORMWINDOWSURFACEPROC)(EGLDisplay, EGLConfig, void*, EGLAttrib*);
    PFNEGLCREATEPLATFORMWINDOWSURFACEPROC next = reinterpret_cast<PFNEGLCREATEPLATFORMWINDOWSURFACEPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSurface opengl_es_layer_eglCreatePixmapSurface(EGLDisplay param0, EGLConfig param1, NativePixmapType param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreatePixmapSurface", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreatePixmapSurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreatePixmapSurface");
    }

    typedef EGLSurface (*PFNEGLCREATEPIXMAPSURFACEPROC)(EGLDisplay, EGLConfig, NativePixmapType, EGLint*);
    PFNEGLCREATEPIXMAPSURFACEPROC next = reinterpret_cast<PFNEGLCREATEPIXMAPSURFACEPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSurface opengl_es_layer_eglCreatePlatformPixmapSurface(EGLDisplay param0, EGLConfig param1, void* param2, EGLAttrib* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreatePlatformPixmapSurface", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreatePlatformPixmapSurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreatePlatformPixmapSurface");
    }

    typedef EGLSurface (*PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC)(EGLDisplay, EGLConfig, void*, EGLAttrib*);
    PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC next = reinterpret_cast<PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSurface opengl_es_layer_eglCreatePbufferSurface(EGLDisplay param0, EGLConfig param1, EGLint* param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p)", mCmdIndex++, "eglCreatePbufferSurface", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreatePbufferSurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreatePbufferSurface");
    }

    typedef EGLSurface (*PFNEGLCREATEPBUFFERSURFACEPROC)(EGLDisplay, EGLConfig, EGLint*);
    PFNEGLCREATEPBUFFERSURFACEPROC next = reinterpret_cast<PFNEGLCREATEPBUFFERSURFACEPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglDestroySurface(EGLDisplay param0, EGLSurface param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDestroySurface", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDestroySurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDestroySurface");
    }

    typedef EGLBoolean (*PFNEGLDESTROYSURFACEPROC)(EGLDisplay, EGLSurface);
    PFNEGLDESTROYSURFACEPROC next = reinterpret_cast<PFNEGLDESTROYSURFACEPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglQuerySurface(EGLDisplay param0, EGLSurface param1, EGLint param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %p)", mCmdIndex++, "eglQuerySurface", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQuerySurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQuerySurface");
    }

    typedef EGLBoolean (*PFNEGLQUERYSURFACEPROC)(EGLDisplay, EGLSurface, EGLint, EGLint*);
    PFNEGLQUERYSURFACEPROC next = reinterpret_cast<PFNEGLQUERYSURFACEPROC>(it->second);
    return next(param0, param1, param2, param3);
}

void opengl_es_layer_eglBeginFrame(EGLDisplay param0, EGLSurface param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglBeginFrame", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglBeginFrame");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglBeginFrame");
    }

    typedef void (*PFNEGLBEGINFRAMEPROC)(EGLDisplay, EGLSurface);
    PFNEGLBEGINFRAMEPROC next = reinterpret_cast<PFNEGLBEGINFRAMEPROC>(it->second);
    return next(param0, param1);
}

EGLContext opengl_es_layer_eglCreateContext(EGLDisplay param0, EGLConfig param1, EGLContext param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreateContext", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateContext");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateContext");
    }

    typedef EGLContext (*PFNEGLCREATECONTEXTPROC)(EGLDisplay, EGLConfig, EGLContext, EGLint*);
    PFNEGLCREATECONTEXTPROC next = reinterpret_cast<PFNEGLCREATECONTEXTPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglDestroyContext(EGLDisplay param0, EGLContext param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDestroyContext", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDestroyContext");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDestroyContext");
    }

    typedef EGLBoolean (*PFNEGLDESTROYCONTEXTPROC)(EGLDisplay, EGLContext);
    PFNEGLDESTROYCONTEXTPROC next = reinterpret_cast<PFNEGLDESTROYCONTEXTPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglMakeCurrent(EGLDisplay param0, EGLSurface param1, EGLSurface param2, EGLContext param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglMakeCurrent", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglMakeCurrent");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglMakeCurrent");
    }

    typedef EGLBoolean (*PFNEGLMAKECURRENTPROC)(EGLDisplay, EGLSurface, EGLSurface, EGLContext);
    PFNEGLMAKECURRENTPROC next = reinterpret_cast<PFNEGLMAKECURRENTPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglQueryContext(EGLDisplay param0, EGLContext param1, EGLint param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %p)", mCmdIndex++, "eglQueryContext", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQueryContext");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQueryContext");
    }

    typedef EGLBoolean (*PFNEGLQUERYCONTEXTPROC)(EGLDisplay, EGLContext, EGLint, EGLint*);
    PFNEGLQUERYCONTEXTPROC next = reinterpret_cast<PFNEGLQUERYCONTEXTPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLContext opengl_es_layer_eglGetCurrentContext(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglGetCurrentContext");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetCurrentContext");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetCurrentContext");
    }

    typedef EGLContext (*PFNEGLGETCURRENTCONTEXTPROC)(void);
    PFNEGLGETCURRENTCONTEXTPROC next = reinterpret_cast<PFNEGLGETCURRENTCONTEXTPROC>(it->second);
    return next();
}

EGLSurface opengl_es_layer_eglGetCurrentSurface(EGLint param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "eglGetCurrentSurface", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetCurrentSurface");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetCurrentSurface");
    }

    typedef EGLSurface (*PFNEGLGETCURRENTSURFACEPROC)(EGLint);
    PFNEGLGETCURRENTSURFACEPROC next = reinterpret_cast<PFNEGLGETCURRENTSURFACEPROC>(it->second);
    return next(param0);
}

EGLDisplay opengl_es_layer_eglGetCurrentDisplay(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglGetCurrentDisplay");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetCurrentDisplay");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetCurrentDisplay");
    }

    typedef EGLDisplay (*PFNEGLGETCURRENTDISPLAYPROC)(void);
    PFNEGLGETCURRENTDISPLAYPROC next = reinterpret_cast<PFNEGLGETCURRENTDISPLAYPROC>(it->second);
    return next();
}

EGLBoolean opengl_es_layer_eglWaitGL(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglWaitGL");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglWaitGL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglWaitGL");
    }

    typedef EGLBoolean (*PFNEGLWAITGLPROC)(void);
    PFNEGLWAITGLPROC next = reinterpret_cast<PFNEGLWAITGLPROC>(it->second);
    return next();
}

EGLBoolean opengl_es_layer_eglWaitNative(EGLint param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "eglWaitNative", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglWaitNative");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglWaitNative");
    }

    typedef EGLBoolean (*PFNEGLWAITNATIVEPROC)(EGLint);
    PFNEGLWAITNATIVEPROC next = reinterpret_cast<PFNEGLWAITNATIVEPROC>(it->second);
    return next(param0);
}

EGLint opengl_es_layer_eglGetError(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglGetError");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetError");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetError");
    }

    typedef EGLint (*PFNEGLGETERRORPROC)(void);
    PFNEGLGETERRORPROC next = reinterpret_cast<PFNEGLGETERRORPROC>(it->second);
    return next();
}

__eglMustCastToProperFunctionPointerType opengl_es_layer_eglGetProcAddress(char* param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%s)", mCmdIndex++, "eglGetProcAddress", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetProcAddress");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetProcAddress");
    }

    typedef __eglMustCastToProperFunctionPointerType (*PFNEGLGETPROCADDRESSPROC)(char*);
    PFNEGLGETPROCADDRESSPROC next = reinterpret_cast<PFNEGLGETPROCADDRESSPROC>(it->second);
    return next(param0);
}

EGLBoolean opengl_es_layer_eglSwapBuffersWithDamageKHR(EGLDisplay param0, EGLSurface param1, EGLint* param2, EGLint param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %d)", mCmdIndex++, "eglSwapBuffersWithDamageKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglSwapBuffersWithDamageKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglSwapBuffersWithDamageKHR");
    }

    typedef EGLBoolean (*PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC)(EGLDisplay, EGLSurface, EGLint*, EGLint);
    PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC next = reinterpret_cast<PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglSwapBuffers(EGLDisplay param0, EGLSurface param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglSwapBuffers", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglSwapBuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglSwapBuffers");
    }

    typedef EGLBoolean (*PFNEGLSWAPBUFFERSPROC)(EGLDisplay, EGLSurface);
    PFNEGLSWAPBUFFERSPROC next = reinterpret_cast<PFNEGLSWAPBUFFERSPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglCopyBuffers(EGLDisplay param0, EGLSurface param1, NativePixmapType param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p)", mCmdIndex++, "eglCopyBuffers", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCopyBuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCopyBuffers");
    }

    typedef EGLBoolean (*PFNEGLCOPYBUFFERSPROC)(EGLDisplay, EGLSurface, NativePixmapType);
    PFNEGLCOPYBUFFERSPROC next = reinterpret_cast<PFNEGLCOPYBUFFERSPROC>(it->second);
    return next(param0, param1, param2);
}

const char* opengl_es_layer_eglQueryString(EGLDisplay param0, EGLint param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d)", mCmdIndex++, "eglQueryString", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQueryString");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQueryString");
    }

    typedef const char* (*PFNEGLQUERYSTRINGPROC)(EGLDisplay, EGLint);
    PFNEGLQUERYSTRINGPROC next = reinterpret_cast<PFNEGLQUERYSTRINGPROC>(it->second);
    return next(param0, param1);
}

const char* opengl_es_layer_eglQueryStringImplementationANDROID(EGLDisplay param0, EGLint param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d)", mCmdIndex++, "eglQueryStringImplementationANDROID", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQueryStringImplementationANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQueryStringImplementationANDROID");
    }

    typedef const char* (*PFNEGLQUERYSTRINGIMPLEMENTATIONANDROIDPROC)(EGLDisplay, EGLint);
    PFNEGLQUERYSTRINGIMPLEMENTATIONANDROIDPROC next = reinterpret_cast<PFNEGLQUERYSTRINGIMPLEMENTATIONANDROIDPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglSurfaceAttrib(EGLDisplay param0, EGLSurface param1, EGLint param2, EGLint param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %d)", mCmdIndex++, "eglSurfaceAttrib", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglSurfaceAttrib");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglSurfaceAttrib");
    }

    typedef EGLBoolean (*PFNEGLSURFACEATTRIBPROC)(EGLDisplay, EGLSurface, EGLint, EGLint);
    PFNEGLSURFACEATTRIBPROC next = reinterpret_cast<PFNEGLSURFACEATTRIBPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglBindTexImage(EGLDisplay param0, EGLSurface param1, EGLint param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d)", mCmdIndex++, "eglBindTexImage", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglBindTexImage");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglBindTexImage");
    }

    typedef EGLBoolean (*PFNEGLBINDTEXIMAGEPROC)(EGLDisplay, EGLSurface, EGLint);
    PFNEGLBINDTEXIMAGEPROC next = reinterpret_cast<PFNEGLBINDTEXIMAGEPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglReleaseTexImage(EGLDisplay param0, EGLSurface param1, EGLint param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d)", mCmdIndex++, "eglReleaseTexImage", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglReleaseTexImage");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglReleaseTexImage");
    }

    typedef EGLBoolean (*PFNEGLRELEASETEXIMAGEPROC)(EGLDisplay, EGLSurface, EGLint);
    PFNEGLRELEASETEXIMAGEPROC next = reinterpret_cast<PFNEGLRELEASETEXIMAGEPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglSwapInterval(EGLDisplay param0, EGLint param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d)", mCmdIndex++, "eglSwapInterval", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglSwapInterval");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglSwapInterval");
    }

    typedef EGLBoolean (*PFNEGLSWAPINTERVALPROC)(EGLDisplay, EGLint);
    PFNEGLSWAPINTERVALPROC next = reinterpret_cast<PFNEGLSWAPINTERVALPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglWaitClient(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglWaitClient");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglWaitClient");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglWaitClient");
    }

    typedef EGLBoolean (*PFNEGLWAITCLIENTPROC)(void);
    PFNEGLWAITCLIENTPROC next = reinterpret_cast<PFNEGLWAITCLIENTPROC>(it->second);
    return next();
}

EGLBoolean opengl_es_layer_eglBindAPI(EGLenum param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "eglBindAPI", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglBindAPI");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglBindAPI");
    }

    typedef EGLBoolean (*PFNEGLBINDAPIPROC)(EGLenum);
    PFNEGLBINDAPIPROC next = reinterpret_cast<PFNEGLBINDAPIPROC>(it->second);
    return next(param0);
}

EGLenum opengl_es_layer_eglQueryAPI(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglQueryAPI");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQueryAPI");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQueryAPI");
    }

    typedef EGLenum (*PFNEGLQUERYAPIPROC)(void);
    PFNEGLQUERYAPIPROC next = reinterpret_cast<PFNEGLQUERYAPIPROC>(it->second);
    return next();
}

EGLBoolean opengl_es_layer_eglReleaseThread(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglReleaseThread");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglReleaseThread");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglReleaseThread");
    }

    typedef EGLBoolean (*PFNEGLRELEASETHREADPROC)(void);
    PFNEGLRELEASETHREADPROC next = reinterpret_cast<PFNEGLRELEASETHREADPROC>(it->second);
    return next();
}

EGLSurface opengl_es_layer_eglCreatePbufferFromClientBuffer(EGLDisplay param0, EGLenum param1, EGLClientBuffer param2, EGLConfig param3, EGLint* param4) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %p, %p, %p)", mCmdIndex++, "eglCreatePbufferFromClientBuffer", param0, param1, param2, param3, param4);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreatePbufferFromClientBuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreatePbufferFromClientBuffer");
    }

    typedef EGLSurface (*PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC)(EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, EGLint*);
    PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC next = reinterpret_cast<PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC>(it->second);
    return next(param0, param1, param2, param3, param4);
}

EGLBoolean opengl_es_layer_eglLockSurfaceKHR(EGLDisplay param0, EGLSurface param1, EGLint* param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p)", mCmdIndex++, "eglLockSurfaceKHR", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglLockSurfaceKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglLockSurfaceKHR");
    }

    typedef EGLBoolean (*PFNEGLLOCKSURFACEKHRPROC)(EGLDisplay, EGLSurface, EGLint*);
    PFNEGLLOCKSURFACEKHRPROC next = reinterpret_cast<PFNEGLLOCKSURFACEKHRPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglUnlockSurfaceKHR(EGLDisplay param0, EGLSurface param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglUnlockSurfaceKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglUnlockSurfaceKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglUnlockSurfaceKHR");
    }

    typedef EGLBoolean (*PFNEGLUNLOCKSURFACEKHRPROC)(EGLDisplay, EGLSurface);
    PFNEGLUNLOCKSURFACEKHRPROC next = reinterpret_cast<PFNEGLUNLOCKSURFACEKHRPROC>(it->second);
    return next(param0, param1);
}

EGLImage opengl_es_layer_eglCreateImage(EGLDisplay param0, EGLContext param1, EGLenum param2, EGLClientBuffer param3, EGLAttrib* param4) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %u, %p, %p)", mCmdIndex++, "eglCreateImage", param0, param1, param2, param3, param4);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateImage");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateImage");
    }

    typedef EGLImage (*PFNEGLCREATEIMAGEPROC)(EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, EGLAttrib*);
    PFNEGLCREATEIMAGEPROC next = reinterpret_cast<PFNEGLCREATEIMAGEPROC>(it->second);
    return next(param0, param1, param2, param3, param4);
}

EGLBoolean opengl_es_layer_eglDestroyImage(EGLDisplay param0, EGLImage param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDestroyImage", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDestroyImage");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDestroyImage");
    }

    typedef EGLBoolean (*PFNEGLDESTROYIMAGEPROC)(EGLDisplay, EGLImage);
    PFNEGLDESTROYIMAGEPROC next = reinterpret_cast<PFNEGLDESTROYIMAGEPROC>(it->second);
    return next(param0, param1);
}

EGLImageKHR opengl_es_layer_eglCreateImageKHR(EGLDisplay param0, EGLContext param1, EGLenum param2, EGLClientBuffer param3, EGLint* param4) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %u, %p, %p)", mCmdIndex++, "eglCreateImageKHR", param0, param1, param2, param3, param4);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateImageKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateImageKHR");
    }

    typedef EGLImageKHR (*PFNEGLCREATEIMAGEKHRPROC)(EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, EGLint*);
    PFNEGLCREATEIMAGEKHRPROC next = reinterpret_cast<PFNEGLCREATEIMAGEKHRPROC>(it->second);
    return next(param0, param1, param2, param3, param4);
}

EGLBoolean opengl_es_layer_eglDestroyImageKHR(EGLDisplay param0, EGLImageKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDestroyImageKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDestroyImageKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDestroyImageKHR");
    }

    typedef EGLBoolean (*PFNEGLDESTROYIMAGEKHRPROC)(EGLDisplay, EGLImageKHR);
    PFNEGLDESTROYIMAGEKHRPROC next = reinterpret_cast<PFNEGLDESTROYIMAGEKHRPROC>(it->second);
    return next(param0, param1);
}

EGLSync opengl_es_layer_eglCreateSync(EGLDisplay param0, EGLenum param1, EGLAttrib* param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %p)", mCmdIndex++, "eglCreateSync", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateSync");
    }

    typedef EGLSync (*PFNEGLCREATESYNCPROC)(EGLDisplay, EGLenum, EGLAttrib*);
    PFNEGLCREATESYNCPROC next = reinterpret_cast<PFNEGLCREATESYNCPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglDestroySync(EGLDisplay param0, EGLSync param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDestroySync", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDestroySync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDestroySync");
    }

    typedef EGLBoolean (*PFNEGLDESTROYSYNCPROC)(EGLDisplay, EGLSync);
    PFNEGLDESTROYSYNCPROC next = reinterpret_cast<PFNEGLDESTROYSYNCPROC>(it->second);
    return next(param0, param1);
}

EGLint opengl_es_layer_eglClientWaitSync(EGLDisplay param0, EGLSync param1, EGLint param2, EGLTimeKHR param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %" PRIu64 ")", mCmdIndex++, "eglClientWaitSync", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglClientWaitSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglClientWaitSync");
    }

    typedef EGLint (*PFNEGLCLIENTWAITSYNCPROC)(EGLDisplay, EGLSync, EGLint, EGLTimeKHR);
    PFNEGLCLIENTWAITSYNCPROC next = reinterpret_cast<PFNEGLCLIENTWAITSYNCPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglGetSyncAttrib(EGLDisplay param0, EGLSyncKHR param1, EGLint param2, EGLAttrib* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %p)", mCmdIndex++, "eglGetSyncAttrib", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetSyncAttrib");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetSyncAttrib");
    }

    typedef EGLBoolean (*PFNEGLGETSYNCATTRIBPROC)(EGLDisplay, EGLSyncKHR, EGLint, EGLAttrib*);
    PFNEGLGETSYNCATTRIBPROC next = reinterpret_cast<PFNEGLGETSYNCATTRIBPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSyncKHR opengl_es_layer_eglCreateSyncKHR(EGLDisplay param0, EGLenum param1, EGLint* param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %p)", mCmdIndex++, "eglCreateSyncKHR", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateSyncKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateSyncKHR");
    }

    typedef EGLSyncKHR (*PFNEGLCREATESYNCKHRPROC)(EGLDisplay, EGLenum, EGLint*);
    PFNEGLCREATESYNCKHRPROC next = reinterpret_cast<PFNEGLCREATESYNCKHRPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglDestroySyncKHR(EGLDisplay param0, EGLSyncKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDestroySyncKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDestroySyncKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDestroySyncKHR");
    }

    typedef EGLBoolean (*PFNEGLDESTROYSYNCKHRPROC)(EGLDisplay, EGLSyncKHR);
    PFNEGLDESTROYSYNCKHRPROC next = reinterpret_cast<PFNEGLDESTROYSYNCKHRPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglSignalSyncKHR(EGLDisplay param0, EGLSyncKHR param1, EGLenum param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %u)", mCmdIndex++, "eglSignalSyncKHR", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglSignalSyncKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglSignalSyncKHR");
    }

    typedef EGLBoolean (*PFNEGLSIGNALSYNCKHRPROC)(EGLDisplay, EGLSyncKHR, EGLenum);
    PFNEGLSIGNALSYNCKHRPROC next = reinterpret_cast<PFNEGLSIGNALSYNCKHRPROC>(it->second);
    return next(param0, param1, param2);
}

EGLint opengl_es_layer_eglClientWaitSyncKHR(EGLDisplay param0, EGLSyncKHR param1, EGLint param2, EGLTimeKHR param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %" PRIu64 ")", mCmdIndex++, "eglClientWaitSyncKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglClientWaitSyncKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglClientWaitSyncKHR");
    }

    typedef EGLint (*PFNEGLCLIENTWAITSYNCKHRPROC)(EGLDisplay, EGLSyncKHR, EGLint, EGLTimeKHR);
    PFNEGLCLIENTWAITSYNCKHRPROC next = reinterpret_cast<PFNEGLCLIENTWAITSYNCKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglGetSyncAttribKHR(EGLDisplay param0, EGLSyncKHR param1, EGLint param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %p)", mCmdIndex++, "eglGetSyncAttribKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetSyncAttribKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetSyncAttribKHR");
    }

    typedef EGLBoolean (*PFNEGLGETSYNCATTRIBKHRPROC)(EGLDisplay, EGLSyncKHR, EGLint, EGLint*);
    PFNEGLGETSYNCATTRIBKHRPROC next = reinterpret_cast<PFNEGLGETSYNCATTRIBKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLStreamKHR opengl_es_layer_eglCreateStreamKHR(EGLDisplay param0, EGLint* param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglCreateStreamKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateStreamKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateStreamKHR");
    }

    typedef EGLStreamKHR (*PFNEGLCREATESTREAMKHRPROC)(EGLDisplay, EGLint*);
    PFNEGLCREATESTREAMKHRPROC next = reinterpret_cast<PFNEGLCREATESTREAMKHRPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglDestroyStreamKHR(EGLDisplay param0, EGLStreamKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDestroyStreamKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDestroyStreamKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDestroyStreamKHR");
    }

    typedef EGLBoolean (*PFNEGLDESTROYSTREAMKHRPROC)(EGLDisplay, EGLStreamKHR);
    PFNEGLDESTROYSTREAMKHRPROC next = reinterpret_cast<PFNEGLDESTROYSTREAMKHRPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglStreamAttribKHR(EGLDisplay param0, EGLStreamKHR param1, EGLenum param2, EGLint param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %u, %d)", mCmdIndex++, "eglStreamAttribKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglStreamAttribKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglStreamAttribKHR");
    }

    typedef EGLBoolean (*PFNEGLSTREAMATTRIBKHRPROC)(EGLDisplay, EGLStreamKHR, EGLenum, EGLint);
    PFNEGLSTREAMATTRIBKHRPROC next = reinterpret_cast<PFNEGLSTREAMATTRIBKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglQueryStreamKHR(EGLDisplay param0, EGLStreamKHR param1, EGLenum param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %u, %p)", mCmdIndex++, "eglQueryStreamKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQueryStreamKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQueryStreamKHR");
    }

    typedef EGLBoolean (*PFNEGLQUERYSTREAMKHRPROC)(EGLDisplay, EGLStreamKHR, EGLenum, EGLint*);
    PFNEGLQUERYSTREAMKHRPROC next = reinterpret_cast<PFNEGLQUERYSTREAMKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglQueryStreamu64KHR(EGLDisplay param0, EGLStreamKHR param1, EGLenum param2, EGLuint64KHR* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %u, %p)", mCmdIndex++, "eglQueryStreamu64KHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQueryStreamu64KHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQueryStreamu64KHR");
    }

    typedef EGLBoolean (*PFNEGLQUERYSTREAMU64KHRPROC)(EGLDisplay, EGLStreamKHR, EGLenum, EGLuint64KHR*);
    PFNEGLQUERYSTREAMU64KHRPROC next = reinterpret_cast<PFNEGLQUERYSTREAMU64KHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglQueryStreamTimeKHR(EGLDisplay param0, EGLStreamKHR param1, EGLenum param2, EGLTimeKHR* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %u, %p)", mCmdIndex++, "eglQueryStreamTimeKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglQueryStreamTimeKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglQueryStreamTimeKHR");
    }

    typedef EGLBoolean (*PFNEGLQUERYSTREAMTIMEKHRPROC)(EGLDisplay, EGLStreamKHR, EGLenum, EGLTimeKHR*);
    PFNEGLQUERYSTREAMTIMEKHRPROC next = reinterpret_cast<PFNEGLQUERYSTREAMTIMEKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSurface opengl_es_layer_eglCreateStreamProducerSurfaceKHR(EGLDisplay param0, EGLConfig param1, EGLStreamKHR param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreateStreamProducerSurfaceKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateStreamProducerSurfaceKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateStreamProducerSurfaceKHR");
    }

    typedef EGLSurface (*PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC)(EGLDisplay, EGLConfig, EGLStreamKHR, EGLint*);
    PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC next = reinterpret_cast<PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglStreamConsumerGLTextureExternalKHR(EGLDisplay param0, EGLStreamKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglStreamConsumerGLTextureExternalKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglStreamConsumerGLTextureExternalKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglStreamConsumerGLTextureExternalKHR");
    }

    typedef EGLBoolean (*PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC)(EGLDisplay, EGLStreamKHR);
    PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC next = reinterpret_cast<PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglStreamConsumerAcquireKHR(EGLDisplay param0, EGLStreamKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglStreamConsumerAcquireKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglStreamConsumerAcquireKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglStreamConsumerAcquireKHR");
    }

    typedef EGLBoolean (*PFNEGLSTREAMCONSUMERACQUIREKHRPROC)(EGLDisplay, EGLStreamKHR);
    PFNEGLSTREAMCONSUMERACQUIREKHRPROC next = reinterpret_cast<PFNEGLSTREAMCONSUMERACQUIREKHRPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglStreamConsumerReleaseKHR(EGLDisplay param0, EGLStreamKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglStreamConsumerReleaseKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglStreamConsumerReleaseKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglStreamConsumerReleaseKHR");
    }

    typedef EGLBoolean (*PFNEGLSTREAMCONSUMERRELEASEKHRPROC)(EGLDisplay, EGLStreamKHR);
    PFNEGLSTREAMCONSUMERRELEASEKHRPROC next = reinterpret_cast<PFNEGLSTREAMCONSUMERRELEASEKHRPROC>(it->second);
    return next(param0, param1);
}

EGLNativeFileDescriptorKHR opengl_es_layer_eglGetStreamFileDescriptorKHR(EGLDisplay param0, EGLStreamKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglGetStreamFileDescriptorKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetStreamFileDescriptorKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetStreamFileDescriptorKHR");
    }

    typedef EGLNativeFileDescriptorKHR (*PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC)(EGLDisplay, EGLStreamKHR);
    PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC next = reinterpret_cast<PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC>(it->second);
    return next(param0, param1);
}

EGLStreamKHR opengl_es_layer_eglCreateStreamFromFileDescriptorKHR(EGLDisplay param0, EGLNativeFileDescriptorKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d)", mCmdIndex++, "eglCreateStreamFromFileDescriptorKHR", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateStreamFromFileDescriptorKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateStreamFromFileDescriptorKHR");
    }

    typedef EGLStreamKHR (*PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC)(EGLDisplay, EGLNativeFileDescriptorKHR);
    PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC next = reinterpret_cast<PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC>(it->second);
    return next(param0, param1);
}

EGLint opengl_es_layer_eglWaitSync(EGLDisplay param0, EGLSync param1, EGLint param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d)", mCmdIndex++, "eglWaitSync", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglWaitSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglWaitSync");
    }

    typedef EGLint (*PFNEGLWAITSYNCPROC)(EGLDisplay, EGLSync, EGLint);
    PFNEGLWAITSYNCPROC next = reinterpret_cast<PFNEGLWAITSYNCPROC>(it->second);
    return next(param0, param1, param2);
}

EGLint opengl_es_layer_eglWaitSyncKHR(EGLDisplay param0, EGLSyncKHR param1, EGLint param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d)", mCmdIndex++, "eglWaitSyncKHR", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglWaitSyncKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglWaitSyncKHR");
    }

    typedef EGLint (*PFNEGLWAITSYNCKHRPROC)(EGLDisplay, EGLSyncKHR, EGLint);
    PFNEGLWAITSYNCKHRPROC next = reinterpret_cast<PFNEGLWAITSYNCKHRPROC>(it->second);
    return next(param0, param1, param2);
}

EGLint opengl_es_layer_eglDupNativeFenceFDANDROID(EGLDisplay param0, EGLSyncKHR param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglDupNativeFenceFDANDROID", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglDupNativeFenceFDANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglDupNativeFenceFDANDROID");
    }

    typedef EGLint (*PFNEGLDUPNATIVEFENCEFDANDROIDPROC)(EGLDisplay, EGLSyncKHR);
    PFNEGLDUPNATIVEFENCEFDANDROIDPROC next = reinterpret_cast<PFNEGLDUPNATIVEFENCEFDANDROIDPROC>(it->second);
    return next(param0, param1);
}

EGLBoolean opengl_es_layer_eglPresentationTimeANDROID(EGLDisplay param0, EGLSurface param1, EGLnsecsANDROID param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %" PRId64 ")", mCmdIndex++, "eglPresentationTimeANDROID", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglPresentationTimeANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglPresentationTimeANDROID");
    }

    typedef EGLBoolean (*PFNEGLPRESENTATIONTIMEANDROIDPROC)(EGLDisplay, EGLSurface, EGLnsecsANDROID);
    PFNEGLPRESENTATIONTIMEANDROIDPROC next = reinterpret_cast<PFNEGLPRESENTATIONTIMEANDROIDPROC>(it->second);
    return next(param0, param1, param2);
}

EGLClientBuffer opengl_es_layer_eglGetNativeClientBufferANDROID(AHardwareBuffer* param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "eglGetNativeClientBufferANDROID", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetNativeClientBufferANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetNativeClientBufferANDROID");
    }

    typedef EGLClientBuffer (*PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC)(AHardwareBuffer*);
    PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC next = reinterpret_cast<PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC>(it->second);
    return next(param0);
}

EGLuint64NV opengl_es_layer_eglGetSystemTimeFrequencyNV(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglGetSystemTimeFrequencyNV");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetSystemTimeFrequencyNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetSystemTimeFrequencyNV");
    }

    typedef EGLuint64NV (*PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC)(void);
    PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC next = reinterpret_cast<PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC>(it->second);
    return next();
}

EGLuint64NV opengl_es_layer_eglGetSystemTimeNV(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "eglGetSystemTimeNV");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetSystemTimeNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetSystemTimeNV");
    }

    typedef EGLuint64NV (*PFNEGLGETSYSTEMTIMENVPROC)(void);
    PFNEGLGETSYSTEMTIMENVPROC next = reinterpret_cast<PFNEGLGETSYSTEMTIMENVPROC>(it->second);
    return next();
}

EGLBoolean opengl_es_layer_eglSetDamageRegionKHR(EGLDisplay param0, EGLSurface param1, EGLint* param2, EGLint param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %d)", mCmdIndex++, "eglSetDamageRegionKHR", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglSetDamageRegionKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglSetDamageRegionKHR");
    }

    typedef EGLBoolean (*PFNEGLSETDAMAGEREGIONKHRPROC)(EGLDisplay, EGLSurface, EGLint*, EGLint);
    PFNEGLSETDAMAGEREGIONKHRPROC next = reinterpret_cast<PFNEGLSETDAMAGEREGIONKHRPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglGetNextFrameIdANDROID(EGLDisplay param0, EGLSurface param1, EGLuint64KHR* param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p)", mCmdIndex++, "eglGetNextFrameIdANDROID", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetNextFrameIdANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetNextFrameIdANDROID");
    }

    typedef EGLBoolean (*PFNEGLGETNEXTFRAMEIDANDROIDPROC)(EGLDisplay, EGLSurface, EGLuint64KHR*);
    PFNEGLGETNEXTFRAMEIDANDROIDPROC next = reinterpret_cast<PFNEGLGETNEXTFRAMEIDANDROIDPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglGetCompositorTimingANDROID(EGLDisplay param0, EGLSurface param1, EGLint param2, EGLint* param3, EGLnsecsANDROID* param4) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %p, %p)", mCmdIndex++, "eglGetCompositorTimingANDROID", param0, param1, param2, param3, param4);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetCompositorTimingANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetCompositorTimingANDROID");
    }

    typedef EGLBoolean (*PFNEGLGETCOMPOSITORTIMINGANDROIDPROC)(EGLDisplay, EGLSurface, EGLint, EGLint*, EGLnsecsANDROID*);
    PFNEGLGETCOMPOSITORTIMINGANDROIDPROC next = reinterpret_cast<PFNEGLGETCOMPOSITORTIMINGANDROIDPROC>(it->second);
    return next(param0, param1, param2, param3, param4);
}

EGLBoolean opengl_es_layer_eglGetCompositorTimingSupportedANDROID(EGLDisplay param0, EGLSurface param1, EGLint param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d)", mCmdIndex++, "eglGetCompositorTimingSupportedANDROID", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetCompositorTimingSupportedANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetCompositorTimingSupportedANDROID");
    }

    typedef EGLBoolean (*PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC)(EGLDisplay, EGLSurface, EGLint);
    PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC next = reinterpret_cast<PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC>(it->second);
    return next(param0, param1, param2);
}

EGLBoolean opengl_es_layer_eglGetFrameTimestampsANDROID(EGLDisplay param0, EGLSurface param1, EGLuint64KHR param2, EGLint param3, EGLint* param4, EGLnsecsANDROID* param5) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %" PRIu64 ", %d, %p, %p)", mCmdIndex++, "eglGetFrameTimestampsANDROID", param0, param1, param2, param3, param4, param5);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetFrameTimestampsANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetFrameTimestampsANDROID");
    }

    typedef EGLBoolean (*PFNEGLGETFRAMETIMESTAMPSANDROIDPROC)(EGLDisplay, EGLSurface, EGLuint64KHR, EGLint, EGLint*, EGLnsecsANDROID*);
    PFNEGLGETFRAMETIMESTAMPSANDROIDPROC next = reinterpret_cast<PFNEGLGETFRAMETIMESTAMPSANDROIDPROC>(it->second);
    return next(param0, param1, param2, param3, param4, param5);
}

EGLBoolean opengl_es_layer_eglGetFrameTimestampSupportedANDROID(EGLDisplay param0, EGLSurface param1, EGLint param2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d)", mCmdIndex++, "eglGetFrameTimestampSupportedANDROID", param0, param1, param2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetFrameTimestampSupportedANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetFrameTimestampSupportedANDROID");
    }

    typedef EGLBoolean (*PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC)(EGLDisplay, EGLSurface, EGLint);
    PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC next = reinterpret_cast<PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC>(it->second);
    return next(param0, param1, param2);
}

const GLubyte* opengl_es_layer_glGetString(GLenum param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glGetString", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetString");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetString");
    }

    typedef const GLubyte* (*PFNGLGETSTRINGPROC)(GLenum);
    PFNGLGETSTRINGPROC next = reinterpret_cast<PFNGLGETSTRINGPROC>(it->second);
    return next(param0);
}

const GLubyte* opengl_es_layer_glGetStringi(GLenum param0, GLuint param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glGetStringi", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetStringi");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetStringi");
    }

    typedef const GLubyte* (*PFNGLGETSTRINGIPROC)(GLenum, GLuint);
    PFNGLGETSTRINGIPROC next = reinterpret_cast<PFNGLGETSTRINGIPROC>(it->second);
    return next(param0, param1);
}

void opengl_es_layer_glGetBooleanv(GLenum param0, GLboolean* param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetBooleanv", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetBooleanv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetBooleanv");
    }

    typedef void (*PFNGLGETBOOLEANVPROC)(GLenum, GLboolean*);
    PFNGLGETBOOLEANVPROC next = reinterpret_cast<PFNGLGETBOOLEANVPROC>(it->second);
    return next(param0, param1);
}

void opengl_es_layer_glGetFloatv(GLenum param0, GLfloat* param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetFloatv", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFloatv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFloatv");
    }

    typedef void (*PFNGLGETFLOATVPROC)(GLenum, GLfloat*);
    PFNGLGETFLOATVPROC next = reinterpret_cast<PFNGLGETFLOATVPROC>(it->second);
    return next(param0, param1);
}

void opengl_es_layer_glGetIntegerv(GLenum param0, GLint* param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetIntegerv", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetIntegerv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetIntegerv");
    }

    typedef void (*PFNGLGETINTEGERVPROC)(GLenum, GLint*);
    PFNGLGETINTEGERVPROC next = reinterpret_cast<PFNGLGETINTEGERVPROC>(it->second);
    return next(param0, param1);
}

void opengl_es_layer_glGetInteger64v(GLenum param0, GLint64* param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetInteger64v", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetInteger64v");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetInteger64v");
    }

    typedef void (*PFNGLGETINTEGER64VPROC)(GLenum, GLint64*);
    PFNGLGETINTEGER64VPROC next = reinterpret_cast<PFNGLGETINTEGER64VPROC>(it->second);
    return next(param0, param1);
}

EGLSurface opengl_es_layer_eglCreatePlatformWindowSurfaceEXT(EGLDisplay param0, EGLConfig param1, void* param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreatePlatformWindowSurfaceEXT", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreatePlatformWindowSurfaceEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreatePlatformWindowSurfaceEXT");
    }

    typedef EGLSurface (*PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC)(EGLDisplay, EGLConfig, void*, EGLint*);
    PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC next = reinterpret_cast<PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLSurface opengl_es_layer_eglCreatePlatformPixmapSurfaceEXT(EGLDisplay param0, EGLConfig param1, void* param2, EGLint* param3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %p, %p)", mCmdIndex++, "eglCreatePlatformPixmapSurfaceEXT", param0, param1, param2, param3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreatePlatformPixmapSurfaceEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreatePlatformPixmapSurfaceEXT");
    }

    typedef EGLSurface (*PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC)(EGLDisplay, EGLConfig, void*, EGLint*);
    PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC next = reinterpret_cast<PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC>(it->second);
    return next(param0, param1, param2, param3);
}

EGLBoolean opengl_es_layer_eglSetSwapRectangleANDROID(EGLDisplay param0, EGLSurface param1, EGLint param2, EGLint param3, EGLint param4, EGLint param5) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p, %d, %d, %d, %d)", mCmdIndex++, "eglSetSwapRectangleANDROID", param0, param1, param2, param3, param4, param5);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglSetSwapRectangleANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglSetSwapRectangleANDROID");
    }

    typedef EGLBoolean (*PFNEGLSETSWAPRECTANGLEANDROIDPROC)(EGLDisplay, EGLSurface, EGLint, EGLint, EGLint, EGLint);
    PFNEGLSETSWAPRECTANGLEANDROIDPROC next = reinterpret_cast<PFNEGLSETSWAPRECTANGLEANDROIDPROC>(it->second);
    return next(param0, param1, param2, param3, param4, param5);
}

EGLClientBuffer opengl_es_layer_eglGetRenderBufferANDROID(EGLDisplay param0, EGLSurface param1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "eglGetRenderBufferANDROID", param0, param1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglGetRenderBufferANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglGetRenderBufferANDROID");
    }

    typedef EGLClientBuffer (*PFNEGLGETRENDERBUFFERANDROIDPROC)(EGLDisplay, EGLSurface);
    PFNEGLGETRENDERBUFFERANDROIDPROC next = reinterpret_cast<PFNEGLGETRENDERBUFFERANDROIDPROC>(it->second);
    return next(param0, param1);
}

EGLClientBuffer opengl_es_layer_eglCreateNativeClientBufferANDROID(EGLint* param0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "eglCreateNativeClientBufferANDROID", param0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("eglCreateNativeClientBufferANDROID");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for eglCreateNativeClientBufferANDROID");
    }

    typedef EGLClientBuffer (*PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC)(EGLint*);
    PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC next = reinterpret_cast<PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC>(it->second);
    return next(param0);
}

void opengl_es_layer_glActiveShaderProgram(GLuint pipeline, GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glActiveShaderProgram", pipeline, program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glActiveShaderProgram");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glActiveShaderProgram");
    }

    typedef void (*PFNGLACTIVESHADERPROGRAMPROC)(GLuint, GLuint);
    PFNGLACTIVESHADERPROGRAMPROC next = reinterpret_cast<PFNGLACTIVESHADERPROGRAMPROC>(it->second);
    return next(pipeline, program);
}

void opengl_es_layer_glActiveShaderProgramEXT(GLuint pipeline, GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glActiveShaderProgramEXT", pipeline, program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glActiveShaderProgramEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glActiveShaderProgramEXT");
    }

    typedef void (*PFNGLACTIVESHADERPROGRAMEXTPROC)(GLuint, GLuint);
    PFNGLACTIVESHADERPROGRAMEXTPROC next = reinterpret_cast<PFNGLACTIVESHADERPROGRAMEXTPROC>(it->second);
    return next(pipeline, program);
}

void opengl_es_layer_glActiveTexture(GLenum texture) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glActiveTexture", texture);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glActiveTexture");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glActiveTexture");
    }

    typedef void (*PFNGLACTIVETEXTUREPROC)(GLenum);
    PFNGLACTIVETEXTUREPROC next = reinterpret_cast<PFNGLACTIVETEXTUREPROC>(it->second);
    return next(texture);
}

void opengl_es_layer_glAlphaFunc(GLenum func, GLfloat ref) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f)", mCmdIndex++, "glAlphaFunc", func, ref);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glAlphaFunc");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glAlphaFunc");
    }

    typedef void (*PFNGLALPHAFUNCPROC)(GLenum, GLfloat);
    PFNGLALPHAFUNCPROC next = reinterpret_cast<PFNGLALPHAFUNCPROC>(it->second);
    return next(func, ref);
}

void opengl_es_layer_glAlphaFuncQCOM(GLenum func, GLclampf ref) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f)", mCmdIndex++, "glAlphaFuncQCOM", func, ref);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glAlphaFuncQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glAlphaFuncQCOM");
    }

    typedef void (*PFNGLALPHAFUNCQCOMPROC)(GLenum, GLclampf);
    PFNGLALPHAFUNCQCOMPROC next = reinterpret_cast<PFNGLALPHAFUNCQCOMPROC>(it->second);
    return next(func, ref);
}

void opengl_es_layer_glAlphaFuncx(GLenum func, GLfixed ref) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glAlphaFuncx", func, ref);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glAlphaFuncx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glAlphaFuncx");
    }

    typedef void (*PFNGLALPHAFUNCXPROC)(GLenum, GLfixed);
    PFNGLALPHAFUNCXPROC next = reinterpret_cast<PFNGLALPHAFUNCXPROC>(it->second);
    return next(func, ref);
}

void opengl_es_layer_glAlphaFuncxOES(GLenum func, GLfixed ref) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glAlphaFuncxOES", func, ref);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glAlphaFuncxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glAlphaFuncxOES");
    }

    typedef void (*PFNGLALPHAFUNCXOESPROC)(GLenum, GLfixed);
    PFNGLALPHAFUNCXOESPROC next = reinterpret_cast<PFNGLALPHAFUNCXOESPROC>(it->second);
    return next(func, ref);
}

void opengl_es_layer_glApplyFramebufferAttachmentCMAAINTEL(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glApplyFramebufferAttachmentCMAAINTEL");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glApplyFramebufferAttachmentCMAAINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glApplyFramebufferAttachmentCMAAINTEL");
    }

    typedef void (*PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC)(void);
    PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC next = reinterpret_cast<PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC>(it->second);
    return next();
}

void opengl_es_layer_glAttachShader(GLuint program, GLuint shader) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glAttachShader", program, shader);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glAttachShader");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glAttachShader");
    }

    typedef void (*PFNGLATTACHSHADERPROC)(GLuint, GLuint);
    PFNGLATTACHSHADERPROC next = reinterpret_cast<PFNGLATTACHSHADERPROC>(it->second);
    return next(program, shader);
}

void opengl_es_layer_glBeginConditionalRenderNV(GLuint id, GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBeginConditionalRenderNV", id, mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBeginConditionalRenderNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBeginConditionalRenderNV");
    }

    typedef void (*PFNGLBEGINCONDITIONALRENDERNVPROC)(GLuint, GLenum);
    PFNGLBEGINCONDITIONALRENDERNVPROC next = reinterpret_cast<PFNGLBEGINCONDITIONALRENDERNVPROC>(it->second);
    return next(id, mode);
}

void opengl_es_layer_glBeginPerfMonitorAMD(GLuint monitor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBeginPerfMonitorAMD", monitor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBeginPerfMonitorAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBeginPerfMonitorAMD");
    }

    typedef void (*PFNGLBEGINPERFMONITORAMDPROC)(GLuint);
    PFNGLBEGINPERFMONITORAMDPROC next = reinterpret_cast<PFNGLBEGINPERFMONITORAMDPROC>(it->second);
    return next(monitor);
}

void opengl_es_layer_glBeginPerfQueryINTEL(GLuint queryHandle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBeginPerfQueryINTEL", queryHandle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBeginPerfQueryINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBeginPerfQueryINTEL");
    }

    typedef void (*PFNGLBEGINPERFQUERYINTELPROC)(GLuint);
    PFNGLBEGINPERFQUERYINTELPROC next = reinterpret_cast<PFNGLBEGINPERFQUERYINTELPROC>(it->second);
    return next(queryHandle);
}

void opengl_es_layer_glBeginQuery(GLenum target, GLuint id) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBeginQuery", target, id);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBeginQuery");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBeginQuery");
    }

    typedef void (*PFNGLBEGINQUERYPROC)(GLenum, GLuint);
    PFNGLBEGINQUERYPROC next = reinterpret_cast<PFNGLBEGINQUERYPROC>(it->second);
    return next(target, id);
}

void opengl_es_layer_glBeginQueryEXT(GLenum target, GLuint id) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBeginQueryEXT", target, id);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBeginQueryEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBeginQueryEXT");
    }

    typedef void (*PFNGLBEGINQUERYEXTPROC)(GLenum, GLuint);
    PFNGLBEGINQUERYEXTPROC next = reinterpret_cast<PFNGLBEGINQUERYEXTPROC>(it->second);
    return next(target, id);
}

void opengl_es_layer_glBeginTransformFeedback(GLenum primitiveMode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBeginTransformFeedback", primitiveMode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBeginTransformFeedback");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBeginTransformFeedback");
    }

    typedef void (*PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum);
    PFNGLBEGINTRANSFORMFEEDBACKPROC next = reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKPROC>(it->second);
    return next(primitiveMode);
}

void opengl_es_layer_glBindAttribLocation(GLuint program, GLuint index, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %s)", mCmdIndex++, "glBindAttribLocation", program, index, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindAttribLocation");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindAttribLocation");
    }

    typedef void (*PFNGLBINDATTRIBLOCATIONPROC)(GLuint, GLuint, GLchar*);
    PFNGLBINDATTRIBLOCATIONPROC next = reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(it->second);
    return next(program, index, name);
}

void opengl_es_layer_glBindBuffer(GLenum target, GLuint buffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindBuffer", target, buffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindBuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindBuffer");
    }

    typedef void (*PFNGLBINDBUFFERPROC)(GLenum, GLuint);
    PFNGLBINDBUFFERPROC next = reinterpret_cast<PFNGLBINDBUFFERPROC>(it->second);
    return next(target, buffer);
}

void opengl_es_layer_glBindBufferBase(GLenum target, GLuint index, GLuint buffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glBindBufferBase", target, index, buffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindBufferBase");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindBufferBase");
    }

    typedef void (*PFNGLBINDBUFFERBASEPROC)(GLenum, GLuint, GLuint);
    PFNGLBINDBUFFERBASEPROC next = reinterpret_cast<PFNGLBINDBUFFERBASEPROC>(it->second);
    return next(target, index, buffer);
}

void opengl_es_layer_glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %ld, %ld)", mCmdIndex++, "glBindBufferRange", target, index, buffer, offset, size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindBufferRange");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindBufferRange");
    }

    typedef void (*PFNGLBINDBUFFERRANGEPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr);
    PFNGLBINDBUFFERRANGEPROC next = reinterpret_cast<PFNGLBINDBUFFERRANGEPROC>(it->second);
    return next(target, index, buffer, offset, size);
}

void opengl_es_layer_glBindFragDataLocationEXT(GLuint program, GLuint color, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %s)", mCmdIndex++, "glBindFragDataLocationEXT", program, color, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindFragDataLocationEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindFragDataLocationEXT");
    }

    typedef void (*PFNGLBINDFRAGDATALOCATIONEXTPROC)(GLuint, GLuint, GLchar*);
    PFNGLBINDFRAGDATALOCATIONEXTPROC next = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONEXTPROC>(it->second);
    return next(program, color, name);
}

void opengl_es_layer_glBindFragDataLocationIndexedEXT(GLuint program, GLuint colorNumber, GLuint index, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %s)", mCmdIndex++, "glBindFragDataLocationIndexedEXT", program, colorNumber, index, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindFragDataLocationIndexedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindFragDataLocationIndexedEXT");
    }

    typedef void (*PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC)(GLuint, GLuint, GLuint, GLchar*);
    PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC next = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC>(it->second);
    return next(program, colorNumber, index, name);
}

void opengl_es_layer_glBindFramebuffer(GLenum target, GLuint framebuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindFramebuffer", target, framebuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindFramebuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindFramebuffer");
    }

    typedef void (*PFNGLBINDFRAMEBUFFERPROC)(GLenum, GLuint);
    PFNGLBINDFRAMEBUFFERPROC next = reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(it->second);
    return next(target, framebuffer);
}

void opengl_es_layer_glBindFramebufferOES(GLenum target, GLuint framebuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindFramebufferOES", target, framebuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindFramebufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindFramebufferOES");
    }

    typedef void (*PFNGLBINDFRAMEBUFFEROESPROC)(GLenum, GLuint);
    PFNGLBINDFRAMEBUFFEROESPROC next = reinterpret_cast<PFNGLBINDFRAMEBUFFEROESPROC>(it->second);
    return next(target, framebuffer);
}

void opengl_es_layer_glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %u, %d, %u, %u)", mCmdIndex++, "glBindImageTexture", unit, texture, level, layered, layer, access, format);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindImageTexture");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindImageTexture");
    }

    typedef void (*PFNGLBINDIMAGETEXTUREPROC)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum);
    PFNGLBINDIMAGETEXTUREPROC next = reinterpret_cast<PFNGLBINDIMAGETEXTUREPROC>(it->second);
    return next(unit, texture, level, layered, layer, access, format);
}

void opengl_es_layer_glBindProgramPipeline(GLuint pipeline) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBindProgramPipeline", pipeline);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindProgramPipeline");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindProgramPipeline");
    }

    typedef void (*PFNGLBINDPROGRAMPIPELINEPROC)(GLuint);
    PFNGLBINDPROGRAMPIPELINEPROC next = reinterpret_cast<PFNGLBINDPROGRAMPIPELINEPROC>(it->second);
    return next(pipeline);
}

void opengl_es_layer_glBindProgramPipelineEXT(GLuint pipeline) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBindProgramPipelineEXT", pipeline);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindProgramPipelineEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindProgramPipelineEXT");
    }

    typedef void (*PFNGLBINDPROGRAMPIPELINEEXTPROC)(GLuint);
    PFNGLBINDPROGRAMPIPELINEEXTPROC next = reinterpret_cast<PFNGLBINDPROGRAMPIPELINEEXTPROC>(it->second);
    return next(pipeline);
}

void opengl_es_layer_glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindRenderbuffer", target, renderbuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindRenderbuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindRenderbuffer");
    }

    typedef void (*PFNGLBINDRENDERBUFFERPROC)(GLenum, GLuint);
    PFNGLBINDRENDERBUFFERPROC next = reinterpret_cast<PFNGLBINDRENDERBUFFERPROC>(it->second);
    return next(target, renderbuffer);
}

void opengl_es_layer_glBindRenderbufferOES(GLenum target, GLuint renderbuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindRenderbufferOES", target, renderbuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindRenderbufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindRenderbufferOES");
    }

    typedef void (*PFNGLBINDRENDERBUFFEROESPROC)(GLenum, GLuint);
    PFNGLBINDRENDERBUFFEROESPROC next = reinterpret_cast<PFNGLBINDRENDERBUFFEROESPROC>(it->second);
    return next(target, renderbuffer);
}

void opengl_es_layer_glBindSampler(GLuint unit, GLuint sampler) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindSampler", unit, sampler);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindSampler");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindSampler");
    }

    typedef void (*PFNGLBINDSAMPLERPROC)(GLuint, GLuint);
    PFNGLBINDSAMPLERPROC next = reinterpret_cast<PFNGLBINDSAMPLERPROC>(it->second);
    return next(unit, sampler);
}

void opengl_es_layer_glBindTexture(GLenum target, GLuint texture) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindTexture", target, texture);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindTexture");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindTexture");
    }

    typedef void (*PFNGLBINDTEXTUREPROC)(GLenum, GLuint);
    PFNGLBINDTEXTUREPROC next = reinterpret_cast<PFNGLBINDTEXTUREPROC>(it->second);
    return next(target, texture);
}

void opengl_es_layer_glBindTransformFeedback(GLenum target, GLuint id) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBindTransformFeedback", target, id);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindTransformFeedback");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindTransformFeedback");
    }

    typedef void (*PFNGLBINDTRANSFORMFEEDBACKPROC)(GLenum, GLuint);
    PFNGLBINDTRANSFORMFEEDBACKPROC next = reinterpret_cast<PFNGLBINDTRANSFORMFEEDBACKPROC>(it->second);
    return next(target, id);
}

void opengl_es_layer_glBindVertexArray(GLuint array) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBindVertexArray", array);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindVertexArray");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindVertexArray");
    }

    typedef void (*PFNGLBINDVERTEXARRAYPROC)(GLuint);
    PFNGLBINDVERTEXARRAYPROC next = reinterpret_cast<PFNGLBINDVERTEXARRAYPROC>(it->second);
    return next(array);
}

void opengl_es_layer_glBindVertexArrayOES(GLuint array) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBindVertexArrayOES", array);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindVertexArrayOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindVertexArrayOES");
    }

    typedef void (*PFNGLBINDVERTEXARRAYOESPROC)(GLuint);
    PFNGLBINDVERTEXARRAYOESPROC next = reinterpret_cast<PFNGLBINDVERTEXARRAYOESPROC>(it->second);
    return next(array);
}

void opengl_es_layer_glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %ld, %d)", mCmdIndex++, "glBindVertexBuffer", bindingindex, buffer, offset, stride);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBindVertexBuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBindVertexBuffer");
    }

    typedef void (*PFNGLBINDVERTEXBUFFERPROC)(GLuint, GLuint, GLintptr, GLsizei);
    PFNGLBINDVERTEXBUFFERPROC next = reinterpret_cast<PFNGLBINDVERTEXBUFFERPROC>(it->second);
    return next(bindingindex, buffer, offset, stride);
}

void opengl_es_layer_glBlendBarrier(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glBlendBarrier");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendBarrier");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendBarrier");
    }

    typedef void (*PFNGLBLENDBARRIERPROC)(void);
    PFNGLBLENDBARRIERPROC next = reinterpret_cast<PFNGLBLENDBARRIERPROC>(it->second);
    return next();
}

void opengl_es_layer_glBlendBarrierKHR(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glBlendBarrierKHR");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendBarrierKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendBarrierKHR");
    }

    typedef void (*PFNGLBLENDBARRIERKHRPROC)(void);
    PFNGLBLENDBARRIERKHRPROC next = reinterpret_cast<PFNGLBLENDBARRIERKHRPROC>(it->second);
    return next();
}

void opengl_es_layer_glBlendBarrierNV(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glBlendBarrierNV");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendBarrierNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendBarrierNV");
    }

    typedef void (*PFNGLBLENDBARRIERNVPROC)(void);
    PFNGLBLENDBARRIERNVPROC next = reinterpret_cast<PFNGLBLENDBARRIERNVPROC>(it->second);
    return next();
}

void opengl_es_layer_glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f)", mCmdIndex++, "glBlendColor", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendColor");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendColor");
    }

    typedef void (*PFNGLBLENDCOLORPROC)(GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLBLENDCOLORPROC next = reinterpret_cast<PFNGLBLENDCOLORPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glBlendEquation(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBlendEquation", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquation");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquation");
    }

    typedef void (*PFNGLBLENDEQUATIONPROC)(GLenum);
    PFNGLBLENDEQUATIONPROC next = reinterpret_cast<PFNGLBLENDEQUATIONPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glBlendEquationOES(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glBlendEquationOES", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationOES");
    }

    typedef void (*PFNGLBLENDEQUATIONOESPROC)(GLenum);
    PFNGLBLENDEQUATIONOESPROC next = reinterpret_cast<PFNGLBLENDEQUATIONOESPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBlendEquationSeparate", modeRGB, modeAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationSeparate");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationSeparate");
    }

    typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum, GLenum);
    PFNGLBLENDEQUATIONSEPARATEPROC next = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC>(it->second);
    return next(modeRGB, modeAlpha);
}

void opengl_es_layer_glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBlendEquationSeparateOES", modeRGB, modeAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationSeparateOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationSeparateOES");
    }

    typedef void (*PFNGLBLENDEQUATIONSEPARATEOESPROC)(GLenum, GLenum);
    PFNGLBLENDEQUATIONSEPARATEOESPROC next = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEOESPROC>(it->second);
    return next(modeRGB, modeAlpha);
}

void opengl_es_layer_glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glBlendEquationSeparatei", buf, modeRGB, modeAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationSeparatei");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationSeparatei");
    }

    typedef void (*PFNGLBLENDEQUATIONSEPARATEIPROC)(GLuint, GLenum, GLenum);
    PFNGLBLENDEQUATIONSEPARATEIPROC next = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIPROC>(it->second);
    return next(buf, modeRGB, modeAlpha);
}

void opengl_es_layer_glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glBlendEquationSeparateiEXT", buf, modeRGB, modeAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationSeparateiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationSeparateiEXT");
    }

    typedef void (*PFNGLBLENDEQUATIONSEPARATEIEXTPROC)(GLuint, GLenum, GLenum);
    PFNGLBLENDEQUATIONSEPARATEIEXTPROC next = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIEXTPROC>(it->second);
    return next(buf, modeRGB, modeAlpha);
}

void opengl_es_layer_glBlendEquationSeparateiOES(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glBlendEquationSeparateiOES", buf, modeRGB, modeAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationSeparateiOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationSeparateiOES");
    }

    typedef void (*PFNGLBLENDEQUATIONSEPARATEIOESPROC)(GLuint, GLenum, GLenum);
    PFNGLBLENDEQUATIONSEPARATEIOESPROC next = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIOESPROC>(it->second);
    return next(buf, modeRGB, modeAlpha);
}

void opengl_es_layer_glBlendEquationi(GLuint buf, GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBlendEquationi", buf, mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationi");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationi");
    }

    typedef void (*PFNGLBLENDEQUATIONIPROC)(GLuint, GLenum);
    PFNGLBLENDEQUATIONIPROC next = reinterpret_cast<PFNGLBLENDEQUATIONIPROC>(it->second);
    return next(buf, mode);
}

void opengl_es_layer_glBlendEquationiEXT(GLuint buf, GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBlendEquationiEXT", buf, mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationiEXT");
    }

    typedef void (*PFNGLBLENDEQUATIONIEXTPROC)(GLuint, GLenum);
    PFNGLBLENDEQUATIONIEXTPROC next = reinterpret_cast<PFNGLBLENDEQUATIONIEXTPROC>(it->second);
    return next(buf, mode);
}

void opengl_es_layer_glBlendEquationiOES(GLuint buf, GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBlendEquationiOES", buf, mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendEquationiOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendEquationiOES");
    }

    typedef void (*PFNGLBLENDEQUATIONIOESPROC)(GLuint, GLenum);
    PFNGLBLENDEQUATIONIOESPROC next = reinterpret_cast<PFNGLBLENDEQUATIONIOESPROC>(it->second);
    return next(buf, mode);
}

void opengl_es_layer_glBlendFunc(GLenum sfactor, GLenum dfactor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glBlendFunc", sfactor, dfactor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFunc");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFunc");
    }

    typedef void (*PFNGLBLENDFUNCPROC)(GLenum, GLenum);
    PFNGLBLENDFUNCPROC next = reinterpret_cast<PFNGLBLENDFUNCPROC>(it->second);
    return next(sfactor, dfactor);
}

void opengl_es_layer_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glBlendFuncSeparate", sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFuncSeparate");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFuncSeparate");
    }

    typedef void (*PFNGLBLENDFUNCSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum);
    PFNGLBLENDFUNCSEPARATEPROC next = reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(it->second);
    return next(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void opengl_es_layer_glBlendFuncSeparateOES(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glBlendFuncSeparateOES", srcRGB, dstRGB, srcAlpha, dstAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFuncSeparateOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFuncSeparateOES");
    }

    typedef void (*PFNGLBLENDFUNCSEPARATEOESPROC)(GLenum, GLenum, GLenum, GLenum);
    PFNGLBLENDFUNCSEPARATEOESPROC next = reinterpret_cast<PFNGLBLENDFUNCSEPARATEOESPROC>(it->second);
    return next(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void opengl_es_layer_glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glBlendFuncSeparatei", buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFuncSeparatei");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFuncSeparatei");
    }

    typedef void (*PFNGLBLENDFUNCSEPARATEIPROC)(GLuint, GLenum, GLenum, GLenum, GLenum);
    PFNGLBLENDFUNCSEPARATEIPROC next = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIPROC>(it->second);
    return next(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void opengl_es_layer_glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glBlendFuncSeparateiEXT", buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFuncSeparateiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFuncSeparateiEXT");
    }

    typedef void (*PFNGLBLENDFUNCSEPARATEIEXTPROC)(GLuint, GLenum, GLenum, GLenum, GLenum);
    PFNGLBLENDFUNCSEPARATEIEXTPROC next = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIEXTPROC>(it->second);
    return next(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void opengl_es_layer_glBlendFuncSeparateiOES(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glBlendFuncSeparateiOES", buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFuncSeparateiOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFuncSeparateiOES");
    }

    typedef void (*PFNGLBLENDFUNCSEPARATEIOESPROC)(GLuint, GLenum, GLenum, GLenum, GLenum);
    PFNGLBLENDFUNCSEPARATEIOESPROC next = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIOESPROC>(it->second);
    return next(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void opengl_es_layer_glBlendFunci(GLuint buf, GLenum src, GLenum dst) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glBlendFunci", buf, src, dst);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFunci");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFunci");
    }

    typedef void (*PFNGLBLENDFUNCIPROC)(GLuint, GLenum, GLenum);
    PFNGLBLENDFUNCIPROC next = reinterpret_cast<PFNGLBLENDFUNCIPROC>(it->second);
    return next(buf, src, dst);
}

void opengl_es_layer_glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glBlendFunciEXT", buf, src, dst);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFunciEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFunciEXT");
    }

    typedef void (*PFNGLBLENDFUNCIEXTPROC)(GLuint, GLenum, GLenum);
    PFNGLBLENDFUNCIEXTPROC next = reinterpret_cast<PFNGLBLENDFUNCIEXTPROC>(it->second);
    return next(buf, src, dst);
}

void opengl_es_layer_glBlendFunciOES(GLuint buf, GLenum src, GLenum dst) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glBlendFunciOES", buf, src, dst);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendFunciOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendFunciOES");
    }

    typedef void (*PFNGLBLENDFUNCIOESPROC)(GLuint, GLenum, GLenum);
    PFNGLBLENDFUNCIOESPROC next = reinterpret_cast<PFNGLBLENDFUNCIOESPROC>(it->second);
    return next(buf, src, dst);
}

void opengl_es_layer_glBlendParameteriNV(GLenum pname, GLint value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glBlendParameteriNV", pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlendParameteriNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlendParameteriNV");
    }

    typedef void (*PFNGLBLENDPARAMETERINVPROC)(GLenum, GLint);
    PFNGLBLENDPARAMETERINVPROC next = reinterpret_cast<PFNGLBLENDPARAMETERINVPROC>(it->second);
    return next(pname, value);
}

void opengl_es_layer_glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d, %d, %d, %d, %u, %u)", mCmdIndex++, "glBlitFramebuffer", srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlitFramebuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlitFramebuffer");
    }

    typedef void (*PFNGLBLITFRAMEBUFFERPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
    PFNGLBLITFRAMEBUFFERPROC next = reinterpret_cast<PFNGLBLITFRAMEBUFFERPROC>(it->second);
    return next(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void opengl_es_layer_glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d, %d, %d, %d, %u, %u)", mCmdIndex++, "glBlitFramebufferANGLE", srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlitFramebufferANGLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlitFramebufferANGLE");
    }

    typedef void (*PFNGLBLITFRAMEBUFFERANGLEPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
    PFNGLBLITFRAMEBUFFERANGLEPROC next = reinterpret_cast<PFNGLBLITFRAMEBUFFERANGLEPROC>(it->second);
    return next(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void opengl_es_layer_glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d, %d, %d, %d, %u, %u)", mCmdIndex++, "glBlitFramebufferNV", srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBlitFramebufferNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBlitFramebufferNV");
    }

    typedef void (*PFNGLBLITFRAMEBUFFERNVPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
    PFNGLBLITFRAMEBUFFERNVPROC next = reinterpret_cast<PFNGLBLITFRAMEBUFFERNVPROC>(it->second);
    return next(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void opengl_es_layer_glBufferData(GLenum target, GLsizeiptr size, void* data, GLenum usage) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %p, %u)", mCmdIndex++, "glBufferData", target, size, data, usage);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBufferData");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBufferData");
    }

    typedef void (*PFNGLBUFFERDATAPROC)(GLenum, GLsizeiptr, void*, GLenum);
    PFNGLBUFFERDATAPROC next = reinterpret_cast<PFNGLBUFFERDATAPROC>(it->second);
    return next(target, size, data, usage);
}

void opengl_es_layer_glBufferStorageEXT(GLenum target, GLsizeiptr size, void* data, GLbitfield flags) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %p, %u)", mCmdIndex++, "glBufferStorageEXT", target, size, data, flags);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBufferStorageEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBufferStorageEXT");
    }

    typedef void (*PFNGLBUFFERSTORAGEEXTPROC)(GLenum, GLsizeiptr, void*, GLbitfield);
    PFNGLBUFFERSTORAGEEXTPROC next = reinterpret_cast<PFNGLBUFFERSTORAGEEXTPROC>(it->second);
    return next(target, size, data, flags);
}

void opengl_es_layer_glBufferStorageExternalEXT(GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %ld, %p, %u)", mCmdIndex++, "glBufferStorageExternalEXT", target, offset, size, clientBuffer, flags);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBufferStorageExternalEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBufferStorageExternalEXT");
    }

    typedef void (*PFNGLBUFFERSTORAGEEXTERNALEXTPROC)(GLenum, GLintptr, GLsizeiptr, GLeglClientBufferEXT, GLbitfield);
    PFNGLBUFFERSTORAGEEXTERNALEXTPROC next = reinterpret_cast<PFNGLBUFFERSTORAGEEXTERNALEXTPROC>(it->second);
    return next(target, offset, size, clientBuffer, flags);
}

void opengl_es_layer_glBufferStorageMemEXT(GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %u, %" PRIu64 ")", mCmdIndex++, "glBufferStorageMemEXT", target, size, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBufferStorageMemEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBufferStorageMemEXT");
    }

    typedef void (*PFNGLBUFFERSTORAGEMEMEXTPROC)(GLenum, GLsizeiptr, GLuint, GLuint64);
    PFNGLBUFFERSTORAGEMEMEXTPROC next = reinterpret_cast<PFNGLBUFFERSTORAGEMEMEXTPROC>(it->second);
    return next(target, size, memory, offset);
}

void opengl_es_layer_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %ld, %p)", mCmdIndex++, "glBufferSubData", target, offset, size, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glBufferSubData");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glBufferSubData");
    }

    typedef void (*PFNGLBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, void*);
    PFNGLBUFFERSUBDATAPROC next = reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(it->second);
    return next(target, offset, size, data);
}

GLenum opengl_es_layer_glCheckFramebufferStatus(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCheckFramebufferStatus", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCheckFramebufferStatus");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCheckFramebufferStatus");
    }

    typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum);
    PFNGLCHECKFRAMEBUFFERSTATUSPROC next = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(it->second);
    return next(target);
}

GLenum opengl_es_layer_glCheckFramebufferStatusOES(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCheckFramebufferStatusOES", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCheckFramebufferStatusOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCheckFramebufferStatusOES");
    }

    typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSOESPROC)(GLenum);
    PFNGLCHECKFRAMEBUFFERSTATUSOESPROC next = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSOESPROC>(it->second);
    return next(target);
}

void opengl_es_layer_glClear(GLbitfield mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glClear", mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClear");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClear");
    }

    typedef void (*PFNGLCLEARPROC)(GLbitfield);
    PFNGLCLEARPROC next = reinterpret_cast<PFNGLCLEARPROC>(it->second);
    return next(mask);
}

void opengl_es_layer_glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f, %d)", mCmdIndex++, "glClearBufferfi", buffer, drawbuffer, depth, stencil);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearBufferfi");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearBufferfi");
    }

    typedef void (*PFNGLCLEARBUFFERFIPROC)(GLenum, GLint, GLfloat, GLint);
    PFNGLCLEARBUFFERFIPROC next = reinterpret_cast<PFNGLCLEARBUFFERFIPROC>(it->second);
    return next(buffer, drawbuffer, depth, stencil);
}

void opengl_es_layer_glClearBufferfv(GLenum buffer, GLint drawbuffer, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glClearBufferfv", buffer, drawbuffer, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearBufferfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearBufferfv");
    }

    typedef void (*PFNGLCLEARBUFFERFVPROC)(GLenum, GLint, GLfloat*);
    PFNGLCLEARBUFFERFVPROC next = reinterpret_cast<PFNGLCLEARBUFFERFVPROC>(it->second);
    return next(buffer, drawbuffer, value);
}

void opengl_es_layer_glClearBufferiv(GLenum buffer, GLint drawbuffer, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glClearBufferiv", buffer, drawbuffer, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearBufferiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearBufferiv");
    }

    typedef void (*PFNGLCLEARBUFFERIVPROC)(GLenum, GLint, GLint*);
    PFNGLCLEARBUFFERIVPROC next = reinterpret_cast<PFNGLCLEARBUFFERIVPROC>(it->second);
    return next(buffer, drawbuffer, value);
}

void opengl_es_layer_glClearBufferuiv(GLenum buffer, GLint drawbuffer, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glClearBufferuiv", buffer, drawbuffer, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearBufferuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearBufferuiv");
    }

    typedef void (*PFNGLCLEARBUFFERUIVPROC)(GLenum, GLint, GLuint*);
    PFNGLCLEARBUFFERUIVPROC next = reinterpret_cast<PFNGLCLEARBUFFERUIVPROC>(it->second);
    return next(buffer, drawbuffer, value);
}

void opengl_es_layer_glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f)", mCmdIndex++, "glClearColor", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearColor");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearColor");
    }

    typedef void (*PFNGLCLEARCOLORPROC)(GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLCLEARCOLORPROC next = reinterpret_cast<PFNGLCLEARCOLORPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glClearColorx", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearColorx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearColorx");
    }

    typedef void (*PFNGLCLEARCOLORXPROC)(GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLCLEARCOLORXPROC next = reinterpret_cast<PFNGLCLEARCOLORXPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glClearColorxOES", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearColorxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearColorxOES");
    }

    typedef void (*PFNGLCLEARCOLORXOESPROC)(GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLCLEARCOLORXOESPROC next = reinterpret_cast<PFNGLCLEARCOLORXOESPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glClearDepthf(GLfloat d) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f)", mCmdIndex++, "glClearDepthf", d);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearDepthf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearDepthf");
    }

    typedef void (*PFNGLCLEARDEPTHFPROC)(GLfloat);
    PFNGLCLEARDEPTHFPROC next = reinterpret_cast<PFNGLCLEARDEPTHFPROC>(it->second);
    return next(d);
}

void opengl_es_layer_glClearDepthfOES(GLclampf depth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f)", mCmdIndex++, "glClearDepthfOES", depth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearDepthfOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearDepthfOES");
    }

    typedef void (*PFNGLCLEARDEPTHFOESPROC)(GLclampf);
    PFNGLCLEARDEPTHFOESPROC next = reinterpret_cast<PFNGLCLEARDEPTHFOESPROC>(it->second);
    return next(depth);
}

void opengl_es_layer_glClearDepthx(GLfixed depth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glClearDepthx", depth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearDepthx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearDepthx");
    }

    typedef void (*PFNGLCLEARDEPTHXPROC)(GLfixed);
    PFNGLCLEARDEPTHXPROC next = reinterpret_cast<PFNGLCLEARDEPTHXPROC>(it->second);
    return next(depth);
}

void opengl_es_layer_glClearDepthxOES(GLfixed depth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glClearDepthxOES", depth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearDepthxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearDepthxOES");
    }

    typedef void (*PFNGLCLEARDEPTHXOESPROC)(GLfixed);
    PFNGLCLEARDEPTHXOESPROC next = reinterpret_cast<PFNGLCLEARDEPTHXOESPROC>(it->second);
    return next(depth);
}

void opengl_es_layer_glClearPixelLocalStorageuiEXT(GLsizei offset, GLsizei n, GLuint* values) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glClearPixelLocalStorageuiEXT", offset, n, values);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearPixelLocalStorageuiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearPixelLocalStorageuiEXT");
    }

    typedef void (*PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC)(GLsizei, GLsizei, GLuint*);
    PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC next = reinterpret_cast<PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC>(it->second);
    return next(offset, n, values);
}

void opengl_es_layer_glClearStencil(GLint s) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glClearStencil", s);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearStencil");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearStencil");
    }

    typedef void (*PFNGLCLEARSTENCILPROC)(GLint);
    PFNGLCLEARSTENCILPROC next = reinterpret_cast<PFNGLCLEARSTENCILPROC>(it->second);
    return next(s);
}

void opengl_es_layer_glClearTexImageEXT(GLuint texture, GLint level, GLenum format, GLenum type, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u, %p)", mCmdIndex++, "glClearTexImageEXT", texture, level, format, type, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearTexImageEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearTexImageEXT");
    }

    typedef void (*PFNGLCLEARTEXIMAGEEXTPROC)(GLuint, GLint, GLenum, GLenum, void*);
    PFNGLCLEARTEXIMAGEEXTPROC next = reinterpret_cast<PFNGLCLEARTEXIMAGEEXTPROC>(it->second);
    return next(texture, level, format, type, data);
}

void opengl_es_layer_glClearTexSubImageEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glClearTexSubImageEXT", texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClearTexSubImageEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClearTexSubImageEXT");
    }

    typedef void (*PFNGLCLEARTEXSUBIMAGEEXTPROC)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void*);
    PFNGLCLEARTEXSUBIMAGEEXTPROC next = reinterpret_cast<PFNGLCLEARTEXSUBIMAGEEXTPROC>(it->second);
    return next(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void opengl_es_layer_glClientActiveTexture(GLenum texture) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glClientActiveTexture", texture);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClientActiveTexture");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClientActiveTexture");
    }

    typedef void (*PFNGLCLIENTACTIVETEXTUREPROC)(GLenum);
    PFNGLCLIENTACTIVETEXTUREPROC next = reinterpret_cast<PFNGLCLIENTACTIVETEXTUREPROC>(it->second);
    return next(texture);
}

GLenum opengl_es_layer_glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %" PRIu64 ")", mCmdIndex++, "glClientWaitSync", sync, flags, timeout);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClientWaitSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClientWaitSync");
    }

    typedef GLenum (*PFNGLCLIENTWAITSYNCPROC)(GLsync, GLbitfield, GLuint64);
    PFNGLCLIENTWAITSYNCPROC next = reinterpret_cast<PFNGLCLIENTWAITSYNCPROC>(it->second);
    return next(sync, flags, timeout);
}

GLenum opengl_es_layer_glClientWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %" PRIu64 ")", mCmdIndex++, "glClientWaitSyncAPPLE", sync, flags, timeout);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClientWaitSyncAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClientWaitSyncAPPLE");
    }

    typedef GLenum (*PFNGLCLIENTWAITSYNCAPPLEPROC)(GLsync, GLbitfield, GLuint64);
    PFNGLCLIENTWAITSYNCAPPLEPROC next = reinterpret_cast<PFNGLCLIENTWAITSYNCAPPLEPROC>(it->second);
    return next(sync, flags, timeout);
}

void opengl_es_layer_glClipControlEXT(GLenum origin, GLenum depth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glClipControlEXT", origin, depth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClipControlEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClipControlEXT");
    }

    typedef void (*PFNGLCLIPCONTROLEXTPROC)(GLenum, GLenum);
    PFNGLCLIPCONTROLEXTPROC next = reinterpret_cast<PFNGLCLIPCONTROLEXTPROC>(it->second);
    return next(origin, depth);
}

void opengl_es_layer_glClipPlanef(GLenum p, GLfloat* eqn) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glClipPlanef", p, eqn);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClipPlanef");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClipPlanef");
    }

    typedef void (*PFNGLCLIPPLANEFPROC)(GLenum, GLfloat*);
    PFNGLCLIPPLANEFPROC next = reinterpret_cast<PFNGLCLIPPLANEFPROC>(it->second);
    return next(p, eqn);
}

void opengl_es_layer_glClipPlanefIMG(GLenum p, GLfloat* eqn) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glClipPlanefIMG", p, eqn);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClipPlanefIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClipPlanefIMG");
    }

    typedef void (*PFNGLCLIPPLANEFIMGPROC)(GLenum, GLfloat*);
    PFNGLCLIPPLANEFIMGPROC next = reinterpret_cast<PFNGLCLIPPLANEFIMGPROC>(it->second);
    return next(p, eqn);
}

void opengl_es_layer_glClipPlanefOES(GLenum plane, GLfloat* equation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glClipPlanefOES", plane, equation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClipPlanefOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClipPlanefOES");
    }

    typedef void (*PFNGLCLIPPLANEFOESPROC)(GLenum, GLfloat*);
    PFNGLCLIPPLANEFOESPROC next = reinterpret_cast<PFNGLCLIPPLANEFOESPROC>(it->second);
    return next(plane, equation);
}

void opengl_es_layer_glClipPlanex(GLenum plane, GLfixed* equation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glClipPlanex", plane, equation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClipPlanex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClipPlanex");
    }

    typedef void (*PFNGLCLIPPLANEXPROC)(GLenum, GLfixed*);
    PFNGLCLIPPLANEXPROC next = reinterpret_cast<PFNGLCLIPPLANEXPROC>(it->second);
    return next(plane, equation);
}

void opengl_es_layer_glClipPlanexIMG(GLenum p, GLfixed* eqn) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glClipPlanexIMG", p, eqn);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClipPlanexIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClipPlanexIMG");
    }

    typedef void (*PFNGLCLIPPLANEXIMGPROC)(GLenum, GLfixed*);
    PFNGLCLIPPLANEXIMGPROC next = reinterpret_cast<PFNGLCLIPPLANEXIMGPROC>(it->second);
    return next(p, eqn);
}

void opengl_es_layer_glClipPlanexOES(GLenum plane, GLfixed* equation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glClipPlanexOES", plane, equation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glClipPlanexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glClipPlanexOES");
    }

    typedef void (*PFNGLCLIPPLANEXOESPROC)(GLenum, GLfixed*);
    PFNGLCLIPPLANEXOESPROC next = reinterpret_cast<PFNGLCLIPPLANEXOESPROC>(it->second);
    return next(plane, equation);
}

void opengl_es_layer_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f)", mCmdIndex++, "glColor4f", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColor4f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColor4f");
    }

    typedef void (*PFNGLCOLOR4FPROC)(GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLCOLOR4FPROC next = reinterpret_cast<PFNGLCOLOR4FPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glColor4ub", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColor4ub");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColor4ub");
    }

    typedef void (*PFNGLCOLOR4UBPROC)(GLubyte, GLubyte, GLubyte, GLubyte);
    PFNGLCOLOR4UBPROC next = reinterpret_cast<PFNGLCOLOR4UBPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glColor4x", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColor4x");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColor4x");
    }

    typedef void (*PFNGLCOLOR4XPROC)(GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLCOLOR4XPROC next = reinterpret_cast<PFNGLCOLOR4XPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glColor4xOES", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColor4xOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColor4xOES");
    }

    typedef void (*PFNGLCOLOR4XOESPROC)(GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLCOLOR4XOESPROC next = reinterpret_cast<PFNGLCOLOR4XOESPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glColorMask", red, green, blue, alpha);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColorMask");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColorMask");
    }

    typedef void (*PFNGLCOLORMASKPROC)(GLboolean, GLboolean, GLboolean, GLboolean);
    PFNGLCOLORMASKPROC next = reinterpret_cast<PFNGLCOLORMASKPROC>(it->second);
    return next(red, green, blue, alpha);
}

void opengl_es_layer_glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glColorMaski", index, r, g, b, a);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColorMaski");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColorMaski");
    }

    typedef void (*PFNGLCOLORMASKIPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
    PFNGLCOLORMASKIPROC next = reinterpret_cast<PFNGLCOLORMASKIPROC>(it->second);
    return next(index, r, g, b, a);
}

void opengl_es_layer_glColorMaskiEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glColorMaskiEXT", index, r, g, b, a);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColorMaskiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColorMaskiEXT");
    }

    typedef void (*PFNGLCOLORMASKIEXTPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
    PFNGLCOLORMASKIEXTPROC next = reinterpret_cast<PFNGLCOLORMASKIEXTPROC>(it->second);
    return next(index, r, g, b, a);
}

void opengl_es_layer_glColorMaskiOES(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glColorMaskiOES", index, r, g, b, a);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColorMaskiOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColorMaskiOES");
    }

    typedef void (*PFNGLCOLORMASKIOESPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
    PFNGLCOLORMASKIOESPROC next = reinterpret_cast<PFNGLCOLORMASKIOESPROC>(it->second);
    return next(index, r, g, b, a);
}

void opengl_es_layer_glColorPointer(GLint size, GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %d, %p)", mCmdIndex++, "glColorPointer", size, type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glColorPointer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glColorPointer");
    }

    typedef void (*PFNGLCOLORPOINTERPROC)(GLint, GLenum, GLsizei, void*);
    PFNGLCOLORPOINTERPROC next = reinterpret_cast<PFNGLCOLORPOINTERPROC>(it->second);
    return next(size, type, stride, pointer);
}

void opengl_es_layer_glCompileShader(GLuint shader) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCompileShader", shader);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCompileShader");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCompileShader");
    }

    typedef void (*PFNGLCOMPILESHADERPROC)(GLuint);
    PFNGLCOMPILESHADERPROC next = reinterpret_cast<PFNGLCOMPILESHADERPROC>(it->second);
    return next(shader);
}

void opengl_es_layer_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %d, %p)", mCmdIndex++, "glCompressedTexImage2D", target, level, internalformat, width, height, border, imageSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCompressedTexImage2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCompressedTexImage2D");
    }

    typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, void*);
    PFNGLCOMPRESSEDTEXIMAGE2DPROC next = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC>(it->second);
    return next(target, level, internalformat, width, height, border, imageSize, data);
}

void opengl_es_layer_glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %d, %d, %p)", mCmdIndex++, "glCompressedTexImage3D", target, level, internalformat, width, height, depth, border, imageSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCompressedTexImage3D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCompressedTexImage3D");
    }

    typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, void*);
    PFNGLCOMPRESSEDTEXIMAGE3DPROC next = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DPROC>(it->second);
    return next(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void opengl_es_layer_glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %d, %d, %p)", mCmdIndex++, "glCompressedTexImage3DOES", target, level, internalformat, width, height, depth, border, imageSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCompressedTexImage3DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCompressedTexImage3DOES");
    }

    typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DOESPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, void*);
    PFNGLCOMPRESSEDTEXIMAGE3DOESPROC next = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DOESPROC>(it->second);
    return next(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void opengl_es_layer_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %u, %d, %p)", mCmdIndex++, "glCompressedTexSubImage2D", target, level, xoffset, yoffset, width, height, format, imageSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCompressedTexSubImage2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCompressedTexSubImage2D");
    }

    typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, void*);
    PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC next = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>(it->second);
    return next(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void opengl_es_layer_glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %u, %d, %p)", mCmdIndex++, "glCompressedTexSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCompressedTexSubImage3D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCompressedTexSubImage3D");
    }

    typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, void*);
    PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC next = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void opengl_es_layer_glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %u, %d, %p)", mCmdIndex++, "glCompressedTexSubImage3DOES", target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCompressedTexSubImage3DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCompressedTexSubImage3DOES");
    }

    typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, void*);
    PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC next = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void opengl_es_layer_glConservativeRasterParameteriNV(GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glConservativeRasterParameteriNV", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glConservativeRasterParameteriNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glConservativeRasterParameteriNV");
    }

    typedef void (*PFNGLCONSERVATIVERASTERPARAMETERINVPROC)(GLenum, GLint);
    PFNGLCONSERVATIVERASTERPARAMETERINVPROC next = reinterpret_cast<PFNGLCONSERVATIVERASTERPARAMETERINVPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %ld, %ld, %ld)", mCmdIndex++, "glCopyBufferSubData", readTarget, writeTarget, readOffset, writeOffset, size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyBufferSubData");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyBufferSubData");
    }

    typedef void (*PFNGLCOPYBUFFERSUBDATAPROC)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr);
    PFNGLCOPYBUFFERSUBDATAPROC next = reinterpret_cast<PFNGLCOPYBUFFERSUBDATAPROC>(it->second);
    return next(readTarget, writeTarget, readOffset, writeOffset, size);
}

void opengl_es_layer_glCopyBufferSubDataNV(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %ld, %ld, %ld)", mCmdIndex++, "glCopyBufferSubDataNV", readTarget, writeTarget, readOffset, writeOffset, size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyBufferSubDataNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyBufferSubDataNV");
    }

    typedef void (*PFNGLCOPYBUFFERSUBDATANVPROC)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr);
    PFNGLCOPYBUFFERSUBDATANVPROC next = reinterpret_cast<PFNGLCOPYBUFFERSUBDATANVPROC>(it->second);
    return next(readTarget, writeTarget, readOffset, writeOffset, size);
}

void opengl_es_layer_glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %d, %d, %d, %u, %u, %d, %d, %d, %d, %d, %d, %d)", mCmdIndex++, "glCopyImageSubData", srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyImageSubData");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyImageSubData");
    }

    typedef void (*PFNGLCOPYIMAGESUBDATAPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
    PFNGLCOPYIMAGESUBDATAPROC next = reinterpret_cast<PFNGLCOPYIMAGESUBDATAPROC>(it->second);
    return next(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void opengl_es_layer_glCopyImageSubDataEXT(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %d, %d, %d, %u, %u, %d, %d, %d, %d, %d, %d, %d)", mCmdIndex++, "glCopyImageSubDataEXT", srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyImageSubDataEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyImageSubDataEXT");
    }

    typedef void (*PFNGLCOPYIMAGESUBDATAEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
    PFNGLCOPYIMAGESUBDATAEXTPROC next = reinterpret_cast<PFNGLCOPYIMAGESUBDATAEXTPROC>(it->second);
    return next(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void opengl_es_layer_glCopyImageSubDataOES(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %d, %d, %d, %u, %u, %d, %d, %d, %d, %d, %d, %d)", mCmdIndex++, "glCopyImageSubDataOES", srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyImageSubDataOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyImageSubDataOES");
    }

    typedef void (*PFNGLCOPYIMAGESUBDATAOESPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
    PFNGLCOPYIMAGESUBDATAOESPROC next = reinterpret_cast<PFNGLCOPYIMAGESUBDATAOESPROC>(it->second);
    return next(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void opengl_es_layer_glCopyPathNV(GLuint resultPath, GLuint srcPath) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glCopyPathNV", resultPath, srcPath);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyPathNV");
    }

    typedef void (*PFNGLCOPYPATHNVPROC)(GLuint, GLuint);
    PFNGLCOPYPATHNVPROC next = reinterpret_cast<PFNGLCOPYPATHNVPROC>(it->second);
    return next(resultPath, srcPath);
}

void opengl_es_layer_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %d, %d)", mCmdIndex++, "glCopyTexImage2D", target, level, internalformat, x, y, width, height, border);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyTexImage2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyTexImage2D");
    }

    typedef void (*PFNGLCOPYTEXIMAGE2DPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
    PFNGLCOPYTEXIMAGE2DPROC next = reinterpret_cast<PFNGLCOPYTEXIMAGE2DPROC>(it->second);
    return next(target, level, internalformat, x, y, width, height, border);
}

void opengl_es_layer_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d)", mCmdIndex++, "glCopyTexSubImage2D", target, level, xoffset, yoffset, x, y, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyTexSubImage2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyTexSubImage2D");
    }

    typedef void (*PFNGLCOPYTEXSUBIMAGE2DPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
    PFNGLCOPYTEXSUBIMAGE2DPROC next = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE2DPROC>(it->second);
    return next(target, level, xoffset, yoffset, x, y, width, height);
}

void opengl_es_layer_glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %d)", mCmdIndex++, "glCopyTexSubImage3D", target, level, xoffset, yoffset, zoffset, x, y, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyTexSubImage3D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyTexSubImage3D");
    }

    typedef void (*PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
    PFNGLCOPYTEXSUBIMAGE3DPROC next = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void opengl_es_layer_glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %d)", mCmdIndex++, "glCopyTexSubImage3DOES", target, level, xoffset, yoffset, zoffset, x, y, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyTexSubImage3DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyTexSubImage3DOES");
    }

    typedef void (*PFNGLCOPYTEXSUBIMAGE3DOESPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
    PFNGLCOPYTEXSUBIMAGE3DOESPROC next = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DOESPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void opengl_es_layer_glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %d)", mCmdIndex++, "glCopyTextureLevelsAPPLE", destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCopyTextureLevelsAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCopyTextureLevelsAPPLE");
    }

    typedef void (*PFNGLCOPYTEXTURELEVELSAPPLEPROC)(GLuint, GLuint, GLint, GLsizei);
    PFNGLCOPYTEXTURELEVELSAPPLEPROC next = reinterpret_cast<PFNGLCOPYTEXTURELEVELSAPPLEPROC>(it->second);
    return next(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

void opengl_es_layer_glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLenum coverMode, GLenum transformType, GLfloat* transformValues) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %p, %u, %u, %u, %p)", mCmdIndex++, "glCoverFillPathInstancedNV", numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverFillPathInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverFillPathInstancedNV");
    }

    typedef void (*PFNGLCOVERFILLPATHINSTANCEDNVPROC)(GLsizei, GLenum, void*, GLuint, GLenum, GLenum, GLfloat*);
    PFNGLCOVERFILLPATHINSTANCEDNVPROC next = reinterpret_cast<PFNGLCOVERFILLPATHINSTANCEDNVPROC>(it->second);
    return next(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void opengl_es_layer_glCoverFillPathNV(GLuint path, GLenum coverMode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glCoverFillPathNV", path, coverMode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverFillPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverFillPathNV");
    }

    typedef void (*PFNGLCOVERFILLPATHNVPROC)(GLuint, GLenum);
    PFNGLCOVERFILLPATHNVPROC next = reinterpret_cast<PFNGLCOVERFILLPATHNVPROC>(it->second);
    return next(path, coverMode);
}

void opengl_es_layer_glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLenum coverMode, GLenum transformType, GLfloat* transformValues) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %p, %u, %u, %u, %p)", mCmdIndex++, "glCoverStrokePathInstancedNV", numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverStrokePathInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverStrokePathInstancedNV");
    }

    typedef void (*PFNGLCOVERSTROKEPATHINSTANCEDNVPROC)(GLsizei, GLenum, void*, GLuint, GLenum, GLenum, GLfloat*);
    PFNGLCOVERSTROKEPATHINSTANCEDNVPROC next = reinterpret_cast<PFNGLCOVERSTROKEPATHINSTANCEDNVPROC>(it->second);
    return next(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void opengl_es_layer_glCoverStrokePathNV(GLuint path, GLenum coverMode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glCoverStrokePathNV", path, coverMode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverStrokePathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverStrokePathNV");
    }

    typedef void (*PFNGLCOVERSTROKEPATHNVPROC)(GLuint, GLenum);
    PFNGLCOVERSTROKEPATHNVPROC next = reinterpret_cast<PFNGLCOVERSTROKEPATHNVPROC>(it->second);
    return next(path, coverMode);
}

void opengl_es_layer_glCoverageMaskNV(GLboolean mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCoverageMaskNV", mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverageMaskNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverageMaskNV");
    }

    typedef void (*PFNGLCOVERAGEMASKNVPROC)(GLboolean);
    PFNGLCOVERAGEMASKNVPROC next = reinterpret_cast<PFNGLCOVERAGEMASKNVPROC>(it->second);
    return next(mask);
}

void opengl_es_layer_glCoverageModulationNV(GLenum components) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCoverageModulationNV", components);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverageModulationNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverageModulationNV");
    }

    typedef void (*PFNGLCOVERAGEMODULATIONNVPROC)(GLenum);
    PFNGLCOVERAGEMODULATIONNVPROC next = reinterpret_cast<PFNGLCOVERAGEMODULATIONNVPROC>(it->second);
    return next(components);
}

void opengl_es_layer_glCoverageModulationTableNV(GLsizei n, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glCoverageModulationTableNV", n, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverageModulationTableNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverageModulationTableNV");
    }

    typedef void (*PFNGLCOVERAGEMODULATIONTABLENVPROC)(GLsizei, GLfloat*);
    PFNGLCOVERAGEMODULATIONTABLENVPROC next = reinterpret_cast<PFNGLCOVERAGEMODULATIONTABLENVPROC>(it->second);
    return next(n, v);
}

void opengl_es_layer_glCoverageOperationNV(GLenum operation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCoverageOperationNV", operation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCoverageOperationNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCoverageOperationNV");
    }

    typedef void (*PFNGLCOVERAGEOPERATIONNVPROC)(GLenum);
    PFNGLCOVERAGEOPERATIONNVPROC next = reinterpret_cast<PFNGLCOVERAGEOPERATIONNVPROC>(it->second);
    return next(operation);
}

void opengl_es_layer_glCreateMemoryObjectsEXT(GLsizei n, GLuint* memoryObjects) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glCreateMemoryObjectsEXT", n, memoryObjects);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCreateMemoryObjectsEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCreateMemoryObjectsEXT");
    }

    typedef void (*PFNGLCREATEMEMORYOBJECTSEXTPROC)(GLsizei, GLuint*);
    PFNGLCREATEMEMORYOBJECTSEXTPROC next = reinterpret_cast<PFNGLCREATEMEMORYOBJECTSEXTPROC>(it->second);
    return next(n, memoryObjects);
}

void opengl_es_layer_glCreatePerfQueryINTEL(GLuint queryId, GLuint* queryHandle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glCreatePerfQueryINTEL", queryId, queryHandle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCreatePerfQueryINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCreatePerfQueryINTEL");
    }

    typedef void (*PFNGLCREATEPERFQUERYINTELPROC)(GLuint, GLuint*);
    PFNGLCREATEPERFQUERYINTELPROC next = reinterpret_cast<PFNGLCREATEPERFQUERYINTELPROC>(it->second);
    return next(queryId, queryHandle);
}

GLuint opengl_es_layer_glCreateProgram(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glCreateProgram");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCreateProgram");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCreateProgram");
    }

    typedef GLuint (*PFNGLCREATEPROGRAMPROC)(void);
    PFNGLCREATEPROGRAMPROC next = reinterpret_cast<PFNGLCREATEPROGRAMPROC>(it->second);
    return next();
}

GLuint opengl_es_layer_glCreateShader(GLenum type) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCreateShader", type);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCreateShader");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCreateShader");
    }

    typedef GLuint (*PFNGLCREATESHADERPROC)(GLenum);
    PFNGLCREATESHADERPROC next = reinterpret_cast<PFNGLCREATESHADERPROC>(it->second);
    return next(type);
}

GLuint opengl_es_layer_glCreateShaderProgramv(GLenum type, GLsizei count, GLchar** strings) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %s)", mCmdIndex++, "glCreateShaderProgramv", type, count, *strings);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCreateShaderProgramv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCreateShaderProgramv");
    }

    typedef GLuint (*PFNGLCREATESHADERPROGRAMVPROC)(GLenum, GLsizei, GLchar**);
    PFNGLCREATESHADERPROGRAMVPROC next = reinterpret_cast<PFNGLCREATESHADERPROGRAMVPROC>(it->second);
    return next(type, count, strings);
}

GLuint opengl_es_layer_glCreateShaderProgramvEXT(GLenum type, GLsizei count, GLchar** strings) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %s)", mCmdIndex++, "glCreateShaderProgramvEXT", type, count, *strings);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCreateShaderProgramvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCreateShaderProgramvEXT");
    }

    typedef GLuint (*PFNGLCREATESHADERPROGRAMVEXTPROC)(GLenum, GLsizei, GLchar**);
    PFNGLCREATESHADERPROGRAMVEXTPROC next = reinterpret_cast<PFNGLCREATESHADERPROGRAMVEXTPROC>(it->second);
    return next(type, count, strings);
}

void opengl_es_layer_glCullFace(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCullFace", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCullFace");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCullFace");
    }

    typedef void (*PFNGLCULLFACEPROC)(GLenum);
    PFNGLCULLFACEPROC next = reinterpret_cast<PFNGLCULLFACEPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glCurrentPaletteMatrixOES(GLuint matrixpaletteindex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glCurrentPaletteMatrixOES", matrixpaletteindex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glCurrentPaletteMatrixOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glCurrentPaletteMatrixOES");
    }

    typedef void (*PFNGLCURRENTPALETTEMATRIXOESPROC)(GLuint);
    PFNGLCURRENTPALETTEMATRIXOESPROC next = reinterpret_cast<PFNGLCURRENTPALETTEMATRIXOESPROC>(it->second);
    return next(matrixpaletteindex);
}

void opengl_es_layer_glDebugMessageCallback(GLDEBUGPROC callback, void* userParam) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "glDebugMessageCallback", callback, userParam);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDebugMessageCallback");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDebugMessageCallback");
    }

    typedef void (*PFNGLDEBUGMESSAGECALLBACKPROC)(GLDEBUGPROC, void*);
    PFNGLDEBUGMESSAGECALLBACKPROC next = reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKPROC>(it->second);
    return next(callback, userParam);
}

void opengl_es_layer_glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, void* userParam) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "glDebugMessageCallbackKHR", callback, userParam);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDebugMessageCallbackKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDebugMessageCallbackKHR");
    }

    typedef void (*PFNGLDEBUGMESSAGECALLBACKKHRPROC)(GLDEBUGPROCKHR, void*);
    PFNGLDEBUGMESSAGECALLBACKKHRPROC next = reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKKHRPROC>(it->second);
    return next(callback, userParam);
}

void opengl_es_layer_glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint* ids, GLboolean enabled) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %p, %u)", mCmdIndex++, "glDebugMessageControl", source, type, severity, count, ids, enabled);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDebugMessageControl");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDebugMessageControl");
    }

    typedef void (*PFNGLDEBUGMESSAGECONTROLPROC)(GLenum, GLenum, GLenum, GLsizei, GLuint*, GLboolean);
    PFNGLDEBUGMESSAGECONTROLPROC next = reinterpret_cast<PFNGLDEBUGMESSAGECONTROLPROC>(it->second);
    return next(source, type, severity, count, ids, enabled);
}

void opengl_es_layer_glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint* ids, GLboolean enabled) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %p, %u)", mCmdIndex++, "glDebugMessageControlKHR", source, type, severity, count, ids, enabled);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDebugMessageControlKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDebugMessageControlKHR");
    }

    typedef void (*PFNGLDEBUGMESSAGECONTROLKHRPROC)(GLenum, GLenum, GLenum, GLsizei, GLuint*, GLboolean);
    PFNGLDEBUGMESSAGECONTROLKHRPROC next = reinterpret_cast<PFNGLDEBUGMESSAGECONTROLKHRPROC>(it->second);
    return next(source, type, severity, count, ids, enabled);
}

void opengl_es_layer_glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar* buf) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d, %s)", mCmdIndex++, "glDebugMessageInsert", source, type, id, severity, length, buf);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDebugMessageInsert");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDebugMessageInsert");
    }

    typedef void (*PFNGLDEBUGMESSAGEINSERTPROC)(GLenum, GLenum, GLuint, GLenum, GLsizei, GLchar*);
    PFNGLDEBUGMESSAGEINSERTPROC next = reinterpret_cast<PFNGLDEBUGMESSAGEINSERTPROC>(it->second);
    return next(source, type, id, severity, length, buf);
}

void opengl_es_layer_glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar* buf) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d, %s)", mCmdIndex++, "glDebugMessageInsertKHR", source, type, id, severity, length, buf);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDebugMessageInsertKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDebugMessageInsertKHR");
    }

    typedef void (*PFNGLDEBUGMESSAGEINSERTKHRPROC)(GLenum, GLenum, GLuint, GLenum, GLsizei, GLchar*);
    PFNGLDEBUGMESSAGEINSERTKHRPROC next = reinterpret_cast<PFNGLDEBUGMESSAGEINSERTKHRPROC>(it->second);
    return next(source, type, id, severity, length, buf);
}

void opengl_es_layer_glDeleteBuffers(GLsizei n, GLuint* buffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteBuffers", n, buffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteBuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteBuffers");
    }

    typedef void (*PFNGLDELETEBUFFERSPROC)(GLsizei, GLuint*);
    PFNGLDELETEBUFFERSPROC next = reinterpret_cast<PFNGLDELETEBUFFERSPROC>(it->second);
    return next(n, buffers);
}

void opengl_es_layer_glDeleteFencesNV(GLsizei n, GLuint* fences) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteFencesNV", n, fences);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteFencesNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteFencesNV");
    }

    typedef void (*PFNGLDELETEFENCESNVPROC)(GLsizei, GLuint*);
    PFNGLDELETEFENCESNVPROC next = reinterpret_cast<PFNGLDELETEFENCESNVPROC>(it->second);
    return next(n, fences);
}

void opengl_es_layer_glDeleteFramebuffers(GLsizei n, GLuint* framebuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteFramebuffers", n, framebuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteFramebuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteFramebuffers");
    }

    typedef void (*PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei, GLuint*);
    PFNGLDELETEFRAMEBUFFERSPROC next = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(it->second);
    return next(n, framebuffers);
}

void opengl_es_layer_glDeleteFramebuffersOES(GLsizei n, GLuint* framebuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteFramebuffersOES", n, framebuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteFramebuffersOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteFramebuffersOES");
    }

    typedef void (*PFNGLDELETEFRAMEBUFFERSOESPROC)(GLsizei, GLuint*);
    PFNGLDELETEFRAMEBUFFERSOESPROC next = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSOESPROC>(it->second);
    return next(n, framebuffers);
}

void opengl_es_layer_glDeleteMemoryObjectsEXT(GLsizei n, GLuint* memoryObjects) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteMemoryObjectsEXT", n, memoryObjects);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteMemoryObjectsEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteMemoryObjectsEXT");
    }

    typedef void (*PFNGLDELETEMEMORYOBJECTSEXTPROC)(GLsizei, GLuint*);
    PFNGLDELETEMEMORYOBJECTSEXTPROC next = reinterpret_cast<PFNGLDELETEMEMORYOBJECTSEXTPROC>(it->second);
    return next(n, memoryObjects);
}

void opengl_es_layer_glDeletePathsNV(GLuint path, GLsizei range) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glDeletePathsNV", path, range);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeletePathsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeletePathsNV");
    }

    typedef void (*PFNGLDELETEPATHSNVPROC)(GLuint, GLsizei);
    PFNGLDELETEPATHSNVPROC next = reinterpret_cast<PFNGLDELETEPATHSNVPROC>(it->second);
    return next(path, range);
}

void opengl_es_layer_glDeletePerfMonitorsAMD(GLsizei n, GLuint* monitors) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeletePerfMonitorsAMD", n, monitors);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeletePerfMonitorsAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeletePerfMonitorsAMD");
    }

    typedef void (*PFNGLDELETEPERFMONITORSAMDPROC)(GLsizei, GLuint*);
    PFNGLDELETEPERFMONITORSAMDPROC next = reinterpret_cast<PFNGLDELETEPERFMONITORSAMDPROC>(it->second);
    return next(n, monitors);
}

void opengl_es_layer_glDeletePerfQueryINTEL(GLuint queryHandle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDeletePerfQueryINTEL", queryHandle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeletePerfQueryINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeletePerfQueryINTEL");
    }

    typedef void (*PFNGLDELETEPERFQUERYINTELPROC)(GLuint);
    PFNGLDELETEPERFQUERYINTELPROC next = reinterpret_cast<PFNGLDELETEPERFQUERYINTELPROC>(it->second);
    return next(queryHandle);
}

void opengl_es_layer_glDeleteProgram(GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDeleteProgram", program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteProgram");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteProgram");
    }

    typedef void (*PFNGLDELETEPROGRAMPROC)(GLuint);
    PFNGLDELETEPROGRAMPROC next = reinterpret_cast<PFNGLDELETEPROGRAMPROC>(it->second);
    return next(program);
}

void opengl_es_layer_glDeleteProgramPipelines(GLsizei n, GLuint* pipelines) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteProgramPipelines", n, pipelines);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteProgramPipelines");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteProgramPipelines");
    }

    typedef void (*PFNGLDELETEPROGRAMPIPELINESPROC)(GLsizei, GLuint*);
    PFNGLDELETEPROGRAMPIPELINESPROC next = reinterpret_cast<PFNGLDELETEPROGRAMPIPELINESPROC>(it->second);
    return next(n, pipelines);
}

void opengl_es_layer_glDeleteProgramPipelinesEXT(GLsizei n, GLuint* pipelines) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteProgramPipelinesEXT", n, pipelines);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteProgramPipelinesEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteProgramPipelinesEXT");
    }

    typedef void (*PFNGLDELETEPROGRAMPIPELINESEXTPROC)(GLsizei, GLuint*);
    PFNGLDELETEPROGRAMPIPELINESEXTPROC next = reinterpret_cast<PFNGLDELETEPROGRAMPIPELINESEXTPROC>(it->second);
    return next(n, pipelines);
}

void opengl_es_layer_glDeleteQueries(GLsizei n, GLuint* ids) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteQueries", n, ids);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteQueries");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteQueries");
    }

    typedef void (*PFNGLDELETEQUERIESPROC)(GLsizei, GLuint*);
    PFNGLDELETEQUERIESPROC next = reinterpret_cast<PFNGLDELETEQUERIESPROC>(it->second);
    return next(n, ids);
}

void opengl_es_layer_glDeleteQueriesEXT(GLsizei n, GLuint* ids) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteQueriesEXT", n, ids);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteQueriesEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteQueriesEXT");
    }

    typedef void (*PFNGLDELETEQUERIESEXTPROC)(GLsizei, GLuint*);
    PFNGLDELETEQUERIESEXTPROC next = reinterpret_cast<PFNGLDELETEQUERIESEXTPROC>(it->second);
    return next(n, ids);
}

void opengl_es_layer_glDeleteRenderbuffers(GLsizei n, GLuint* renderbuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteRenderbuffers", n, renderbuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteRenderbuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteRenderbuffers");
    }

    typedef void (*PFNGLDELETERENDERBUFFERSPROC)(GLsizei, GLuint*);
    PFNGLDELETERENDERBUFFERSPROC next = reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC>(it->second);
    return next(n, renderbuffers);
}

void opengl_es_layer_glDeleteRenderbuffersOES(GLsizei n, GLuint* renderbuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteRenderbuffersOES", n, renderbuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteRenderbuffersOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteRenderbuffersOES");
    }

    typedef void (*PFNGLDELETERENDERBUFFERSOESPROC)(GLsizei, GLuint*);
    PFNGLDELETERENDERBUFFERSOESPROC next = reinterpret_cast<PFNGLDELETERENDERBUFFERSOESPROC>(it->second);
    return next(n, renderbuffers);
}

void opengl_es_layer_glDeleteSamplers(GLsizei count, GLuint* samplers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteSamplers", count, samplers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteSamplers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteSamplers");
    }

    typedef void (*PFNGLDELETESAMPLERSPROC)(GLsizei, GLuint*);
    PFNGLDELETESAMPLERSPROC next = reinterpret_cast<PFNGLDELETESAMPLERSPROC>(it->second);
    return next(count, samplers);
}

void opengl_es_layer_glDeleteSemaphoresEXT(GLsizei n, GLuint* semaphores) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteSemaphoresEXT", n, semaphores);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteSemaphoresEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteSemaphoresEXT");
    }

    typedef void (*PFNGLDELETESEMAPHORESEXTPROC)(GLsizei, GLuint*);
    PFNGLDELETESEMAPHORESEXTPROC next = reinterpret_cast<PFNGLDELETESEMAPHORESEXTPROC>(it->second);
    return next(n, semaphores);
}

void opengl_es_layer_glDeleteShader(GLuint shader) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDeleteShader", shader);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteShader");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteShader");
    }

    typedef void (*PFNGLDELETESHADERPROC)(GLuint);
    PFNGLDELETESHADERPROC next = reinterpret_cast<PFNGLDELETESHADERPROC>(it->second);
    return next(shader);
}

void opengl_es_layer_glDeleteSync(GLsync sync) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glDeleteSync", sync);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteSync");
    }

    typedef void (*PFNGLDELETESYNCPROC)(GLsync);
    PFNGLDELETESYNCPROC next = reinterpret_cast<PFNGLDELETESYNCPROC>(it->second);
    return next(sync);
}

void opengl_es_layer_glDeleteSyncAPPLE(GLsync sync) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glDeleteSyncAPPLE", sync);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteSyncAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteSyncAPPLE");
    }

    typedef void (*PFNGLDELETESYNCAPPLEPROC)(GLsync);
    PFNGLDELETESYNCAPPLEPROC next = reinterpret_cast<PFNGLDELETESYNCAPPLEPROC>(it->second);
    return next(sync);
}

void opengl_es_layer_glDeleteTextures(GLsizei n, GLuint* textures) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteTextures", n, textures);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteTextures");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteTextures");
    }

    typedef void (*PFNGLDELETETEXTURESPROC)(GLsizei, GLuint*);
    PFNGLDELETETEXTURESPROC next = reinterpret_cast<PFNGLDELETETEXTURESPROC>(it->second);
    return next(n, textures);
}

void opengl_es_layer_glDeleteTransformFeedbacks(GLsizei n, GLuint* ids) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteTransformFeedbacks", n, ids);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteTransformFeedbacks");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteTransformFeedbacks");
    }

    typedef void (*PFNGLDELETETRANSFORMFEEDBACKSPROC)(GLsizei, GLuint*);
    PFNGLDELETETRANSFORMFEEDBACKSPROC next = reinterpret_cast<PFNGLDELETETRANSFORMFEEDBACKSPROC>(it->second);
    return next(n, ids);
}

void opengl_es_layer_glDeleteVertexArrays(GLsizei n, GLuint* arrays) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteVertexArrays", n, arrays);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteVertexArrays");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteVertexArrays");
    }

    typedef void (*PFNGLDELETEVERTEXARRAYSPROC)(GLsizei, GLuint*);
    PFNGLDELETEVERTEXARRAYSPROC next = reinterpret_cast<PFNGLDELETEVERTEXARRAYSPROC>(it->second);
    return next(n, arrays);
}

void opengl_es_layer_glDeleteVertexArraysOES(GLsizei n, GLuint* arrays) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDeleteVertexArraysOES", n, arrays);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDeleteVertexArraysOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDeleteVertexArraysOES");
    }

    typedef void (*PFNGLDELETEVERTEXARRAYSOESPROC)(GLsizei, GLuint*);
    PFNGLDELETEVERTEXARRAYSOESPROC next = reinterpret_cast<PFNGLDELETEVERTEXARRAYSOESPROC>(it->second);
    return next(n, arrays);
}

void opengl_es_layer_glDepthFunc(GLenum func) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDepthFunc", func);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthFunc");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthFunc");
    }

    typedef void (*PFNGLDEPTHFUNCPROC)(GLenum);
    PFNGLDEPTHFUNCPROC next = reinterpret_cast<PFNGLDEPTHFUNCPROC>(it->second);
    return next(func);
}

void opengl_es_layer_glDepthMask(GLboolean flag) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDepthMask", flag);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthMask");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthMask");
    }

    typedef void (*PFNGLDEPTHMASKPROC)(GLboolean);
    PFNGLDEPTHMASKPROC next = reinterpret_cast<PFNGLDEPTHMASKPROC>(it->second);
    return next(flag);
}

void opengl_es_layer_glDepthRangeArrayfvNV(GLuint first, GLsizei count, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glDepthRangeArrayfvNV", first, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangeArrayfvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangeArrayfvNV");
    }

    typedef void (*PFNGLDEPTHRANGEARRAYFVNVPROC)(GLuint, GLsizei, GLfloat*);
    PFNGLDEPTHRANGEARRAYFVNVPROC next = reinterpret_cast<PFNGLDEPTHRANGEARRAYFVNVPROC>(it->second);
    return next(first, count, v);
}

void opengl_es_layer_glDepthRangeArrayfvOES(GLuint first, GLsizei count, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glDepthRangeArrayfvOES", first, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangeArrayfvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangeArrayfvOES");
    }

    typedef void (*PFNGLDEPTHRANGEARRAYFVOESPROC)(GLuint, GLsizei, GLfloat*);
    PFNGLDEPTHRANGEARRAYFVOESPROC next = reinterpret_cast<PFNGLDEPTHRANGEARRAYFVOESPROC>(it->second);
    return next(first, count, v);
}

void opengl_es_layer_glDepthRangeIndexedfNV(GLuint index, GLfloat n, GLfloat f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f)", mCmdIndex++, "glDepthRangeIndexedfNV", index, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangeIndexedfNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangeIndexedfNV");
    }

    typedef void (*PFNGLDEPTHRANGEINDEXEDFNVPROC)(GLuint, GLfloat, GLfloat);
    PFNGLDEPTHRANGEINDEXEDFNVPROC next = reinterpret_cast<PFNGLDEPTHRANGEINDEXEDFNVPROC>(it->second);
    return next(index, n, f);
}

void opengl_es_layer_glDepthRangeIndexedfOES(GLuint index, GLfloat n, GLfloat f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f)", mCmdIndex++, "glDepthRangeIndexedfOES", index, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangeIndexedfOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangeIndexedfOES");
    }

    typedef void (*PFNGLDEPTHRANGEINDEXEDFOESPROC)(GLuint, GLfloat, GLfloat);
    PFNGLDEPTHRANGEINDEXEDFOESPROC next = reinterpret_cast<PFNGLDEPTHRANGEINDEXEDFOESPROC>(it->second);
    return next(index, n, f);
}

void opengl_es_layer_glDepthRangef(GLfloat n, GLfloat f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f)", mCmdIndex++, "glDepthRangef", n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangef");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangef");
    }

    typedef void (*PFNGLDEPTHRANGEFPROC)(GLfloat, GLfloat);
    PFNGLDEPTHRANGEFPROC next = reinterpret_cast<PFNGLDEPTHRANGEFPROC>(it->second);
    return next(n, f);
}

void opengl_es_layer_glDepthRangefOES(GLclampf n, GLclampf f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f)", mCmdIndex++, "glDepthRangefOES", n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangefOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangefOES");
    }

    typedef void (*PFNGLDEPTHRANGEFOESPROC)(GLclampf, GLclampf);
    PFNGLDEPTHRANGEFOESPROC next = reinterpret_cast<PFNGLDEPTHRANGEFOESPROC>(it->second);
    return next(n, f);
}

void opengl_es_layer_glDepthRangex(GLfixed n, GLfixed f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d)", mCmdIndex++, "glDepthRangex", n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangex");
    }

    typedef void (*PFNGLDEPTHRANGEXPROC)(GLfixed, GLfixed);
    PFNGLDEPTHRANGEXPROC next = reinterpret_cast<PFNGLDEPTHRANGEXPROC>(it->second);
    return next(n, f);
}

void opengl_es_layer_glDepthRangexOES(GLfixed n, GLfixed f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d)", mCmdIndex++, "glDepthRangexOES", n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDepthRangexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDepthRangexOES");
    }

    typedef void (*PFNGLDEPTHRANGEXOESPROC)(GLfixed, GLfixed);
    PFNGLDEPTHRANGEXOESPROC next = reinterpret_cast<PFNGLDEPTHRANGEXOESPROC>(it->second);
    return next(n, f);
}

void opengl_es_layer_glDetachShader(GLuint program, GLuint shader) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glDetachShader", program, shader);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDetachShader");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDetachShader");
    }

    typedef void (*PFNGLDETACHSHADERPROC)(GLuint, GLuint);
    PFNGLDETACHSHADERPROC next = reinterpret_cast<PFNGLDETACHSHADERPROC>(it->second);
    return next(program, shader);
}

void opengl_es_layer_glDisable(GLenum cap) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDisable", cap);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisable");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisable");
    }

    typedef void (*PFNGLDISABLEPROC)(GLenum);
    PFNGLDISABLEPROC next = reinterpret_cast<PFNGLDISABLEPROC>(it->second);
    return next(cap);
}

void opengl_es_layer_glDisableClientState(GLenum array) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDisableClientState", array);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisableClientState");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisableClientState");
    }

    typedef void (*PFNGLDISABLECLIENTSTATEPROC)(GLenum);
    PFNGLDISABLECLIENTSTATEPROC next = reinterpret_cast<PFNGLDISABLECLIENTSTATEPROC>(it->second);
    return next(array);
}

void opengl_es_layer_glDisableDriverControlQCOM(GLuint driverControl) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDisableDriverControlQCOM", driverControl);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisableDriverControlQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisableDriverControlQCOM");
    }

    typedef void (*PFNGLDISABLEDRIVERCONTROLQCOMPROC)(GLuint);
    PFNGLDISABLEDRIVERCONTROLQCOMPROC next = reinterpret_cast<PFNGLDISABLEDRIVERCONTROLQCOMPROC>(it->second);
    return next(driverControl);
}

void opengl_es_layer_glDisableVertexAttribArray(GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glDisableVertexAttribArray", index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisableVertexAttribArray");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisableVertexAttribArray");
    }

    typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint);
    PFNGLDISABLEVERTEXATTRIBARRAYPROC next = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(it->second);
    return next(index);
}

void opengl_es_layer_glDisablei(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glDisablei", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisablei");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisablei");
    }

    typedef void (*PFNGLDISABLEIPROC)(GLenum, GLuint);
    PFNGLDISABLEIPROC next = reinterpret_cast<PFNGLDISABLEIPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glDisableiEXT(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glDisableiEXT", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisableiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisableiEXT");
    }

    typedef void (*PFNGLDISABLEIEXTPROC)(GLenum, GLuint);
    PFNGLDISABLEIEXTPROC next = reinterpret_cast<PFNGLDISABLEIEXTPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glDisableiNV(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glDisableiNV", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisableiNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisableiNV");
    }

    typedef void (*PFNGLDISABLEINVPROC)(GLenum, GLuint);
    PFNGLDISABLEINVPROC next = reinterpret_cast<PFNGLDISABLEINVPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glDisableiOES(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glDisableiOES", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDisableiOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDisableiOES");
    }

    typedef void (*PFNGLDISABLEIOESPROC)(GLenum, GLuint);
    PFNGLDISABLEIOESPROC next = reinterpret_cast<PFNGLDISABLEIOESPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, GLenum* attachments) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glDiscardFramebufferEXT", target, numAttachments, attachments);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDiscardFramebufferEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDiscardFramebufferEXT");
    }

    typedef void (*PFNGLDISCARDFRAMEBUFFEREXTPROC)(GLenum, GLsizei, GLenum*);
    PFNGLDISCARDFRAMEBUFFEREXTPROC next = reinterpret_cast<PFNGLDISCARDFRAMEBUFFEREXTPROC>(it->second);
    return next(target, numAttachments, attachments);
}

void opengl_es_layer_glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glDispatchCompute", num_groups_x, num_groups_y, num_groups_z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDispatchCompute");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDispatchCompute");
    }

    typedef void (*PFNGLDISPATCHCOMPUTEPROC)(GLuint, GLuint, GLuint);
    PFNGLDISPATCHCOMPUTEPROC next = reinterpret_cast<PFNGLDISPATCHCOMPUTEPROC>(it->second);
    return next(num_groups_x, num_groups_y, num_groups_z);
}

void opengl_es_layer_glDispatchComputeIndirect(GLintptr indirect) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%ld)", mCmdIndex++, "glDispatchComputeIndirect", indirect);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDispatchComputeIndirect");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDispatchComputeIndirect");
    }

    typedef void (*PFNGLDISPATCHCOMPUTEINDIRECTPROC)(GLintptr);
    PFNGLDISPATCHCOMPUTEINDIRECTPROC next = reinterpret_cast<PFNGLDISPATCHCOMPUTEINDIRECTPROC>(it->second);
    return next(indirect);
}

void opengl_es_layer_glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d)", mCmdIndex++, "glDrawArrays", mode, first, count);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawArrays");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawArrays");
    }

    typedef void (*PFNGLDRAWARRAYSPROC)(GLenum, GLint, GLsizei);
    PFNGLDRAWARRAYSPROC next = reinterpret_cast<PFNGLDRAWARRAYSPROC>(it->second);
    return next(mode, first, count);
}

void opengl_es_layer_glDrawArraysIndirect(GLenum mode, void* indirect) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glDrawArraysIndirect", mode, indirect);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawArraysIndirect");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawArraysIndirect");
    }

    typedef void (*PFNGLDRAWARRAYSINDIRECTPROC)(GLenum, void*);
    PFNGLDRAWARRAYSINDIRECTPROC next = reinterpret_cast<PFNGLDRAWARRAYSINDIRECTPROC>(it->second);
    return next(mode, indirect);
}

void opengl_es_layer_glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d)", mCmdIndex++, "glDrawArraysInstanced", mode, first, count, instancecount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawArraysInstanced");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawArraysInstanced");
    }

    typedef void (*PFNGLDRAWARRAYSINSTANCEDPROC)(GLenum, GLint, GLsizei, GLsizei);
    PFNGLDRAWARRAYSINSTANCEDPROC next = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDPROC>(it->second);
    return next(mode, first, count, instancecount);
}

void opengl_es_layer_glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d)", mCmdIndex++, "glDrawArraysInstancedANGLE", mode, first, count, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawArraysInstancedANGLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawArraysInstancedANGLE");
    }

    typedef void (*PFNGLDRAWARRAYSINSTANCEDANGLEPROC)(GLenum, GLint, GLsizei, GLsizei);
    PFNGLDRAWARRAYSINSTANCEDANGLEPROC next = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDANGLEPROC>(it->second);
    return next(mode, first, count, primcount);
}

void opengl_es_layer_glDrawArraysInstancedBaseInstanceEXT(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %u)", mCmdIndex++, "glDrawArraysInstancedBaseInstanceEXT", mode, first, count, instancecount, baseinstance);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawArraysInstancedBaseInstanceEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawArraysInstancedBaseInstanceEXT");
    }

    typedef void (*PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC)(GLenum, GLint, GLsizei, GLsizei, GLuint);
    PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC next = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC>(it->second);
    return next(mode, first, count, instancecount, baseinstance);
}

void opengl_es_layer_glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d)", mCmdIndex++, "glDrawArraysInstancedEXT", mode, start, count, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawArraysInstancedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawArraysInstancedEXT");
    }

    typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC)(GLenum, GLint, GLsizei, GLsizei);
    PFNGLDRAWARRAYSINSTANCEDEXTPROC next = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDEXTPROC>(it->second);
    return next(mode, start, count, primcount);
}

void opengl_es_layer_glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d)", mCmdIndex++, "glDrawArraysInstancedNV", mode, first, count, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawArraysInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawArraysInstancedNV");
    }

    typedef void (*PFNGLDRAWARRAYSINSTANCEDNVPROC)(GLenum, GLint, GLsizei, GLsizei);
    PFNGLDRAWARRAYSINSTANCEDNVPROC next = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDNVPROC>(it->second);
    return next(mode, first, count, primcount);
}

void opengl_es_layer_glDrawBuffers(GLsizei n, GLenum* bufs) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDrawBuffers", n, bufs);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawBuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawBuffers");
    }

    typedef void (*PFNGLDRAWBUFFERSPROC)(GLsizei, GLenum*);
    PFNGLDRAWBUFFERSPROC next = reinterpret_cast<PFNGLDRAWBUFFERSPROC>(it->second);
    return next(n, bufs);
}

void opengl_es_layer_glDrawBuffersEXT(GLsizei n, GLenum* bufs) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDrawBuffersEXT", n, bufs);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawBuffersEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawBuffersEXT");
    }

    typedef void (*PFNGLDRAWBUFFERSEXTPROC)(GLsizei, GLenum*);
    PFNGLDRAWBUFFERSEXTPROC next = reinterpret_cast<PFNGLDRAWBUFFERSEXTPROC>(it->second);
    return next(n, bufs);
}

void opengl_es_layer_glDrawBuffersIndexedEXT(GLint n, GLenum* location, GLint* indices) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p, %p)", mCmdIndex++, "glDrawBuffersIndexedEXT", n, location, indices);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawBuffersIndexedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawBuffersIndexedEXT");
    }

    typedef void (*PFNGLDRAWBUFFERSINDEXEDEXTPROC)(GLint, GLenum*, GLint*);
    PFNGLDRAWBUFFERSINDEXEDEXTPROC next = reinterpret_cast<PFNGLDRAWBUFFERSINDEXEDEXTPROC>(it->second);
    return next(n, location, indices);
}

void opengl_es_layer_glDrawBuffersNV(GLsizei n, GLenum* bufs) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glDrawBuffersNV", n, bufs);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawBuffersNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawBuffersNV");
    }

    typedef void (*PFNGLDRAWBUFFERSNVPROC)(GLsizei, GLenum*);
    PFNGLDRAWBUFFERSNVPROC next = reinterpret_cast<PFNGLDRAWBUFFERSNVPROC>(it->second);
    return next(n, bufs);
}

void opengl_es_layer_glDrawElements(GLenum mode, GLsizei count, GLenum type, void* indices) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p)", mCmdIndex++, "glDrawElements", mode, count, type, indices);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElements");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElements");
    }

    typedef void (*PFNGLDRAWELEMENTSPROC)(GLenum, GLsizei, GLenum, void*);
    PFNGLDRAWELEMENTSPROC next = reinterpret_cast<PFNGLDRAWELEMENTSPROC>(it->second);
    return next(mode, count, type, indices);
}

void opengl_es_layer_glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, void* indices, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d)", mCmdIndex++, "glDrawElementsBaseVertex", mode, count, type, indices, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsBaseVertex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsBaseVertex");
    }

    typedef void (*PFNGLDRAWELEMENTSBASEVERTEXPROC)(GLenum, GLsizei, GLenum, void*, GLint);
    PFNGLDRAWELEMENTSBASEVERTEXPROC next = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXPROC>(it->second);
    return next(mode, count, type, indices, basevertex);
}

void opengl_es_layer_glDrawElementsBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, void* indices, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d)", mCmdIndex++, "glDrawElementsBaseVertexEXT", mode, count, type, indices, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsBaseVertexEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsBaseVertexEXT");
    }

    typedef void (*PFNGLDRAWELEMENTSBASEVERTEXEXTPROC)(GLenum, GLsizei, GLenum, void*, GLint);
    PFNGLDRAWELEMENTSBASEVERTEXEXTPROC next = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXEXTPROC>(it->second);
    return next(mode, count, type, indices, basevertex);
}

void opengl_es_layer_glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, void* indices, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d)", mCmdIndex++, "glDrawElementsBaseVertexOES", mode, count, type, indices, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsBaseVertexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsBaseVertexOES");
    }

    typedef void (*PFNGLDRAWELEMENTSBASEVERTEXOESPROC)(GLenum, GLsizei, GLenum, void*, GLint);
    PFNGLDRAWELEMENTSBASEVERTEXOESPROC next = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXOESPROC>(it->second);
    return next(mode, count, type, indices, basevertex);
}

void opengl_es_layer_glDrawElementsIndirect(GLenum mode, GLenum type, void* indirect) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glDrawElementsIndirect", mode, type, indirect);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsIndirect");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsIndirect");
    }

    typedef void (*PFNGLDRAWELEMENTSINDIRECTPROC)(GLenum, GLenum, void*);
    PFNGLDRAWELEMENTSINDIRECTPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINDIRECTPROC>(it->second);
    return next(mode, type, indirect);
}

void opengl_es_layer_glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei instancecount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d)", mCmdIndex++, "glDrawElementsInstanced", mode, count, type, indices, instancecount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstanced");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstanced");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDPROC)(GLenum, GLsizei, GLenum, void*, GLsizei);
    PFNGLDRAWELEMENTSINSTANCEDPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDPROC>(it->second);
    return next(mode, count, type, indices, instancecount);
}

void opengl_es_layer_glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d)", mCmdIndex++, "glDrawElementsInstancedANGLE", mode, count, type, indices, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedANGLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedANGLE");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDANGLEPROC)(GLenum, GLsizei, GLenum, void*, GLsizei);
    PFNGLDRAWELEMENTSINSTANCEDANGLEPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDANGLEPROC>(it->second);
    return next(mode, count, type, indices, primcount);
}

void opengl_es_layer_glDrawElementsInstancedBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei instancecount, GLuint baseinstance) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d, %u)", mCmdIndex++, "glDrawElementsInstancedBaseInstanceEXT", mode, count, type, indices, instancecount, baseinstance);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedBaseInstanceEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedBaseInstanceEXT");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC)(GLenum, GLsizei, GLenum, void*, GLsizei, GLuint);
    PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC>(it->second);
    return next(mode, count, type, indices, instancecount, baseinstance);
}

void opengl_es_layer_glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei instancecount, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d, %d)", mCmdIndex++, "glDrawElementsInstancedBaseVertex", mode, count, type, indices, instancecount, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedBaseVertex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedBaseVertex");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)(GLenum, GLsizei, GLenum, void*, GLsizei, GLint);
    PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC>(it->second);
    return next(mode, count, type, indices, instancecount, basevertex);
}

void opengl_es_layer_glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d, %d, %u)", mCmdIndex++, "glDrawElementsInstancedBaseVertexBaseInstanceEXT", mode, count, type, indices, instancecount, basevertex, baseinstance);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedBaseVertexBaseInstanceEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedBaseVertexBaseInstanceEXT");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC)(GLenum, GLsizei, GLenum, void*, GLsizei, GLint, GLuint);
    PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC>(it->second);
    return next(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void opengl_es_layer_glDrawElementsInstancedBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei instancecount, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d, %d)", mCmdIndex++, "glDrawElementsInstancedBaseVertexEXT", mode, count, type, indices, instancecount, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedBaseVertexEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedBaseVertexEXT");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC)(GLenum, GLsizei, GLenum, void*, GLsizei, GLint);
    PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC>(it->second);
    return next(mode, count, type, indices, instancecount, basevertex);
}

void opengl_es_layer_glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei instancecount, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d, %d)", mCmdIndex++, "glDrawElementsInstancedBaseVertexOES", mode, count, type, indices, instancecount, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedBaseVertexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedBaseVertexOES");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC)(GLenum, GLsizei, GLenum, void*, GLsizei, GLint);
    PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC>(it->second);
    return next(mode, count, type, indices, instancecount, basevertex);
}

void opengl_es_layer_glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d)", mCmdIndex++, "glDrawElementsInstancedEXT", mode, count, type, indices, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedEXT");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC)(GLenum, GLsizei, GLenum, void*, GLsizei);
    PFNGLDRAWELEMENTSINSTANCEDEXTPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDEXTPROC>(it->second);
    return next(mode, count, type, indices, primcount);
}

void opengl_es_layer_glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, void* indices, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %d)", mCmdIndex++, "glDrawElementsInstancedNV", mode, count, type, indices, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawElementsInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawElementsInstancedNV");
    }

    typedef void (*PFNGLDRAWELEMENTSINSTANCEDNVPROC)(GLenum, GLsizei, GLenum, void*, GLsizei);
    PFNGLDRAWELEMENTSINSTANCEDNVPROC next = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDNVPROC>(it->second);
    return next(mode, count, type, indices, primcount);
}

void opengl_es_layer_glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void* indices) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %u, %p)", mCmdIndex++, "glDrawRangeElements", mode, start, end, count, type, indices);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawRangeElements");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawRangeElements");
    }

    typedef void (*PFNGLDRAWRANGEELEMENTSPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, void*);
    PFNGLDRAWRANGEELEMENTSPROC next = reinterpret_cast<PFNGLDRAWRANGEELEMENTSPROC>(it->second);
    return next(mode, start, end, count, type, indices);
}

void opengl_es_layer_glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void* indices, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %u, %p, %d)", mCmdIndex++, "glDrawRangeElementsBaseVertex", mode, start, end, count, type, indices, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawRangeElementsBaseVertex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawRangeElementsBaseVertex");
    }

    typedef void (*PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, void*, GLint);
    PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC next = reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC>(it->second);
    return next(mode, start, end, count, type, indices, basevertex);
}

void opengl_es_layer_glDrawRangeElementsBaseVertexEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void* indices, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %u, %p, %d)", mCmdIndex++, "glDrawRangeElementsBaseVertexEXT", mode, start, end, count, type, indices, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawRangeElementsBaseVertexEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawRangeElementsBaseVertexEXT");
    }

    typedef void (*PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, void*, GLint);
    PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC next = reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC>(it->second);
    return next(mode, start, end, count, type, indices, basevertex);
}

void opengl_es_layer_glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void* indices, GLint basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %u, %p, %d)", mCmdIndex++, "glDrawRangeElementsBaseVertexOES", mode, start, end, count, type, indices, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawRangeElementsBaseVertexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawRangeElementsBaseVertexOES");
    }

    typedef void (*PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, void*, GLint);
    PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC next = reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC>(it->second);
    return next(mode, start, end, count, type, indices, basevertex);
}

void opengl_es_layer_glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f)", mCmdIndex++, "glDrawTexfOES", x, y, z, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexfOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexfOES");
    }

    typedef void (*PFNGLDRAWTEXFOESPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLDRAWTEXFOESPROC next = reinterpret_cast<PFNGLDRAWTEXFOESPROC>(it->second);
    return next(x, y, z, width, height);
}

void opengl_es_layer_glDrawTexfvOES(GLfloat* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glDrawTexfvOES", coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexfvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexfvOES");
    }

    typedef void (*PFNGLDRAWTEXFVOESPROC)(GLfloat*);
    PFNGLDRAWTEXFVOESPROC next = reinterpret_cast<PFNGLDRAWTEXFVOESPROC>(it->second);
    return next(coords);
}

void opengl_es_layer_glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d)", mCmdIndex++, "glDrawTexiOES", x, y, z, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexiOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexiOES");
    }

    typedef void (*PFNGLDRAWTEXIOESPROC)(GLint, GLint, GLint, GLint, GLint);
    PFNGLDRAWTEXIOESPROC next = reinterpret_cast<PFNGLDRAWTEXIOESPROC>(it->second);
    return next(x, y, z, width, height);
}

void opengl_es_layer_glDrawTexivOES(GLint* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glDrawTexivOES", coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexivOES");
    }

    typedef void (*PFNGLDRAWTEXIVOESPROC)(GLint*);
    PFNGLDRAWTEXIVOESPROC next = reinterpret_cast<PFNGLDRAWTEXIVOESPROC>(it->second);
    return next(coords);
}

void opengl_es_layer_glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d)", mCmdIndex++, "glDrawTexsOES", x, y, z, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexsOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexsOES");
    }

    typedef void (*PFNGLDRAWTEXSOESPROC)(GLshort, GLshort, GLshort, GLshort, GLshort);
    PFNGLDRAWTEXSOESPROC next = reinterpret_cast<PFNGLDRAWTEXSOESPROC>(it->second);
    return next(x, y, z, width, height);
}

void opengl_es_layer_glDrawTexsvOES(GLshort* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glDrawTexsvOES", coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexsvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexsvOES");
    }

    typedef void (*PFNGLDRAWTEXSVOESPROC)(GLshort*);
    PFNGLDRAWTEXSVOESPROC next = reinterpret_cast<PFNGLDRAWTEXSVOESPROC>(it->second);
    return next(coords);
}

void opengl_es_layer_glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d)", mCmdIndex++, "glDrawTexxOES", x, y, z, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexxOES");
    }

    typedef void (*PFNGLDRAWTEXXOESPROC)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLDRAWTEXXOESPROC next = reinterpret_cast<PFNGLDRAWTEXXOESPROC>(it->second);
    return next(x, y, z, width, height);
}

void opengl_es_layer_glDrawTexxvOES(GLfixed* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glDrawTexxvOES", coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTexxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTexxvOES");
    }

    typedef void (*PFNGLDRAWTEXXVOESPROC)(GLfixed*);
    PFNGLDRAWTEXXVOESPROC next = reinterpret_cast<PFNGLDRAWTEXXVOESPROC>(it->second);
    return next(coords);
}

void opengl_es_layer_glDrawTransformFeedbackEXT(GLenum mode, GLuint id) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glDrawTransformFeedbackEXT", mode, id);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTransformFeedbackEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTransformFeedbackEXT");
    }

    typedef void (*PFNGLDRAWTRANSFORMFEEDBACKEXTPROC)(GLenum, GLuint);
    PFNGLDRAWTRANSFORMFEEDBACKEXTPROC next = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKEXTPROC>(it->second);
    return next(mode, id);
}

void opengl_es_layer_glDrawTransformFeedbackInstancedEXT(GLenum mode, GLuint id, GLsizei instancecount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glDrawTransformFeedbackInstancedEXT", mode, id, instancecount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawTransformFeedbackInstancedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawTransformFeedbackInstancedEXT");
    }

    typedef void (*PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC)(GLenum, GLuint, GLsizei);
    PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC next = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC>(it->second);
    return next(mode, id, instancecount);
}

void opengl_es_layer_glDrawVkImageNV(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ", %u, %f, %f, %f, %f, %f, %f, %f, %f, %f)", mCmdIndex++, "glDrawVkImageNV", vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glDrawVkImageNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glDrawVkImageNV");
    }

    typedef void (*PFNGLDRAWVKIMAGENVPROC)(GLuint64, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLDRAWVKIMAGENVPROC next = reinterpret_cast<PFNGLDRAWVKIMAGENVPROC>(it->second);
    return next(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void opengl_es_layer_glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glEGLImageTargetRenderbufferStorageOES", target, image);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEGLImageTargetRenderbufferStorageOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEGLImageTargetRenderbufferStorageOES");
    }

    typedef void (*PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC)(GLenum, GLeglImageOES);
    PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC next = reinterpret_cast<PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC>(it->second);
    return next(target, image);
}

void opengl_es_layer_glEGLImageTargetTexStorageEXT(GLenum target, GLeglImageOES image, GLint* attrib_list) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %p)", mCmdIndex++, "glEGLImageTargetTexStorageEXT", target, image, attrib_list);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEGLImageTargetTexStorageEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEGLImageTargetTexStorageEXT");
    }

    typedef void (*PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC)(GLenum, GLeglImageOES, GLint*);
    PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC next = reinterpret_cast<PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC>(it->second);
    return next(target, image, attrib_list);
}

void opengl_es_layer_glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glEGLImageTargetTexture2DOES", target, image);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEGLImageTargetTexture2DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEGLImageTargetTexture2DOES");
    }

    typedef void (*PFNGLEGLIMAGETARGETTEXTURE2DOESPROC)(GLenum, GLeglImageOES);
    PFNGLEGLIMAGETARGETTEXTURE2DOESPROC next = reinterpret_cast<PFNGLEGLIMAGETARGETTEXTURE2DOESPROC>(it->second);
    return next(target, image);
}

void opengl_es_layer_glEGLImageTargetTextureStorageEXT(GLuint texture, GLeglImageOES image, GLint* attrib_list) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %p)", mCmdIndex++, "glEGLImageTargetTextureStorageEXT", texture, image, attrib_list);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEGLImageTargetTextureStorageEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEGLImageTargetTextureStorageEXT");
    }

    typedef void (*PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC)(GLuint, GLeglImageOES, GLint*);
    PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC next = reinterpret_cast<PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC>(it->second);
    return next(texture, image, attrib_list);
}

void opengl_es_layer_glEnable(GLenum cap) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEnable", cap);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnable");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnable");
    }

    typedef void (*PFNGLENABLEPROC)(GLenum);
    PFNGLENABLEPROC next = reinterpret_cast<PFNGLENABLEPROC>(it->second);
    return next(cap);
}

void opengl_es_layer_glEnableClientState(GLenum array) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEnableClientState", array);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnableClientState");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnableClientState");
    }

    typedef void (*PFNGLENABLECLIENTSTATEPROC)(GLenum);
    PFNGLENABLECLIENTSTATEPROC next = reinterpret_cast<PFNGLENABLECLIENTSTATEPROC>(it->second);
    return next(array);
}

void opengl_es_layer_glEnableDriverControlQCOM(GLuint driverControl) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEnableDriverControlQCOM", driverControl);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnableDriverControlQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnableDriverControlQCOM");
    }

    typedef void (*PFNGLENABLEDRIVERCONTROLQCOMPROC)(GLuint);
    PFNGLENABLEDRIVERCONTROLQCOMPROC next = reinterpret_cast<PFNGLENABLEDRIVERCONTROLQCOMPROC>(it->second);
    return next(driverControl);
}

void opengl_es_layer_glEnableVertexAttribArray(GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEnableVertexAttribArray", index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnableVertexAttribArray");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnableVertexAttribArray");
    }

    typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint);
    PFNGLENABLEVERTEXATTRIBARRAYPROC next = reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(it->second);
    return next(index);
}

void opengl_es_layer_glEnablei(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glEnablei", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnablei");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnablei");
    }

    typedef void (*PFNGLENABLEIPROC)(GLenum, GLuint);
    PFNGLENABLEIPROC next = reinterpret_cast<PFNGLENABLEIPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glEnableiEXT(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glEnableiEXT", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnableiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnableiEXT");
    }

    typedef void (*PFNGLENABLEIEXTPROC)(GLenum, GLuint);
    PFNGLENABLEIEXTPROC next = reinterpret_cast<PFNGLENABLEIEXTPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glEnableiNV(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glEnableiNV", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnableiNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnableiNV");
    }

    typedef void (*PFNGLENABLEINVPROC)(GLenum, GLuint);
    PFNGLENABLEINVPROC next = reinterpret_cast<PFNGLENABLEINVPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glEnableiOES(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glEnableiOES", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEnableiOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEnableiOES");
    }

    typedef void (*PFNGLENABLEIOESPROC)(GLenum, GLuint);
    PFNGLENABLEIOESPROC next = reinterpret_cast<PFNGLENABLEIOESPROC>(it->second);
    return next(target, index);
}

void opengl_es_layer_glEndConditionalRenderNV(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glEndConditionalRenderNV");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEndConditionalRenderNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEndConditionalRenderNV");
    }

    typedef void (*PFNGLENDCONDITIONALRENDERNVPROC)(void);
    PFNGLENDCONDITIONALRENDERNVPROC next = reinterpret_cast<PFNGLENDCONDITIONALRENDERNVPROC>(it->second);
    return next();
}

void opengl_es_layer_glEndPerfMonitorAMD(GLuint monitor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEndPerfMonitorAMD", monitor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEndPerfMonitorAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEndPerfMonitorAMD");
    }

    typedef void (*PFNGLENDPERFMONITORAMDPROC)(GLuint);
    PFNGLENDPERFMONITORAMDPROC next = reinterpret_cast<PFNGLENDPERFMONITORAMDPROC>(it->second);
    return next(monitor);
}

void opengl_es_layer_glEndPerfQueryINTEL(GLuint queryHandle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEndPerfQueryINTEL", queryHandle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEndPerfQueryINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEndPerfQueryINTEL");
    }

    typedef void (*PFNGLENDPERFQUERYINTELPROC)(GLuint);
    PFNGLENDPERFQUERYINTELPROC next = reinterpret_cast<PFNGLENDPERFQUERYINTELPROC>(it->second);
    return next(queryHandle);
}

void opengl_es_layer_glEndQuery(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEndQuery", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEndQuery");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEndQuery");
    }

    typedef void (*PFNGLENDQUERYPROC)(GLenum);
    PFNGLENDQUERYPROC next = reinterpret_cast<PFNGLENDQUERYPROC>(it->second);
    return next(target);
}

void opengl_es_layer_glEndQueryEXT(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEndQueryEXT", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEndQueryEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEndQueryEXT");
    }

    typedef void (*PFNGLENDQUERYEXTPROC)(GLenum);
    PFNGLENDQUERYEXTPROC next = reinterpret_cast<PFNGLENDQUERYEXTPROC>(it->second);
    return next(target);
}

void opengl_es_layer_glEndTilingQCOM(GLbitfield preserveMask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glEndTilingQCOM", preserveMask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEndTilingQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEndTilingQCOM");
    }

    typedef void (*PFNGLENDTILINGQCOMPROC)(GLbitfield);
    PFNGLENDTILINGQCOMPROC next = reinterpret_cast<PFNGLENDTILINGQCOMPROC>(it->second);
    return next(preserveMask);
}

void opengl_es_layer_glEndTransformFeedback(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glEndTransformFeedback");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glEndTransformFeedback");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glEndTransformFeedback");
    }

    typedef void (*PFNGLENDTRANSFORMFEEDBACKPROC)(void);
    PFNGLENDTRANSFORMFEEDBACKPROC next = reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKPROC>(it->second);
    return next();
}

void opengl_es_layer_glExtGetBufferPointervQCOM(GLenum target, void** params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glExtGetBufferPointervQCOM", target, *params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetBufferPointervQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetBufferPointervQCOM");
    }

    typedef void (*PFNGLEXTGETBUFFERPOINTERVQCOMPROC)(GLenum, void**);
    PFNGLEXTGETBUFFERPOINTERVQCOMPROC next = reinterpret_cast<PFNGLEXTGETBUFFERPOINTERVQCOMPROC>(it->second);
    return next(target, params);
}

void opengl_es_layer_glExtGetBuffersQCOM(GLuint* buffers, GLint maxBuffers, GLint* numBuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glExtGetBuffersQCOM", buffers, maxBuffers, numBuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetBuffersQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetBuffersQCOM");
    }

    typedef void (*PFNGLEXTGETBUFFERSQCOMPROC)(GLuint*, GLint, GLint*);
    PFNGLEXTGETBUFFERSQCOMPROC next = reinterpret_cast<PFNGLEXTGETBUFFERSQCOMPROC>(it->second);
    return next(buffers, maxBuffers, numBuffers);
}

void opengl_es_layer_glExtGetFramebuffersQCOM(GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glExtGetFramebuffersQCOM", framebuffers, maxFramebuffers, numFramebuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetFramebuffersQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetFramebuffersQCOM");
    }

    typedef void (*PFNGLEXTGETFRAMEBUFFERSQCOMPROC)(GLuint*, GLint, GLint*);
    PFNGLEXTGETFRAMEBUFFERSQCOMPROC next = reinterpret_cast<PFNGLEXTGETFRAMEBUFFERSQCOMPROC>(it->second);
    return next(framebuffers, maxFramebuffers, numFramebuffers);
}

void opengl_es_layer_glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar* source, GLint* length) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %s, %p)", mCmdIndex++, "glExtGetProgramBinarySourceQCOM", program, shadertype, source, length);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetProgramBinarySourceQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetProgramBinarySourceQCOM");
    }

    typedef void (*PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC)(GLuint, GLenum, GLchar*, GLint*);
    PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC next = reinterpret_cast<PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC>(it->second);
    return next(program, shadertype, source, length);
}

void opengl_es_layer_glExtGetProgramsQCOM(GLuint* programs, GLint maxPrograms, GLint* numPrograms) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glExtGetProgramsQCOM", programs, maxPrograms, numPrograms);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetProgramsQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetProgramsQCOM");
    }

    typedef void (*PFNGLEXTGETPROGRAMSQCOMPROC)(GLuint*, GLint, GLint*);
    PFNGLEXTGETPROGRAMSQCOMPROC next = reinterpret_cast<PFNGLEXTGETPROGRAMSQCOMPROC>(it->second);
    return next(programs, maxPrograms, numPrograms);
}

void opengl_es_layer_glExtGetRenderbuffersQCOM(GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glExtGetRenderbuffersQCOM", renderbuffers, maxRenderbuffers, numRenderbuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetRenderbuffersQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetRenderbuffersQCOM");
    }

    typedef void (*PFNGLEXTGETRENDERBUFFERSQCOMPROC)(GLuint*, GLint, GLint*);
    PFNGLEXTGETRENDERBUFFERSQCOMPROC next = reinterpret_cast<PFNGLEXTGETRENDERBUFFERSQCOMPROC>(it->second);
    return next(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void opengl_es_layer_glExtGetShadersQCOM(GLuint* shaders, GLint maxShaders, GLint* numShaders) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glExtGetShadersQCOM", shaders, maxShaders, numShaders);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetShadersQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetShadersQCOM");
    }

    typedef void (*PFNGLEXTGETSHADERSQCOMPROC)(GLuint*, GLint, GLint*);
    PFNGLEXTGETSHADERSQCOMPROC next = reinterpret_cast<PFNGLEXTGETSHADERSQCOMPROC>(it->second);
    return next(shaders, maxShaders, numShaders);
}

void opengl_es_layer_glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %u, %p)", mCmdIndex++, "glExtGetTexLevelParameterivQCOM", texture, face, level, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetTexLevelParameterivQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetTexLevelParameterivQCOM");
    }

    typedef void (*PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC)(GLuint, GLenum, GLint, GLenum, GLint*);
    PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC next = reinterpret_cast<PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC>(it->second);
    return next(texture, face, level, pname, params);
}

void opengl_es_layer_glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void* texels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glExtGetTexSubImageQCOM", target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetTexSubImageQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetTexSubImageQCOM");
    }

    typedef void (*PFNGLEXTGETTEXSUBIMAGEQCOMPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void*);
    PFNGLEXTGETTEXSUBIMAGEQCOMPROC next = reinterpret_cast<PFNGLEXTGETTEXSUBIMAGEQCOMPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void opengl_es_layer_glExtGetTexturesQCOM(GLuint* textures, GLint maxTextures, GLint* numTextures) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glExtGetTexturesQCOM", textures, maxTextures, numTextures);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtGetTexturesQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtGetTexturesQCOM");
    }

    typedef void (*PFNGLEXTGETTEXTURESQCOMPROC)(GLuint*, GLint, GLint*);
    PFNGLEXTGETTEXTURESQCOMPROC next = reinterpret_cast<PFNGLEXTGETTEXTURESQCOMPROC>(it->second);
    return next(textures, maxTextures, numTextures);
}

GLboolean opengl_es_layer_glExtIsProgramBinaryQCOM(GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glExtIsProgramBinaryQCOM", program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtIsProgramBinaryQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtIsProgramBinaryQCOM");
    }

    typedef GLboolean (*PFNGLEXTISPROGRAMBINARYQCOMPROC)(GLuint);
    PFNGLEXTISPROGRAMBINARYQCOMPROC next = reinterpret_cast<PFNGLEXTISPROGRAMBINARYQCOMPROC>(it->second);
    return next(program);
}

void opengl_es_layer_glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glExtTexObjectStateOverrideiQCOM", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glExtTexObjectStateOverrideiQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glExtTexObjectStateOverrideiQCOM");
    }

    typedef void (*PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC)(GLenum, GLenum, GLint);
    PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC next = reinterpret_cast<PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC>(it->second);
    return next(target, pname, param);
}

GLsync opengl_es_layer_glFenceSync(GLenum condition, GLbitfield flags) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glFenceSync", condition, flags);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFenceSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFenceSync");
    }

    typedef GLsync (*PFNGLFENCESYNCPROC)(GLenum, GLbitfield);
    PFNGLFENCESYNCPROC next = reinterpret_cast<PFNGLFENCESYNCPROC>(it->second);
    return next(condition, flags);
}

GLsync opengl_es_layer_glFenceSyncAPPLE(GLenum condition, GLbitfield flags) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glFenceSyncAPPLE", condition, flags);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFenceSyncAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFenceSyncAPPLE");
    }

    typedef GLsync (*PFNGLFENCESYNCAPPLEPROC)(GLenum, GLbitfield);
    PFNGLFENCESYNCAPPLEPROC next = reinterpret_cast<PFNGLFENCESYNCAPPLEPROC>(it->second);
    return next(condition, flags);
}

void opengl_es_layer_glFinish(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glFinish");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFinish");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFinish");
    }

    typedef void (*PFNGLFINISHPROC)(void);
    PFNGLFINISHPROC next = reinterpret_cast<PFNGLFINISHPROC>(it->second);
    return next();
}

void opengl_es_layer_glFinishFenceNV(GLuint fence) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glFinishFenceNV", fence);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFinishFenceNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFinishFenceNV");
    }

    typedef void (*PFNGLFINISHFENCENVPROC)(GLuint);
    PFNGLFINISHFENCENVPROC next = reinterpret_cast<PFNGLFINISHFENCENVPROC>(it->second);
    return next(fence);
}

void opengl_es_layer_glFlush(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glFlush");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFlush");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFlush");
    }

    typedef void (*PFNGLFLUSHPROC)(void);
    PFNGLFLUSHPROC next = reinterpret_cast<PFNGLFLUSHPROC>(it->second);
    return next();
}

void opengl_es_layer_glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %ld)", mCmdIndex++, "glFlushMappedBufferRange", target, offset, length);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFlushMappedBufferRange");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFlushMappedBufferRange");
    }

    typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum, GLintptr, GLsizeiptr);
    PFNGLFLUSHMAPPEDBUFFERRANGEPROC next = reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEPROC>(it->second);
    return next(target, offset, length);
}

void opengl_es_layer_glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %ld)", mCmdIndex++, "glFlushMappedBufferRangeEXT", target, offset, length);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFlushMappedBufferRangeEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFlushMappedBufferRangeEXT");
    }

    typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC)(GLenum, GLintptr, GLsizeiptr);
    PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC next = reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC>(it->second);
    return next(target, offset, length);
}

void opengl_es_layer_glFogf(GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f)", mCmdIndex++, "glFogf", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFogf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFogf");
    }

    typedef void (*PFNGLFOGFPROC)(GLenum, GLfloat);
    PFNGLFOGFPROC next = reinterpret_cast<PFNGLFOGFPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glFogfv(GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glFogfv", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFogfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFogfv");
    }

    typedef void (*PFNGLFOGFVPROC)(GLenum, GLfloat*);
    PFNGLFOGFVPROC next = reinterpret_cast<PFNGLFOGFVPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glFogx(GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glFogx", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFogx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFogx");
    }

    typedef void (*PFNGLFOGXPROC)(GLenum, GLfixed);
    PFNGLFOGXPROC next = reinterpret_cast<PFNGLFOGXPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glFogxOES(GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glFogxOES", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFogxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFogxOES");
    }

    typedef void (*PFNGLFOGXOESPROC)(GLenum, GLfixed);
    PFNGLFOGXOESPROC next = reinterpret_cast<PFNGLFOGXOESPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glFogxv(GLenum pname, GLfixed* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glFogxv", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFogxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFogxv");
    }

    typedef void (*PFNGLFOGXVPROC)(GLenum, GLfixed*);
    PFNGLFOGXVPROC next = reinterpret_cast<PFNGLFOGXVPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glFogxvOES(GLenum pname, GLfixed* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glFogxvOES", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFogxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFogxvOES");
    }

    typedef void (*PFNGLFOGXVOESPROC)(GLenum, GLfixed*);
    PFNGLFOGXVOESPROC next = reinterpret_cast<PFNGLFOGXVOESPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glFragmentCoverageColorNV(GLuint color) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glFragmentCoverageColorNV", color);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFragmentCoverageColorNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFragmentCoverageColorNV");
    }

    typedef void (*PFNGLFRAGMENTCOVERAGECOLORNVPROC)(GLuint);
    PFNGLFRAGMENTCOVERAGECOLORNVPROC next = reinterpret_cast<PFNGLFRAGMENTCOVERAGECOLORNVPROC>(it->second);
    return next(color);
}

void opengl_es_layer_glFramebufferFetchBarrierEXT(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glFramebufferFetchBarrierEXT");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferFetchBarrierEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferFetchBarrierEXT");
    }

    typedef void (*PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC)(void);
    PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC next = reinterpret_cast<PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC>(it->second);
    return next();
}

void opengl_es_layer_glFramebufferFetchBarrierQCOM(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glFramebufferFetchBarrierQCOM");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferFetchBarrierQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferFetchBarrierQCOM");
    }

    typedef void (*PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC)(void);
    PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC next = reinterpret_cast<PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC>(it->second);
    return next();
}

void opengl_es_layer_glFramebufferFoveationConfigQCOM(GLuint framebuffer, GLuint numLayers, GLuint focalPointsPerLayer, GLuint requestedFeatures, GLuint* providedFeatures) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %p)", mCmdIndex++, "glFramebufferFoveationConfigQCOM", framebuffer, numLayers, focalPointsPerLayer, requestedFeatures, providedFeatures);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferFoveationConfigQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferFoveationConfigQCOM");
    }

    typedef void (*PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC)(GLuint, GLuint, GLuint, GLuint, GLuint*);
    PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC next = reinterpret_cast<PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC>(it->second);
    return next(framebuffer, numLayers, focalPointsPerLayer, requestedFeatures, providedFeatures);
}

void opengl_es_layer_glFramebufferFoveationParametersQCOM(GLuint framebuffer, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %f, %f, %f, %f, %f)", mCmdIndex++, "glFramebufferFoveationParametersQCOM", framebuffer, layer, focalPoint, focalX, focalY, gainX, gainY, foveaArea);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferFoveationParametersQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferFoveationParametersQCOM");
    }

    typedef void (*PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC)(GLuint, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC next = reinterpret_cast<PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC>(it->second);
    return next(framebuffer, layer, focalPoint, focalX, focalY, gainX, gainY, foveaArea);
}

void opengl_es_layer_glFramebufferParameteri(GLenum target, GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glFramebufferParameteri", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferParameteri");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferParameteri");
    }

    typedef void (*PFNGLFRAMEBUFFERPARAMETERIPROC)(GLenum, GLenum, GLint);
    PFNGLFRAMEBUFFERPARAMETERIPROC next = reinterpret_cast<PFNGLFRAMEBUFFERPARAMETERIPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glFramebufferPixelLocalStorageSizeEXT(GLuint target, GLsizei size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glFramebufferPixelLocalStorageSizeEXT", target, size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferPixelLocalStorageSizeEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferPixelLocalStorageSizeEXT");
    }

    typedef void (*PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC)(GLuint, GLsizei);
    PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC next = reinterpret_cast<PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC>(it->second);
    return next(target, size);
}

void opengl_es_layer_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glFramebufferRenderbuffer", target, attachment, renderbuffertarget, renderbuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferRenderbuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferRenderbuffer");
    }

    typedef void (*PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum, GLenum, GLenum, GLuint);
    PFNGLFRAMEBUFFERRENDERBUFFERPROC next = reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC>(it->second);
    return next(target, attachment, renderbuffertarget, renderbuffer);
}

void opengl_es_layer_glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glFramebufferRenderbufferOES", target, attachment, renderbuffertarget, renderbuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferRenderbufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferRenderbufferOES");
    }

    typedef void (*PFNGLFRAMEBUFFERRENDERBUFFEROESPROC)(GLenum, GLenum, GLenum, GLuint);
    PFNGLFRAMEBUFFERRENDERBUFFEROESPROC next = reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFEROESPROC>(it->second);
    return next(target, attachment, renderbuffertarget, renderbuffer);
}

void opengl_es_layer_glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p)", mCmdIndex++, "glFramebufferSampleLocationsfvNV", target, start, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferSampleLocationsfvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferSampleLocationsfvNV");
    }

    typedef void (*PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)(GLenum, GLuint, GLsizei, GLfloat*);
    PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC next = reinterpret_cast<PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(it->second);
    return next(target, start, count, v);
}

void opengl_es_layer_glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d)", mCmdIndex++, "glFramebufferTexture", target, attachment, texture, level);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTexture");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTexture");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTUREPROC)(GLenum, GLenum, GLuint, GLint);
    PFNGLFRAMEBUFFERTEXTUREPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREPROC>(it->second);
    return next(target, attachment, texture, level);
}

void opengl_es_layer_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d)", mCmdIndex++, "glFramebufferTexture2D", target, attachment, textarget, texture, level);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTexture2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTexture2D");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum, GLenum, GLenum, GLuint, GLint);
    PFNGLFRAMEBUFFERTEXTURE2DPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(it->second);
    return next(target, attachment, textarget, texture, level);
}

void opengl_es_layer_glFramebufferTexture2DDownsampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint xscale, GLint yscale) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d, %d, %d)", mCmdIndex++, "glFramebufferTexture2DDownsampleIMG", target, attachment, textarget, texture, level, xscale, yscale);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTexture2DDownsampleIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTexture2DDownsampleIMG");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint, GLint);
    PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC>(it->second);
    return next(target, attachment, textarget, texture, level, xscale, yscale);
}

void opengl_es_layer_glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d, %d)", mCmdIndex++, "glFramebufferTexture2DMultisampleEXT", target, attachment, textarget, texture, level, samples);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTexture2DMultisampleEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTexture2DMultisampleEXT");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLsizei);
    PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC>(it->second);
    return next(target, attachment, textarget, texture, level, samples);
}

void opengl_es_layer_glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d, %d)", mCmdIndex++, "glFramebufferTexture2DMultisampleIMG", target, attachment, textarget, texture, level, samples);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTexture2DMultisampleIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTexture2DMultisampleIMG");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLsizei);
    PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC>(it->second);
    return next(target, attachment, textarget, texture, level, samples);
}

void opengl_es_layer_glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d)", mCmdIndex++, "glFramebufferTexture2DOES", target, attachment, textarget, texture, level);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTexture2DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTexture2DOES");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURE2DOESPROC)(GLenum, GLenum, GLenum, GLuint, GLint);
    PFNGLFRAMEBUFFERTEXTURE2DOESPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DOESPROC>(it->second);
    return next(target, attachment, textarget, texture, level);
}

void opengl_es_layer_glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %d, %d)", mCmdIndex++, "glFramebufferTexture3DOES", target, attachment, textarget, texture, level, zoffset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTexture3DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTexture3DOES");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURE3DOESPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint);
    PFNGLFRAMEBUFFERTEXTURE3DOESPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DOESPROC>(it->second);
    return next(target, attachment, textarget, texture, level, zoffset);
}

void opengl_es_layer_glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d)", mCmdIndex++, "glFramebufferTextureEXT", target, attachment, texture, level);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTextureEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTextureEXT");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTUREEXTPROC)(GLenum, GLenum, GLuint, GLint);
    PFNGLFRAMEBUFFERTEXTUREEXTPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREEXTPROC>(it->second);
    return next(target, attachment, texture, level);
}

void opengl_es_layer_glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %d)", mCmdIndex++, "glFramebufferTextureLayer", target, attachment, texture, level, layer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTextureLayer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTextureLayer");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum, GLenum, GLuint, GLint, GLint);
    PFNGLFRAMEBUFFERTEXTURELAYERPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERPROC>(it->second);
    return next(target, attachment, texture, level, layer);
}

void opengl_es_layer_glFramebufferTextureLayerDownsampleIMG(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, GLint xscale, GLint yscale) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %d, %d, %d)", mCmdIndex++, "glFramebufferTextureLayerDownsampleIMG", target, attachment, texture, level, layer, xscale, yscale);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTextureLayerDownsampleIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTextureLayerDownsampleIMG");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC)(GLenum, GLenum, GLuint, GLint, GLint, GLint, GLint);
    PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC>(it->second);
    return next(target, attachment, texture, level, layer, xscale, yscale);
}

void opengl_es_layer_glFramebufferTextureMultisampleMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %d, %d, %d)", mCmdIndex++, "glFramebufferTextureMultisampleMultiviewOVR", target, attachment, texture, level, samples, baseViewIndex, numViews);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTextureMultisampleMultiviewOVR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTextureMultisampleMultiviewOVR");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC)(GLenum, GLenum, GLuint, GLint, GLsizei, GLint, GLsizei);
    PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC>(it->second);
    return next(target, attachment, texture, level, samples, baseViewIndex, numViews);
}

void opengl_es_layer_glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %d, %d)", mCmdIndex++, "glFramebufferTextureMultiviewOVR", target, attachment, texture, level, baseViewIndex, numViews);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTextureMultiviewOVR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTextureMultiviewOVR");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC)(GLenum, GLenum, GLuint, GLint, GLint, GLsizei);
    PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC>(it->second);
    return next(target, attachment, texture, level, baseViewIndex, numViews);
}

void opengl_es_layer_glFramebufferTextureOES(GLenum target, GLenum attachment, GLuint texture, GLint level) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d)", mCmdIndex++, "glFramebufferTextureOES", target, attachment, texture, level);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFramebufferTextureOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFramebufferTextureOES");
    }

    typedef void (*PFNGLFRAMEBUFFERTEXTUREOESPROC)(GLenum, GLenum, GLuint, GLint);
    PFNGLFRAMEBUFFERTEXTUREOESPROC next = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREOESPROC>(it->second);
    return next(target, attachment, texture, level);
}

void opengl_es_layer_glFrontFace(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glFrontFace", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFrontFace");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFrontFace");
    }

    typedef void (*PFNGLFRONTFACEPROC)(GLenum);
    PFNGLFRONTFACEPROC next = reinterpret_cast<PFNGLFRONTFACEPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glFrustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f, %f)", mCmdIndex++, "glFrustumf", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFrustumf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFrustumf");
    }

    typedef void (*PFNGLFRUSTUMFPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLFRUSTUMFPROC next = reinterpret_cast<PFNGLFRUSTUMFPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f, %f)", mCmdIndex++, "glFrustumfOES", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFrustumfOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFrustumfOES");
    }

    typedef void (*PFNGLFRUSTUMFOESPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLFRUSTUMFOESPROC next = reinterpret_cast<PFNGLFRUSTUMFOESPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glFrustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d, %d)", mCmdIndex++, "glFrustumx", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFrustumx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFrustumx");
    }

    typedef void (*PFNGLFRUSTUMXPROC)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLFRUSTUMXPROC next = reinterpret_cast<PFNGLFRUSTUMXPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d, %d)", mCmdIndex++, "glFrustumxOES", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glFrustumxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glFrustumxOES");
    }

    typedef void (*PFNGLFRUSTUMXOESPROC)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLFRUSTUMXOESPROC next = reinterpret_cast<PFNGLFRUSTUMXOESPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glGenBuffers(GLsizei n, GLuint* buffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenBuffers", n, buffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenBuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenBuffers");
    }

    typedef void (*PFNGLGENBUFFERSPROC)(GLsizei, GLuint*);
    PFNGLGENBUFFERSPROC next = reinterpret_cast<PFNGLGENBUFFERSPROC>(it->second);
    return next(n, buffers);
}

void opengl_es_layer_glGenFencesNV(GLsizei n, GLuint* fences) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenFencesNV", n, fences);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenFencesNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenFencesNV");
    }

    typedef void (*PFNGLGENFENCESNVPROC)(GLsizei, GLuint*);
    PFNGLGENFENCESNVPROC next = reinterpret_cast<PFNGLGENFENCESNVPROC>(it->second);
    return next(n, fences);
}

void opengl_es_layer_glGenFramebuffers(GLsizei n, GLuint* framebuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenFramebuffers", n, framebuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenFramebuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenFramebuffers");
    }

    typedef void (*PFNGLGENFRAMEBUFFERSPROC)(GLsizei, GLuint*);
    PFNGLGENFRAMEBUFFERSPROC next = reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(it->second);
    return next(n, framebuffers);
}

void opengl_es_layer_glGenFramebuffersOES(GLsizei n, GLuint* framebuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenFramebuffersOES", n, framebuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenFramebuffersOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenFramebuffersOES");
    }

    typedef void (*PFNGLGENFRAMEBUFFERSOESPROC)(GLsizei, GLuint*);
    PFNGLGENFRAMEBUFFERSOESPROC next = reinterpret_cast<PFNGLGENFRAMEBUFFERSOESPROC>(it->second);
    return next(n, framebuffers);
}

GLuint opengl_es_layer_glGenPathsNV(GLsizei range) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glGenPathsNV", range);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenPathsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenPathsNV");
    }

    typedef GLuint (*PFNGLGENPATHSNVPROC)(GLsizei);
    PFNGLGENPATHSNVPROC next = reinterpret_cast<PFNGLGENPATHSNVPROC>(it->second);
    return next(range);
}

void opengl_es_layer_glGenPerfMonitorsAMD(GLsizei n, GLuint* monitors) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenPerfMonitorsAMD", n, monitors);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenPerfMonitorsAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenPerfMonitorsAMD");
    }

    typedef void (*PFNGLGENPERFMONITORSAMDPROC)(GLsizei, GLuint*);
    PFNGLGENPERFMONITORSAMDPROC next = reinterpret_cast<PFNGLGENPERFMONITORSAMDPROC>(it->second);
    return next(n, monitors);
}

void opengl_es_layer_glGenProgramPipelines(GLsizei n, GLuint* pipelines) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenProgramPipelines", n, pipelines);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenProgramPipelines");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenProgramPipelines");
    }

    typedef void (*PFNGLGENPROGRAMPIPELINESPROC)(GLsizei, GLuint*);
    PFNGLGENPROGRAMPIPELINESPROC next = reinterpret_cast<PFNGLGENPROGRAMPIPELINESPROC>(it->second);
    return next(n, pipelines);
}

void opengl_es_layer_glGenProgramPipelinesEXT(GLsizei n, GLuint* pipelines) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenProgramPipelinesEXT", n, pipelines);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenProgramPipelinesEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenProgramPipelinesEXT");
    }

    typedef void (*PFNGLGENPROGRAMPIPELINESEXTPROC)(GLsizei, GLuint*);
    PFNGLGENPROGRAMPIPELINESEXTPROC next = reinterpret_cast<PFNGLGENPROGRAMPIPELINESEXTPROC>(it->second);
    return next(n, pipelines);
}

void opengl_es_layer_glGenQueries(GLsizei n, GLuint* ids) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenQueries", n, ids);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenQueries");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenQueries");
    }

    typedef void (*PFNGLGENQUERIESPROC)(GLsizei, GLuint*);
    PFNGLGENQUERIESPROC next = reinterpret_cast<PFNGLGENQUERIESPROC>(it->second);
    return next(n, ids);
}

void opengl_es_layer_glGenQueriesEXT(GLsizei n, GLuint* ids) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenQueriesEXT", n, ids);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenQueriesEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenQueriesEXT");
    }

    typedef void (*PFNGLGENQUERIESEXTPROC)(GLsizei, GLuint*);
    PFNGLGENQUERIESEXTPROC next = reinterpret_cast<PFNGLGENQUERIESEXTPROC>(it->second);
    return next(n, ids);
}

void opengl_es_layer_glGenRenderbuffers(GLsizei n, GLuint* renderbuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenRenderbuffers", n, renderbuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenRenderbuffers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenRenderbuffers");
    }

    typedef void (*PFNGLGENRENDERBUFFERSPROC)(GLsizei, GLuint*);
    PFNGLGENRENDERBUFFERSPROC next = reinterpret_cast<PFNGLGENRENDERBUFFERSPROC>(it->second);
    return next(n, renderbuffers);
}

void opengl_es_layer_glGenRenderbuffersOES(GLsizei n, GLuint* renderbuffers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenRenderbuffersOES", n, renderbuffers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenRenderbuffersOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenRenderbuffersOES");
    }

    typedef void (*PFNGLGENRENDERBUFFERSOESPROC)(GLsizei, GLuint*);
    PFNGLGENRENDERBUFFERSOESPROC next = reinterpret_cast<PFNGLGENRENDERBUFFERSOESPROC>(it->second);
    return next(n, renderbuffers);
}

void opengl_es_layer_glGenSamplers(GLsizei count, GLuint* samplers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenSamplers", count, samplers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenSamplers");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenSamplers");
    }

    typedef void (*PFNGLGENSAMPLERSPROC)(GLsizei, GLuint*);
    PFNGLGENSAMPLERSPROC next = reinterpret_cast<PFNGLGENSAMPLERSPROC>(it->second);
    return next(count, samplers);
}

void opengl_es_layer_glGenSemaphoresEXT(GLsizei n, GLuint* semaphores) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenSemaphoresEXT", n, semaphores);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenSemaphoresEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenSemaphoresEXT");
    }

    typedef void (*PFNGLGENSEMAPHORESEXTPROC)(GLsizei, GLuint*);
    PFNGLGENSEMAPHORESEXTPROC next = reinterpret_cast<PFNGLGENSEMAPHORESEXTPROC>(it->second);
    return next(n, semaphores);
}

void opengl_es_layer_glGenTextures(GLsizei n, GLuint* textures) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenTextures", n, textures);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenTextures");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenTextures");
    }

    typedef void (*PFNGLGENTEXTURESPROC)(GLsizei, GLuint*);
    PFNGLGENTEXTURESPROC next = reinterpret_cast<PFNGLGENTEXTURESPROC>(it->second);
    return next(n, textures);
}

void opengl_es_layer_glGenTransformFeedbacks(GLsizei n, GLuint* ids) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenTransformFeedbacks", n, ids);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenTransformFeedbacks");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenTransformFeedbacks");
    }

    typedef void (*PFNGLGENTRANSFORMFEEDBACKSPROC)(GLsizei, GLuint*);
    PFNGLGENTRANSFORMFEEDBACKSPROC next = reinterpret_cast<PFNGLGENTRANSFORMFEEDBACKSPROC>(it->second);
    return next(n, ids);
}

void opengl_es_layer_glGenVertexArrays(GLsizei n, GLuint* arrays) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenVertexArrays", n, arrays);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenVertexArrays");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenVertexArrays");
    }

    typedef void (*PFNGLGENVERTEXARRAYSPROC)(GLsizei, GLuint*);
    PFNGLGENVERTEXARRAYSPROC next = reinterpret_cast<PFNGLGENVERTEXARRAYSPROC>(it->second);
    return next(n, arrays);
}

void opengl_es_layer_glGenVertexArraysOES(GLsizei n, GLuint* arrays) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGenVertexArraysOES", n, arrays);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenVertexArraysOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenVertexArraysOES");
    }

    typedef void (*PFNGLGENVERTEXARRAYSOESPROC)(GLsizei, GLuint*);
    PFNGLGENVERTEXARRAYSOESPROC next = reinterpret_cast<PFNGLGENVERTEXARRAYSOESPROC>(it->second);
    return next(n, arrays);
}

void opengl_es_layer_glGenerateMipmap(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glGenerateMipmap", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenerateMipmap");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenerateMipmap");
    }

    typedef void (*PFNGLGENERATEMIPMAPPROC)(GLenum);
    PFNGLGENERATEMIPMAPPROC next = reinterpret_cast<PFNGLGENERATEMIPMAPPROC>(it->second);
    return next(target);
}

void opengl_es_layer_glGenerateMipmapOES(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glGenerateMipmapOES", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGenerateMipmapOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGenerateMipmapOES");
    }

    typedef void (*PFNGLGENERATEMIPMAPOESPROC)(GLenum);
    PFNGLGENERATEMIPMAPOESPROC next = reinterpret_cast<PFNGLGENERATEMIPMAPOESPROC>(it->second);
    return next(target);
}

void opengl_es_layer_glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %p, %p, %s)", mCmdIndex++, "glGetActiveAttrib", program, index, bufSize, length, size, type, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetActiveAttrib");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetActiveAttrib");
    }

    typedef void (*PFNGLGETACTIVEATTRIBPROC)(GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*);
    PFNGLGETACTIVEATTRIBPROC next = reinterpret_cast<PFNGLGETACTIVEATTRIBPROC>(it->second);
    return next(program, index, bufSize, length, size, type, name);
}

void opengl_es_layer_glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %p, %p, %s)", mCmdIndex++, "glGetActiveUniform", program, index, bufSize, length, size, type, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetActiveUniform");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetActiveUniform");
    }

    typedef void (*PFNGLGETACTIVEUNIFORMPROC)(GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*);
    PFNGLGETACTIVEUNIFORMPROC next = reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC>(it->second);
    return next(program, index, bufSize, length, size, type, name);
}

void opengl_es_layer_glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %s)", mCmdIndex++, "glGetActiveUniformBlockName", program, uniformBlockIndex, bufSize, length, uniformBlockName);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetActiveUniformBlockName");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetActiveUniformBlockName");
    }

    typedef void (*PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)(GLuint, GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC next = reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC>(it->second);
    return next(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void opengl_es_layer_glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %p)", mCmdIndex++, "glGetActiveUniformBlockiv", program, uniformBlockIndex, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetActiveUniformBlockiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetActiveUniformBlockiv");
    }

    typedef void (*PFNGLGETACTIVEUNIFORMBLOCKIVPROC)(GLuint, GLuint, GLenum, GLint*);
    PFNGLGETACTIVEUNIFORMBLOCKIVPROC next = reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKIVPROC>(it->second);
    return next(program, uniformBlockIndex, pname, params);
}

void opengl_es_layer_glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, GLuint* uniformIndices, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %u, %p)", mCmdIndex++, "glGetActiveUniformsiv", program, uniformCount, uniformIndices, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetActiveUniformsiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetActiveUniformsiv");
    }

    typedef void (*PFNGLGETACTIVEUNIFORMSIVPROC)(GLuint, GLsizei, GLuint*, GLenum, GLint*);
    PFNGLGETACTIVEUNIFORMSIVPROC next = reinterpret_cast<PFNGLGETACTIVEUNIFORMSIVPROC>(it->second);
    return next(program, uniformCount, uniformIndices, pname, params);
}

void opengl_es_layer_glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %p)", mCmdIndex++, "glGetAttachedShaders", program, maxCount, count, shaders);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetAttachedShaders");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetAttachedShaders");
    }

    typedef void (*PFNGLGETATTACHEDSHADERSPROC)(GLuint, GLsizei, GLsizei*, GLuint*);
    PFNGLGETATTACHEDSHADERSPROC next = reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC>(it->second);
    return next(program, maxCount, count, shaders);
}

GLint opengl_es_layer_glGetAttribLocation(GLuint program, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %s)", mCmdIndex++, "glGetAttribLocation", program, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetAttribLocation");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetAttribLocation");
    }

    typedef GLint (*PFNGLGETATTRIBLOCATIONPROC)(GLuint, GLchar*);
    PFNGLGETATTRIBLOCATIONPROC next = reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC>(it->second);
    return next(program, name);
}

void opengl_es_layer_glGetBooleani_v(GLenum target, GLuint index, GLboolean* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetBooleani_v", target, index, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetBooleani_v");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetBooleani_v");
    }

    typedef void (*PFNGLGETBOOLEANI_VPROC)(GLenum, GLuint, GLboolean*);
    PFNGLGETBOOLEANI_VPROC next = reinterpret_cast<PFNGLGETBOOLEANI_VPROC>(it->second);
    return next(target, index, data);
}

void opengl_es_layer_glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetBufferParameteri64v", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetBufferParameteri64v");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetBufferParameteri64v");
    }

    typedef void (*PFNGLGETBUFFERPARAMETERI64VPROC)(GLenum, GLenum, GLint64*);
    PFNGLGETBUFFERPARAMETERI64VPROC next = reinterpret_cast<PFNGLGETBUFFERPARAMETERI64VPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetBufferParameteriv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetBufferParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetBufferParameteriv");
    }

    typedef void (*PFNGLGETBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint*);
    PFNGLGETBUFFERPARAMETERIVPROC next = reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetBufferPointerv(GLenum target, GLenum pname, void** params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetBufferPointerv", target, pname, *params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetBufferPointerv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetBufferPointerv");
    }

    typedef void (*PFNGLGETBUFFERPOINTERVPROC)(GLenum, GLenum, void**);
    PFNGLGETBUFFERPOINTERVPROC next = reinterpret_cast<PFNGLGETBUFFERPOINTERVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetBufferPointervOES(GLenum target, GLenum pname, void** params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetBufferPointervOES", target, pname, *params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetBufferPointervOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetBufferPointervOES");
    }

    typedef void (*PFNGLGETBUFFERPOINTERVOESPROC)(GLenum, GLenum, void**);
    PFNGLGETBUFFERPOINTERVOESPROC next = reinterpret_cast<PFNGLGETBUFFERPOINTERVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetClipPlanef(GLenum plane, GLfloat* equation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetClipPlanef", plane, equation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetClipPlanef");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetClipPlanef");
    }

    typedef void (*PFNGLGETCLIPPLANEFPROC)(GLenum, GLfloat*);
    PFNGLGETCLIPPLANEFPROC next = reinterpret_cast<PFNGLGETCLIPPLANEFPROC>(it->second);
    return next(plane, equation);
}

void opengl_es_layer_glGetClipPlanefOES(GLenum plane, GLfloat* equation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetClipPlanefOES", plane, equation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetClipPlanefOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetClipPlanefOES");
    }

    typedef void (*PFNGLGETCLIPPLANEFOESPROC)(GLenum, GLfloat*);
    PFNGLGETCLIPPLANEFOESPROC next = reinterpret_cast<PFNGLGETCLIPPLANEFOESPROC>(it->second);
    return next(plane, equation);
}

void opengl_es_layer_glGetClipPlanex(GLenum plane, GLfixed* equation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetClipPlanex", plane, equation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetClipPlanex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetClipPlanex");
    }

    typedef void (*PFNGLGETCLIPPLANEXPROC)(GLenum, GLfixed*);
    PFNGLGETCLIPPLANEXPROC next = reinterpret_cast<PFNGLGETCLIPPLANEXPROC>(it->second);
    return next(plane, equation);
}

void opengl_es_layer_glGetClipPlanexOES(GLenum plane, GLfixed* equation) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetClipPlanexOES", plane, equation);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetClipPlanexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetClipPlanexOES");
    }

    typedef void (*PFNGLGETCLIPPLANEXOESPROC)(GLenum, GLfixed*);
    PFNGLGETCLIPPLANEXOESPROC next = reinterpret_cast<PFNGLGETCLIPPLANEXOESPROC>(it->second);
    return next(plane, equation);
}

void opengl_es_layer_glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p)", mCmdIndex++, "glGetCoverageModulationTableNV", bufsize, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetCoverageModulationTableNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetCoverageModulationTableNV");
    }

    typedef void (*PFNGLGETCOVERAGEMODULATIONTABLENVPROC)(GLsizei, GLfloat*);
    PFNGLGETCOVERAGEMODULATIONTABLENVPROC next = reinterpret_cast<PFNGLGETCOVERAGEMODULATIONTABLENVPROC>(it->second);
    return next(bufsize, v);
}

GLuint opengl_es_layer_glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %p, %p, %p, %p, %s)", mCmdIndex++, "glGetDebugMessageLog", count, bufSize, sources, types, ids, severities, lengths, messageLog);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetDebugMessageLog");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetDebugMessageLog");
    }

    typedef GLuint (*PFNGLGETDEBUGMESSAGELOGPROC)(GLuint, GLsizei, GLenum*, GLenum*, GLuint*, GLenum*, GLsizei*, GLchar*);
    PFNGLGETDEBUGMESSAGELOGPROC next = reinterpret_cast<PFNGLGETDEBUGMESSAGELOGPROC>(it->second);
    return next(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint opengl_es_layer_glGetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %p, %p, %p, %p, %s)", mCmdIndex++, "glGetDebugMessageLogKHR", count, bufSize, sources, types, ids, severities, lengths, messageLog);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetDebugMessageLogKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetDebugMessageLogKHR");
    }

    typedef GLuint (*PFNGLGETDEBUGMESSAGELOGKHRPROC)(GLuint, GLsizei, GLenum*, GLenum*, GLuint*, GLenum*, GLsizei*, GLchar*);
    PFNGLGETDEBUGMESSAGELOGKHRPROC next = reinterpret_cast<PFNGLGETDEBUGMESSAGELOGKHRPROC>(it->second);
    return next(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void opengl_es_layer_glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetDriverControlStringQCOM", driverControl, bufSize, length, driverControlString);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetDriverControlStringQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetDriverControlStringQCOM");
    }

    typedef void (*PFNGLGETDRIVERCONTROLSTRINGQCOMPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETDRIVERCONTROLSTRINGQCOMPROC next = reinterpret_cast<PFNGLGETDRIVERCONTROLSTRINGQCOMPROC>(it->second);
    return next(driverControl, bufSize, length, driverControlString);
}

void opengl_es_layer_glGetDriverControlsQCOM(GLint* num, GLsizei size, GLuint* driverControls) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glGetDriverControlsQCOM", num, size, driverControls);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetDriverControlsQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetDriverControlsQCOM");
    }

    typedef void (*PFNGLGETDRIVERCONTROLSQCOMPROC)(GLint*, GLsizei, GLuint*);
    PFNGLGETDRIVERCONTROLSQCOMPROC next = reinterpret_cast<PFNGLGETDRIVERCONTROLSQCOMPROC>(it->second);
    return next(num, size, driverControls);
}

GLenum opengl_es_layer_glGetError(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glGetError");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetError");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetError");
    }

    typedef GLenum (*PFNGLGETERRORPROC)(void);
    PFNGLGETERRORPROC next = reinterpret_cast<PFNGLGETERRORPROC>(it->second);
    return next();
}

void opengl_es_layer_glGetFenceivNV(GLuint fence, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetFenceivNV", fence, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFenceivNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFenceivNV");
    }

    typedef void (*PFNGLGETFENCEIVNVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETFENCEIVNVPROC next = reinterpret_cast<PFNGLGETFENCEIVNVPROC>(it->second);
    return next(fence, pname, params);
}

void opengl_es_layer_glGetFirstPerfQueryIdINTEL(GLuint* queryId) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glGetFirstPerfQueryIdINTEL", queryId);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFirstPerfQueryIdINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFirstPerfQueryIdINTEL");
    }

    typedef void (*PFNGLGETFIRSTPERFQUERYIDINTELPROC)(GLuint*);
    PFNGLGETFIRSTPERFQUERYIDINTELPROC next = reinterpret_cast<PFNGLGETFIRSTPERFQUERYIDINTELPROC>(it->second);
    return next(queryId);
}

void opengl_es_layer_glGetFixedv(GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetFixedv", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFixedv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFixedv");
    }

    typedef void (*PFNGLGETFIXEDVPROC)(GLenum, GLfixed*);
    PFNGLGETFIXEDVPROC next = reinterpret_cast<PFNGLGETFIXEDVPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glGetFixedvOES(GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetFixedvOES", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFixedvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFixedvOES");
    }

    typedef void (*PFNGLGETFIXEDVOESPROC)(GLenum, GLfixed*);
    PFNGLGETFIXEDVOESPROC next = reinterpret_cast<PFNGLGETFIXEDVOESPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glGetFloati_vNV(GLenum target, GLuint index, GLfloat* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetFloati_vNV", target, index, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFloati_vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFloati_vNV");
    }

    typedef void (*PFNGLGETFLOATI_VNVPROC)(GLenum, GLuint, GLfloat*);
    PFNGLGETFLOATI_VNVPROC next = reinterpret_cast<PFNGLGETFLOATI_VNVPROC>(it->second);
    return next(target, index, data);
}

void opengl_es_layer_glGetFloati_vOES(GLenum target, GLuint index, GLfloat* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetFloati_vOES", target, index, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFloati_vOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFloati_vOES");
    }

    typedef void (*PFNGLGETFLOATI_VOESPROC)(GLenum, GLuint, GLfloat*);
    PFNGLGETFLOATI_VOESPROC next = reinterpret_cast<PFNGLGETFLOATI_VOESPROC>(it->second);
    return next(target, index, data);
}

GLint opengl_es_layer_glGetFragDataIndexEXT(GLuint program, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %s)", mCmdIndex++, "glGetFragDataIndexEXT", program, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFragDataIndexEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFragDataIndexEXT");
    }

    typedef GLint (*PFNGLGETFRAGDATAINDEXEXTPROC)(GLuint, GLchar*);
    PFNGLGETFRAGDATAINDEXEXTPROC next = reinterpret_cast<PFNGLGETFRAGDATAINDEXEXTPROC>(it->second);
    return next(program, name);
}

GLint opengl_es_layer_glGetFragDataLocation(GLuint program, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %s)", mCmdIndex++, "glGetFragDataLocation", program, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFragDataLocation");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFragDataLocation");
    }

    typedef GLint (*PFNGLGETFRAGDATALOCATIONPROC)(GLuint, GLchar*);
    PFNGLGETFRAGDATALOCATIONPROC next = reinterpret_cast<PFNGLGETFRAGDATALOCATIONPROC>(it->second);
    return next(program, name);
}

void opengl_es_layer_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %p)", mCmdIndex++, "glGetFramebufferAttachmentParameteriv", target, attachment, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFramebufferAttachmentParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFramebufferAttachmentParameteriv");
    }

    typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum, GLenum, GLenum, GLint*);
    PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC next = reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(it->second);
    return next(target, attachment, pname, params);
}

void opengl_es_layer_glGetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %p)", mCmdIndex++, "glGetFramebufferAttachmentParameterivOES", target, attachment, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFramebufferAttachmentParameterivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFramebufferAttachmentParameterivOES");
    }

    typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC)(GLenum, GLenum, GLenum, GLint*);
    PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC next = reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC>(it->second);
    return next(target, attachment, pname, params);
}

void opengl_es_layer_glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetFramebufferParameteriv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFramebufferParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFramebufferParameteriv");
    }

    typedef void (*PFNGLGETFRAMEBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint*);
    PFNGLGETFRAMEBUFFERPARAMETERIVPROC next = reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERIVPROC>(it->second);
    return next(target, pname, params);
}

GLsizei opengl_es_layer_glGetFramebufferPixelLocalStorageSizeEXT(GLuint target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glGetFramebufferPixelLocalStorageSizeEXT", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetFramebufferPixelLocalStorageSizeEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetFramebufferPixelLocalStorageSizeEXT");
    }

    typedef GLsizei (*PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC)(GLuint);
    PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC next = reinterpret_cast<PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC>(it->second);
    return next(target);
}

GLenum opengl_es_layer_glGetGraphicsResetStatus(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glGetGraphicsResetStatus");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetGraphicsResetStatus");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetGraphicsResetStatus");
    }

    typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSPROC)(void);
    PFNGLGETGRAPHICSRESETSTATUSPROC next = reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSPROC>(it->second);
    return next();
}

GLenum opengl_es_layer_glGetGraphicsResetStatusEXT(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glGetGraphicsResetStatusEXT");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetGraphicsResetStatusEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetGraphicsResetStatusEXT");
    }

    typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSEXTPROC)(void);
    PFNGLGETGRAPHICSRESETSTATUSEXTPROC next = reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSEXTPROC>(it->second);
    return next();
}

GLenum opengl_es_layer_glGetGraphicsResetStatusKHR(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glGetGraphicsResetStatusKHR");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetGraphicsResetStatusKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetGraphicsResetStatusKHR");
    }

    typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSKHRPROC)(void);
    PFNGLGETGRAPHICSRESETSTATUSKHRPROC next = reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSKHRPROC>(it->second);
    return next();
}

GLuint64 opengl_es_layer_glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %u)", mCmdIndex++, "glGetImageHandleNV", texture, level, layered, layer, format);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetImageHandleNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetImageHandleNV");
    }

    typedef GLuint64 (*PFNGLGETIMAGEHANDLENVPROC)(GLuint, GLint, GLboolean, GLint, GLenum);
    PFNGLGETIMAGEHANDLENVPROC next = reinterpret_cast<PFNGLGETIMAGEHANDLENVPROC>(it->second);
    return next(texture, level, layered, layer, format);
}

void opengl_es_layer_glGetInteger64i_v(GLenum target, GLuint index, GLint64* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetInteger64i_v", target, index, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetInteger64i_v");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetInteger64i_v");
    }

    typedef void (*PFNGLGETINTEGER64I_VPROC)(GLenum, GLuint, GLint64*);
    PFNGLGETINTEGER64I_VPROC next = reinterpret_cast<PFNGLGETINTEGER64I_VPROC>(it->second);
    return next(target, index, data);
}

void opengl_es_layer_glGetInteger64vAPPLE(GLenum pname, GLint64* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetInteger64vAPPLE", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetInteger64vAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetInteger64vAPPLE");
    }

    typedef void (*PFNGLGETINTEGER64VAPPLEPROC)(GLenum, GLint64*);
    PFNGLGETINTEGER64VAPPLEPROC next = reinterpret_cast<PFNGLGETINTEGER64VAPPLEPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glGetIntegeri_v(GLenum target, GLuint index, GLint* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetIntegeri_v", target, index, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetIntegeri_v");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetIntegeri_v");
    }

    typedef void (*PFNGLGETINTEGERI_VPROC)(GLenum, GLuint, GLint*);
    PFNGLGETINTEGERI_VPROC next = reinterpret_cast<PFNGLGETINTEGERI_VPROC>(it->second);
    return next(target, index, data);
}

void opengl_es_layer_glGetIntegeri_vEXT(GLenum target, GLuint index, GLint* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetIntegeri_vEXT", target, index, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetIntegeri_vEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetIntegeri_vEXT");
    }

    typedef void (*PFNGLGETINTEGERI_VEXTPROC)(GLenum, GLuint, GLint*);
    PFNGLGETINTEGERI_VEXTPROC next = reinterpret_cast<PFNGLGETINTEGERI_VEXTPROC>(it->second);
    return next(target, index, data);
}

void opengl_es_layer_glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %u, %d, %p)", mCmdIndex++, "glGetInternalformatSampleivNV", target, internalformat, samples, pname, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetInternalformatSampleivNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetInternalformatSampleivNV");
    }

    typedef void (*PFNGLGETINTERNALFORMATSAMPLEIVNVPROC)(GLenum, GLenum, GLsizei, GLenum, GLsizei, GLint*);
    PFNGLGETINTERNALFORMATSAMPLEIVNVPROC next = reinterpret_cast<PFNGLGETINTERNALFORMATSAMPLEIVNVPROC>(it->second);
    return next(target, internalformat, samples, pname, bufSize, params);
}

void opengl_es_layer_glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %p)", mCmdIndex++, "glGetInternalformativ", target, internalformat, pname, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetInternalformativ");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetInternalformativ");
    }

    typedef void (*PFNGLGETINTERNALFORMATIVPROC)(GLenum, GLenum, GLenum, GLsizei, GLint*);
    PFNGLGETINTERNALFORMATIVPROC next = reinterpret_cast<PFNGLGETINTERNALFORMATIVPROC>(it->second);
    return next(target, internalformat, pname, bufSize, params);
}

void opengl_es_layer_glGetLightfv(GLenum light, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetLightfv", light, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetLightfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetLightfv");
    }

    typedef void (*PFNGLGETLIGHTFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLGETLIGHTFVPROC next = reinterpret_cast<PFNGLGETLIGHTFVPROC>(it->second);
    return next(light, pname, params);
}

void opengl_es_layer_glGetLightxv(GLenum light, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetLightxv", light, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetLightxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetLightxv");
    }

    typedef void (*PFNGLGETLIGHTXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETLIGHTXVPROC next = reinterpret_cast<PFNGLGETLIGHTXVPROC>(it->second);
    return next(light, pname, params);
}

void opengl_es_layer_glGetLightxvOES(GLenum light, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetLightxvOES", light, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetLightxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetLightxvOES");
    }

    typedef void (*PFNGLGETLIGHTXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETLIGHTXVOESPROC next = reinterpret_cast<PFNGLGETLIGHTXVOESPROC>(it->second);
    return next(light, pname, params);
}

void opengl_es_layer_glGetMaterialfv(GLenum face, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetMaterialfv", face, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetMaterialfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetMaterialfv");
    }

    typedef void (*PFNGLGETMATERIALFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLGETMATERIALFVPROC next = reinterpret_cast<PFNGLGETMATERIALFVPROC>(it->second);
    return next(face, pname, params);
}

void opengl_es_layer_glGetMaterialxv(GLenum face, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetMaterialxv", face, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetMaterialxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetMaterialxv");
    }

    typedef void (*PFNGLGETMATERIALXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETMATERIALXVPROC next = reinterpret_cast<PFNGLGETMATERIALXVPROC>(it->second);
    return next(face, pname, params);
}

void opengl_es_layer_glGetMaterialxvOES(GLenum face, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetMaterialxvOES", face, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetMaterialxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetMaterialxvOES");
    }

    typedef void (*PFNGLGETMATERIALXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETMATERIALXVOESPROC next = reinterpret_cast<PFNGLGETMATERIALXVOESPROC>(it->second);
    return next(face, pname, params);
}

void opengl_es_layer_glGetMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetMemoryObjectParameterivEXT", memoryObject, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetMemoryObjectParameterivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetMemoryObjectParameterivEXT");
    }

    typedef void (*PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC)(GLuint, GLenum, GLint*);
    PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC next = reinterpret_cast<PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC>(it->second);
    return next(memoryObject, pname, params);
}

void opengl_es_layer_glGetMultisamplefv(GLenum pname, GLuint index, GLfloat* val) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetMultisamplefv", pname, index, val);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetMultisamplefv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetMultisamplefv");
    }

    typedef void (*PFNGLGETMULTISAMPLEFVPROC)(GLenum, GLuint, GLfloat*);
    PFNGLGETMULTISAMPLEFVPROC next = reinterpret_cast<PFNGLGETMULTISAMPLEFVPROC>(it->second);
    return next(pname, index, val);
}

void opengl_es_layer_glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint* nextQueryId) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetNextPerfQueryIdINTEL", queryId, nextQueryId);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetNextPerfQueryIdINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetNextPerfQueryIdINTEL");
    }

    typedef void (*PFNGLGETNEXTPERFQUERYIDINTELPROC)(GLuint, GLuint*);
    PFNGLGETNEXTPERFQUERYIDINTELPROC next = reinterpret_cast<PFNGLGETNEXTPERFQUERYIDINTELPROC>(it->second);
    return next(queryId, nextQueryId);
}

void opengl_es_layer_glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %s)", mCmdIndex++, "glGetObjectLabel", identifier, name, bufSize, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetObjectLabel");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetObjectLabel");
    }

    typedef void (*PFNGLGETOBJECTLABELPROC)(GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETOBJECTLABELPROC next = reinterpret_cast<PFNGLGETOBJECTLABELPROC>(it->second);
    return next(identifier, name, bufSize, length, label);
}

void opengl_es_layer_glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei* length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %s)", mCmdIndex++, "glGetObjectLabelEXT", type, object, bufSize, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetObjectLabelEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetObjectLabelEXT");
    }

    typedef void (*PFNGLGETOBJECTLABELEXTPROC)(GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETOBJECTLABELEXTPROC next = reinterpret_cast<PFNGLGETOBJECTLABELEXTPROC>(it->second);
    return next(type, object, bufSize, length, label);
}

void opengl_es_layer_glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %s)", mCmdIndex++, "glGetObjectLabelKHR", identifier, name, bufSize, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetObjectLabelKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetObjectLabelKHR");
    }

    typedef void (*PFNGLGETOBJECTLABELKHRPROC)(GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETOBJECTLABELKHRPROC next = reinterpret_cast<PFNGLGETOBJECTLABELKHRPROC>(it->second);
    return next(identifier, name, bufSize, length, label);
}

void opengl_es_layer_glGetObjectPtrLabel(void* ptr, GLsizei bufSize, GLsizei* length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p, %s)", mCmdIndex++, "glGetObjectPtrLabel", ptr, bufSize, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetObjectPtrLabel");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetObjectPtrLabel");
    }

    typedef void (*PFNGLGETOBJECTPTRLABELPROC)(void*, GLsizei, GLsizei*, GLchar*);
    PFNGLGETOBJECTPTRLABELPROC next = reinterpret_cast<PFNGLGETOBJECTPTRLABELPROC>(it->second);
    return next(ptr, bufSize, length, label);
}

void opengl_es_layer_glGetObjectPtrLabelKHR(void* ptr, GLsizei bufSize, GLsizei* length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p, %s)", mCmdIndex++, "glGetObjectPtrLabelKHR", ptr, bufSize, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetObjectPtrLabelKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetObjectPtrLabelKHR");
    }

    typedef void (*PFNGLGETOBJECTPTRLABELKHRPROC)(void*, GLsizei, GLsizei*, GLchar*);
    PFNGLGETOBJECTPTRLABELKHRPROC next = reinterpret_cast<PFNGLGETOBJECTPTRLABELKHRPROC>(it->second);
    return next(ptr, bufSize, length, label);
}

void opengl_es_layer_glGetPathCommandsNV(GLuint path, GLubyte* commands) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetPathCommandsNV", path, commands);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathCommandsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathCommandsNV");
    }

    typedef void (*PFNGLGETPATHCOMMANDSNVPROC)(GLuint, GLubyte*);
    PFNGLGETPATHCOMMANDSNVPROC next = reinterpret_cast<PFNGLGETPATHCOMMANDSNVPROC>(it->second);
    return next(path, commands);
}

void opengl_es_layer_glGetPathCoordsNV(GLuint path, GLfloat* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetPathCoordsNV", path, coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathCoordsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathCoordsNV");
    }

    typedef void (*PFNGLGETPATHCOORDSNVPROC)(GLuint, GLfloat*);
    PFNGLGETPATHCOORDSNVPROC next = reinterpret_cast<PFNGLGETPATHCOORDSNVPROC>(it->second);
    return next(path, coords);
}

void opengl_es_layer_glGetPathDashArrayNV(GLuint path, GLfloat* dashArray) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetPathDashArrayNV", path, dashArray);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathDashArrayNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathDashArrayNV");
    }

    typedef void (*PFNGLGETPATHDASHARRAYNVPROC)(GLuint, GLfloat*);
    PFNGLGETPATHDASHARRAYNVPROC next = reinterpret_cast<PFNGLGETPATHDASHARRAYNVPROC>(it->second);
    return next(path, dashArray);
}

GLfloat opengl_es_layer_glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d)", mCmdIndex++, "glGetPathLengthNV", path, startSegment, numSegments);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathLengthNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathLengthNV");
    }

    typedef GLfloat (*PFNGLGETPATHLENGTHNVPROC)(GLuint, GLsizei, GLsizei);
    PFNGLGETPATHLENGTHNVPROC next = reinterpret_cast<PFNGLGETPATHLENGTHNVPROC>(it->second);
    return next(path, startSegment, numSegments);
}

void opengl_es_layer_glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat* metrics) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %d, %p)", mCmdIndex++, "glGetPathMetricRangeNV", metricQueryMask, firstPathName, numPaths, stride, metrics);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathMetricRangeNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathMetricRangeNV");
    }

    typedef void (*PFNGLGETPATHMETRICRANGENVPROC)(GLbitfield, GLuint, GLsizei, GLsizei, GLfloat*);
    PFNGLGETPATHMETRICRANGENVPROC next = reinterpret_cast<PFNGLGETPATHMETRICRANGENVPROC>(it->second);
    return next(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void opengl_es_layer_glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLsizei stride, GLfloat* metrics) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %u, %d, %p)", mCmdIndex++, "glGetPathMetricsNV", metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathMetricsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathMetricsNV");
    }

    typedef void (*PFNGLGETPATHMETRICSNVPROC)(GLbitfield, GLsizei, GLenum, void*, GLuint, GLsizei, GLfloat*);
    PFNGLGETPATHMETRICSNVPROC next = reinterpret_cast<PFNGLGETPATHMETRICSNVPROC>(it->second);
    return next(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void opengl_es_layer_glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetPathParameterfvNV", path, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathParameterfvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathParameterfvNV");
    }

    typedef void (*PFNGLGETPATHPARAMETERFVNVPROC)(GLuint, GLenum, GLfloat*);
    PFNGLGETPATHPARAMETERFVNVPROC next = reinterpret_cast<PFNGLGETPATHPARAMETERFVNVPROC>(it->second);
    return next(path, pname, value);
}

void opengl_es_layer_glGetPathParameterivNV(GLuint path, GLenum pname, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetPathParameterivNV", path, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathParameterivNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathParameterivNV");
    }

    typedef void (*PFNGLGETPATHPARAMETERIVNVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETPATHPARAMETERIVNVPROC next = reinterpret_cast<PFNGLGETPATHPARAMETERIVNVPROC>(it->second);
    return next(path, pname, value);
}

void opengl_es_layer_glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat* returnedSpacing) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p, %u, %f, %f, %u, %p)", mCmdIndex++, "glGetPathSpacingNV", pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPathSpacingNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPathSpacingNV");
    }

    typedef void (*PFNGLGETPATHSPACINGNVPROC)(GLenum, GLsizei, GLenum, void*, GLuint, GLfloat, GLfloat, GLenum, GLfloat*);
    PFNGLGETPATHSPACINGNVPROC next = reinterpret_cast<PFNGLGETPATHSPACINGNVPROC>(it->second);
    return next(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void opengl_es_layer_glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar* counterName, GLuint counterDescLength, GLchar* counterDesc, GLuint* counterOffset, GLuint* counterDataSize, GLuint* counterTypeEnum, GLuint* counterDataTypeEnum, GLuint64* rawCounterMaxValue) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %s, %u, %s, %p, %p, %p, %p, %p)", mCmdIndex++, "glGetPerfCounterInfoINTEL", queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfCounterInfoINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfCounterInfoINTEL");
    }

    typedef void (*PFNGLGETPERFCOUNTERINFOINTELPROC)(GLuint, GLuint, GLuint, GLchar*, GLuint, GLchar*, GLuint*, GLuint*, GLuint*, GLuint*, GLuint64*);
    PFNGLGETPERFCOUNTERINFOINTELPROC next = reinterpret_cast<PFNGLGETPERFCOUNTERINFOINTELPROC>(it->second);
    return next(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void opengl_es_layer_glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint* data, GLint* bytesWritten) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %p)", mCmdIndex++, "glGetPerfMonitorCounterDataAMD", monitor, pname, dataSize, data, bytesWritten);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfMonitorCounterDataAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfMonitorCounterDataAMD");
    }

    typedef void (*PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)(GLuint, GLenum, GLsizei, GLuint*, GLint*);
    PFNGLGETPERFMONITORCOUNTERDATAAMDPROC next = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERDATAAMDPROC>(it->second);
    return next(monitor, pname, dataSize, data, bytesWritten);
}

void opengl_es_layer_glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %p)", mCmdIndex++, "glGetPerfMonitorCounterInfoAMD", group, counter, pname, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfMonitorCounterInfoAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfMonitorCounterInfoAMD");
    }

    typedef void (*PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)(GLuint, GLuint, GLenum, void*);
    PFNGLGETPERFMONITORCOUNTERINFOAMDPROC next = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERINFOAMDPROC>(it->second);
    return next(group, counter, pname, data);
}

void opengl_es_layer_glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei* length, GLchar* counterString) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %s)", mCmdIndex++, "glGetPerfMonitorCounterStringAMD", group, counter, bufSize, length, counterString);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfMonitorCounterStringAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfMonitorCounterStringAMD");
    }

    typedef void (*PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)(GLuint, GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC next = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC>(it->second);
    return next(group, counter, bufSize, length, counterString);
}

void opengl_es_layer_glGetPerfMonitorCountersAMD(GLuint group, GLint* numCounters, GLint* maxActiveCounters, GLsizei counterSize, GLuint* counters) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %p, %d, %p)", mCmdIndex++, "glGetPerfMonitorCountersAMD", group, numCounters, maxActiveCounters, counterSize, counters);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfMonitorCountersAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfMonitorCountersAMD");
    }

    typedef void (*PFNGLGETPERFMONITORCOUNTERSAMDPROC)(GLuint, GLint*, GLint*, GLsizei, GLuint*);
    PFNGLGETPERFMONITORCOUNTERSAMDPROC next = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSAMDPROC>(it->second);
    return next(group, numCounters, maxActiveCounters, counterSize, counters);
}

void opengl_es_layer_glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei* length, GLchar* groupString) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetPerfMonitorGroupStringAMD", group, bufSize, length, groupString);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfMonitorGroupStringAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfMonitorGroupStringAMD");
    }

    typedef void (*PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETPERFMONITORGROUPSTRINGAMDPROC next = reinterpret_cast<PFNGLGETPERFMONITORGROUPSTRINGAMDPROC>(it->second);
    return next(group, bufSize, length, groupString);
}

void opengl_es_layer_glGetPerfMonitorGroupsAMD(GLint* numGroups, GLsizei groupsSize, GLuint* groups) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %p)", mCmdIndex++, "glGetPerfMonitorGroupsAMD", numGroups, groupsSize, groups);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfMonitorGroupsAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfMonitorGroupsAMD");
    }

    typedef void (*PFNGLGETPERFMONITORGROUPSAMDPROC)(GLint*, GLsizei, GLuint*);
    PFNGLGETPERFMONITORGROUPSAMDPROC next = reinterpret_cast<PFNGLGETPERFMONITORGROUPSAMDPROC>(it->second);
    return next(numGroups, groupsSize, groups);
}

void opengl_es_layer_glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, void* data, GLuint* bytesWritten) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %p)", mCmdIndex++, "glGetPerfQueryDataINTEL", queryHandle, flags, dataSize, data, bytesWritten);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfQueryDataINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfQueryDataINTEL");
    }

    typedef void (*PFNGLGETPERFQUERYDATAINTELPROC)(GLuint, GLuint, GLsizei, void*, GLuint*);
    PFNGLGETPERFQUERYDATAINTELPROC next = reinterpret_cast<PFNGLGETPERFQUERYDATAINTELPROC>(it->second);
    return next(queryHandle, flags, dataSize, data, bytesWritten);
}

void opengl_es_layer_glGetPerfQueryIdByNameINTEL(GLchar* queryName, GLuint* queryId) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%s, %p)", mCmdIndex++, "glGetPerfQueryIdByNameINTEL", queryName, queryId);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfQueryIdByNameINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfQueryIdByNameINTEL");
    }

    typedef void (*PFNGLGETPERFQUERYIDBYNAMEINTELPROC)(GLchar*, GLuint*);
    PFNGLGETPERFQUERYIDBYNAMEINTELPROC next = reinterpret_cast<PFNGLGETPERFQUERYIDBYNAMEINTELPROC>(it->second);
    return next(queryName, queryId);
}

void opengl_es_layer_glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar* queryName, GLuint* dataSize, GLuint* noCounters, GLuint* noInstances, GLuint* capsMask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %s, %p, %p, %p, %p)", mCmdIndex++, "glGetPerfQueryInfoINTEL", queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPerfQueryInfoINTEL");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPerfQueryInfoINTEL");
    }

    typedef void (*PFNGLGETPERFQUERYINFOINTELPROC)(GLuint, GLuint, GLchar*, GLuint*, GLuint*, GLuint*, GLuint*);
    PFNGLGETPERFQUERYINFOINTELPROC next = reinterpret_cast<PFNGLGETPERFQUERYINFOINTELPROC>(it->second);
    return next(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void opengl_es_layer_glGetPointerv(GLenum pname, void** params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetPointerv", pname, *params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPointerv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPointerv");
    }

    typedef void (*PFNGLGETPOINTERVPROC)(GLenum, void**);
    PFNGLGETPOINTERVPROC next = reinterpret_cast<PFNGLGETPOINTERVPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glGetPointervKHR(GLenum pname, void** params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetPointervKHR", pname, *params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetPointervKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetPointervKHR");
    }

    typedef void (*PFNGLGETPOINTERVKHRPROC)(GLenum, void**);
    PFNGLGETPOINTERVKHRPROC next = reinterpret_cast<PFNGLGETPOINTERVKHRPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %p, %p)", mCmdIndex++, "glGetProgramBinary", program, bufSize, length, binaryFormat, binary);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramBinary");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramBinary");
    }

    typedef void (*PFNGLGETPROGRAMBINARYPROC)(GLuint, GLsizei, GLsizei*, GLenum*, void*);
    PFNGLGETPROGRAMBINARYPROC next = reinterpret_cast<PFNGLGETPROGRAMBINARYPROC>(it->second);
    return next(program, bufSize, length, binaryFormat, binary);
}

void opengl_es_layer_glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %p, %p)", mCmdIndex++, "glGetProgramBinaryOES", program, bufSize, length, binaryFormat, binary);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramBinaryOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramBinaryOES");
    }

    typedef void (*PFNGLGETPROGRAMBINARYOESPROC)(GLuint, GLsizei, GLsizei*, GLenum*, void*);
    PFNGLGETPROGRAMBINARYOESPROC next = reinterpret_cast<PFNGLGETPROGRAMBINARYOESPROC>(it->second);
    return next(program, bufSize, length, binaryFormat, binary);
}

void opengl_es_layer_glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetProgramInfoLog", program, bufSize, length, infoLog);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramInfoLog");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramInfoLog");
    }

    typedef void (*PFNGLGETPROGRAMINFOLOGPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETPROGRAMINFOLOGPROC next = reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(it->second);
    return next(program, bufSize, length, infoLog);
}

void opengl_es_layer_glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %p)", mCmdIndex++, "glGetProgramInterfaceiv", program, programInterface, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramInterfaceiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramInterfaceiv");
    }

    typedef void (*PFNGLGETPROGRAMINTERFACEIVPROC)(GLuint, GLenum, GLenum, GLint*);
    PFNGLGETPROGRAMINTERFACEIVPROC next = reinterpret_cast<PFNGLGETPROGRAMINTERFACEIVPROC>(it->second);
    return next(program, programInterface, pname, params);
}

void opengl_es_layer_glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetProgramPipelineInfoLog", pipeline, bufSize, length, infoLog);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramPipelineInfoLog");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramPipelineInfoLog");
    }

    typedef void (*PFNGLGETPROGRAMPIPELINEINFOLOGPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETPROGRAMPIPELINEINFOLOGPROC next = reinterpret_cast<PFNGLGETPROGRAMPIPELINEINFOLOGPROC>(it->second);
    return next(pipeline, bufSize, length, infoLog);
}

void opengl_es_layer_glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetProgramPipelineInfoLogEXT", pipeline, bufSize, length, infoLog);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramPipelineInfoLogEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramPipelineInfoLogEXT");
    }

    typedef void (*PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC next = reinterpret_cast<PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC>(it->second);
    return next(pipeline, bufSize, length, infoLog);
}

void opengl_es_layer_glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetProgramPipelineiv", pipeline, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramPipelineiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramPipelineiv");
    }

    typedef void (*PFNGLGETPROGRAMPIPELINEIVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETPROGRAMPIPELINEIVPROC next = reinterpret_cast<PFNGLGETPROGRAMPIPELINEIVPROC>(it->second);
    return next(pipeline, pname, params);
}

void opengl_es_layer_glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetProgramPipelineivEXT", pipeline, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramPipelineivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramPipelineivEXT");
    }

    typedef void (*PFNGLGETPROGRAMPIPELINEIVEXTPROC)(GLuint, GLenum, GLint*);
    PFNGLGETPROGRAMPIPELINEIVEXTPROC next = reinterpret_cast<PFNGLGETPROGRAMPIPELINEIVEXTPROC>(it->second);
    return next(pipeline, pname, params);
}

GLuint opengl_es_layer_glGetProgramResourceIndex(GLuint program, GLenum programInterface, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %s)", mCmdIndex++, "glGetProgramResourceIndex", program, programInterface, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramResourceIndex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramResourceIndex");
    }

    typedef GLuint (*PFNGLGETPROGRAMRESOURCEINDEXPROC)(GLuint, GLenum, GLchar*);
    PFNGLGETPROGRAMRESOURCEINDEXPROC next = reinterpret_cast<PFNGLGETPROGRAMRESOURCEINDEXPROC>(it->second);
    return next(program, programInterface, name);
}

GLint opengl_es_layer_glGetProgramResourceLocation(GLuint program, GLenum programInterface, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %s)", mCmdIndex++, "glGetProgramResourceLocation", program, programInterface, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramResourceLocation");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramResourceLocation");
    }

    typedef GLint (*PFNGLGETPROGRAMRESOURCELOCATIONPROC)(GLuint, GLenum, GLchar*);
    PFNGLGETPROGRAMRESOURCELOCATIONPROC next = reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONPROC>(it->second);
    return next(program, programInterface, name);
}

GLint opengl_es_layer_glGetProgramResourceLocationIndexEXT(GLuint program, GLenum programInterface, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %s)", mCmdIndex++, "glGetProgramResourceLocationIndexEXT", program, programInterface, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramResourceLocationIndexEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramResourceLocationIndexEXT");
    }

    typedef GLint (*PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC)(GLuint, GLenum, GLchar*);
    PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC next = reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC>(it->second);
    return next(program, programInterface, name);
}

void opengl_es_layer_glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %p, %s)", mCmdIndex++, "glGetProgramResourceName", program, programInterface, index, bufSize, length, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramResourceName");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramResourceName");
    }

    typedef void (*PFNGLGETPROGRAMRESOURCENAMEPROC)(GLuint, GLenum, GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETPROGRAMRESOURCENAMEPROC next = reinterpret_cast<PFNGLGETPROGRAMRESOURCENAMEPROC>(it->second);
    return next(program, programInterface, index, bufSize, length, name);
}

void opengl_es_layer_glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum* props, GLsizei bufSize, GLsizei* length, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %p, %d, %p, %p)", mCmdIndex++, "glGetProgramResourcefvNV", program, programInterface, index, propCount, props, bufSize, length, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramResourcefvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramResourcefvNV");
    }

    typedef void (*PFNGLGETPROGRAMRESOURCEFVNVPROC)(GLuint, GLenum, GLuint, GLsizei, GLenum*, GLsizei, GLsizei*, GLfloat*);
    PFNGLGETPROGRAMRESOURCEFVNVPROC next = reinterpret_cast<PFNGLGETPROGRAMRESOURCEFVNVPROC>(it->second);
    return next(program, programInterface, index, propCount, props, bufSize, length, params);
}

void opengl_es_layer_glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum* props, GLsizei bufSize, GLsizei* length, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %p, %d, %p, %p)", mCmdIndex++, "glGetProgramResourceiv", program, programInterface, index, propCount, props, bufSize, length, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramResourceiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramResourceiv");
    }

    typedef void (*PFNGLGETPROGRAMRESOURCEIVPROC)(GLuint, GLenum, GLuint, GLsizei, GLenum*, GLsizei, GLsizei*, GLint*);
    PFNGLGETPROGRAMRESOURCEIVPROC next = reinterpret_cast<PFNGLGETPROGRAMRESOURCEIVPROC>(it->second);
    return next(program, programInterface, index, propCount, props, bufSize, length, params);
}

void opengl_es_layer_glGetProgramiv(GLuint program, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetProgramiv", program, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetProgramiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetProgramiv");
    }

    typedef void (*PFNGLGETPROGRAMIVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETPROGRAMIVPROC next = reinterpret_cast<PFNGLGETPROGRAMIVPROC>(it->second);
    return next(program, pname, params);
}

void opengl_es_layer_glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetQueryObjecti64vEXT", id, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetQueryObjecti64vEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetQueryObjecti64vEXT");
    }

    typedef void (*PFNGLGETQUERYOBJECTI64VEXTPROC)(GLuint, GLenum, GLint64*);
    PFNGLGETQUERYOBJECTI64VEXTPROC next = reinterpret_cast<PFNGLGETQUERYOBJECTI64VEXTPROC>(it->second);
    return next(id, pname, params);
}

void opengl_es_layer_glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetQueryObjectivEXT", id, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetQueryObjectivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetQueryObjectivEXT");
    }

    typedef void (*PFNGLGETQUERYOBJECTIVEXTPROC)(GLuint, GLenum, GLint*);
    PFNGLGETQUERYOBJECTIVEXTPROC next = reinterpret_cast<PFNGLGETQUERYOBJECTIVEXTPROC>(it->second);
    return next(id, pname, params);
}

void opengl_es_layer_glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetQueryObjectui64vEXT", id, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetQueryObjectui64vEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetQueryObjectui64vEXT");
    }

    typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC)(GLuint, GLenum, GLuint64*);
    PFNGLGETQUERYOBJECTUI64VEXTPROC next = reinterpret_cast<PFNGLGETQUERYOBJECTUI64VEXTPROC>(it->second);
    return next(id, pname, params);
}

void opengl_es_layer_glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetQueryObjectuiv", id, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetQueryObjectuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetQueryObjectuiv");
    }

    typedef void (*PFNGLGETQUERYOBJECTUIVPROC)(GLuint, GLenum, GLuint*);
    PFNGLGETQUERYOBJECTUIVPROC next = reinterpret_cast<PFNGLGETQUERYOBJECTUIVPROC>(it->second);
    return next(id, pname, params);
}

void opengl_es_layer_glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetQueryObjectuivEXT", id, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetQueryObjectuivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetQueryObjectuivEXT");
    }

    typedef void (*PFNGLGETQUERYOBJECTUIVEXTPROC)(GLuint, GLenum, GLuint*);
    PFNGLGETQUERYOBJECTUIVEXTPROC next = reinterpret_cast<PFNGLGETQUERYOBJECTUIVEXTPROC>(it->second);
    return next(id, pname, params);
}

void opengl_es_layer_glGetQueryiv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetQueryiv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetQueryiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetQueryiv");
    }

    typedef void (*PFNGLGETQUERYIVPROC)(GLenum, GLenum, GLint*);
    PFNGLGETQUERYIVPROC next = reinterpret_cast<PFNGLGETQUERYIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetQueryivEXT(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetQueryivEXT", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetQueryivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetQueryivEXT");
    }

    typedef void (*PFNGLGETQUERYIVEXTPROC)(GLenum, GLenum, GLint*);
    PFNGLGETQUERYIVEXTPROC next = reinterpret_cast<PFNGLGETQUERYIVEXTPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetRenderbufferParameteriv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetRenderbufferParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetRenderbufferParameteriv");
    }

    typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint*);
    PFNGLGETRENDERBUFFERPARAMETERIVPROC next = reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetRenderbufferParameterivOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetRenderbufferParameterivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetRenderbufferParameterivOES");
    }

    typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVOESPROC)(GLenum, GLenum, GLint*);
    PFNGLGETRENDERBUFFERPARAMETERIVOESPROC next = reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameterIiv", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameterIiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameterIiv");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERIIVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETSAMPLERPARAMETERIIVPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameterIivEXT", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameterIivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameterIivEXT");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERIIVEXTPROC)(GLuint, GLenum, GLint*);
    PFNGLGETSAMPLERPARAMETERIIVEXTPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVEXTPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameterIivOES", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameterIivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameterIivOES");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERIIVOESPROC)(GLuint, GLenum, GLint*);
    PFNGLGETSAMPLERPARAMETERIIVOESPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVOESPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameterIuiv", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameterIuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameterIuiv");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERIUIVPROC)(GLuint, GLenum, GLuint*);
    PFNGLGETSAMPLERPARAMETERIUIVPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameterIuivEXT", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameterIuivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameterIuivEXT");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLuint*);
    PFNGLGETSAMPLERPARAMETERIUIVEXTPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVEXTPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameterIuivOES", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameterIuivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameterIuivOES");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERIUIVOESPROC)(GLuint, GLenum, GLuint*);
    PFNGLGETSAMPLERPARAMETERIUIVOESPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVOESPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameterfv", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameterfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameterfv");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERFVPROC)(GLuint, GLenum, GLfloat*);
    PFNGLGETSAMPLERPARAMETERFVPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERFVPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSamplerParameteriv", sampler, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSamplerParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSamplerParameteriv");
    }

    typedef void (*PFNGLGETSAMPLERPARAMETERIVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETSAMPLERPARAMETERIVPROC next = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIVPROC>(it->second);
    return next(sampler, pname, params);
}

void opengl_es_layer_glGetSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, GLuint64* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetSemaphoreParameterui64vEXT", semaphore, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSemaphoreParameterui64vEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSemaphoreParameterui64vEXT");
    }

    typedef void (*PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC)(GLuint, GLenum, GLuint64*);
    PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC next = reinterpret_cast<PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC>(it->second);
    return next(semaphore, pname, params);
}

void opengl_es_layer_glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetShaderInfoLog", shader, bufSize, length, infoLog);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetShaderInfoLog");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetShaderInfoLog");
    }

    typedef void (*PFNGLGETSHADERINFOLOGPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETSHADERINFOLOGPROC next = reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(it->second);
    return next(shader, bufSize, length, infoLog);
}

void opengl_es_layer_glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %p)", mCmdIndex++, "glGetShaderPrecisionFormat", shadertype, precisiontype, range, precision);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetShaderPrecisionFormat");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetShaderPrecisionFormat");
    }

    typedef void (*PFNGLGETSHADERPRECISIONFORMATPROC)(GLenum, GLenum, GLint*, GLint*);
    PFNGLGETSHADERPRECISIONFORMATPROC next = reinterpret_cast<PFNGLGETSHADERPRECISIONFORMATPROC>(it->second);
    return next(shadertype, precisiontype, range, precision);
}

void opengl_es_layer_glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetShaderSource", shader, bufSize, length, source);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetShaderSource");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetShaderSource");
    }

    typedef void (*PFNGLGETSHADERSOURCEPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETSHADERSOURCEPROC next = reinterpret_cast<PFNGLGETSHADERSOURCEPROC>(it->second);
    return next(shader, bufSize, length, source);
}

void opengl_es_layer_glGetShaderiv(GLuint shader, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetShaderiv", shader, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetShaderiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetShaderiv");
    }

    typedef void (*PFNGLGETSHADERIVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETSHADERIVPROC next = reinterpret_cast<PFNGLGETSHADERIVPROC>(it->second);
    return next(shader, pname, params);
}

void opengl_es_layer_glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %d, %p, %p)", mCmdIndex++, "glGetSynciv", sync, pname, bufSize, length, values);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSynciv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSynciv");
    }

    typedef void (*PFNGLGETSYNCIVPROC)(GLsync, GLenum, GLsizei, GLsizei*, GLint*);
    PFNGLGETSYNCIVPROC next = reinterpret_cast<PFNGLGETSYNCIVPROC>(it->second);
    return next(sync, pname, bufSize, length, values);
}

void opengl_es_layer_glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %d, %p, %p)", mCmdIndex++, "glGetSyncivAPPLE", sync, pname, bufSize, length, values);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetSyncivAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetSyncivAPPLE");
    }

    typedef void (*PFNGLGETSYNCIVAPPLEPROC)(GLsync, GLenum, GLsizei, GLsizei*, GLint*);
    PFNGLGETSYNCIVAPPLEPROC next = reinterpret_cast<PFNGLGETSYNCIVAPPLEPROC>(it->second);
    return next(sync, pname, bufSize, length, values);
}

void opengl_es_layer_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexEnvfv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexEnvfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexEnvfv");
    }

    typedef void (*PFNGLGETTEXENVFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLGETTEXENVFVPROC next = reinterpret_cast<PFNGLGETTEXENVFVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexEnviv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexEnviv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexEnviv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexEnviv");
    }

    typedef void (*PFNGLGETTEXENVIVPROC)(GLenum, GLenum, GLint*);
    PFNGLGETTEXENVIVPROC next = reinterpret_cast<PFNGLGETTEXENVIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexEnvxv(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexEnvxv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexEnvxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexEnvxv");
    }

    typedef void (*PFNGLGETTEXENVXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETTEXENVXVPROC next = reinterpret_cast<PFNGLGETTEXENVXVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexEnvxvOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexEnvxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexEnvxvOES");
    }

    typedef void (*PFNGLGETTEXENVXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETTEXENVXVOESPROC next = reinterpret_cast<PFNGLGETTEXENVXVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexGenfvOES", coord, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexGenfvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexGenfvOES");
    }

    typedef void (*PFNGLGETTEXGENFVOESPROC)(GLenum, GLenum, GLfloat*);
    PFNGLGETTEXGENFVOESPROC next = reinterpret_cast<PFNGLGETTEXGENFVOESPROC>(it->second);
    return next(coord, pname, params);
}

void opengl_es_layer_glGetTexGenivOES(GLenum coord, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexGenivOES", coord, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexGenivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexGenivOES");
    }

    typedef void (*PFNGLGETTEXGENIVOESPROC)(GLenum, GLenum, GLint*);
    PFNGLGETTEXGENIVOESPROC next = reinterpret_cast<PFNGLGETTEXGENIVOESPROC>(it->second);
    return next(coord, pname, params);
}

void opengl_es_layer_glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexGenxvOES", coord, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexGenxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexGenxvOES");
    }

    typedef void (*PFNGLGETTEXGENXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETTEXGENXVOESPROC next = reinterpret_cast<PFNGLGETTEXGENXVOESPROC>(it->second);
    return next(coord, pname, params);
}

void opengl_es_layer_glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p)", mCmdIndex++, "glGetTexLevelParameterfv", target, level, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexLevelParameterfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexLevelParameterfv");
    }

    typedef void (*PFNGLGETTEXLEVELPARAMETERFVPROC)(GLenum, GLint, GLenum, GLfloat*);
    PFNGLGETTEXLEVELPARAMETERFVPROC next = reinterpret_cast<PFNGLGETTEXLEVELPARAMETERFVPROC>(it->second);
    return next(target, level, pname, params);
}

void opengl_es_layer_glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p)", mCmdIndex++, "glGetTexLevelParameteriv", target, level, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexLevelParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexLevelParameteriv");
    }

    typedef void (*PFNGLGETTEXLEVELPARAMETERIVPROC)(GLenum, GLint, GLenum, GLint*);
    PFNGLGETTEXLEVELPARAMETERIVPROC next = reinterpret_cast<PFNGLGETTEXLEVELPARAMETERIVPROC>(it->second);
    return next(target, level, pname, params);
}

void opengl_es_layer_glGetTexParameterIiv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterIiv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterIiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterIiv");
    }

    typedef void (*PFNGLGETTEXPARAMETERIIVPROC)(GLenum, GLenum, GLint*);
    PFNGLGETTEXPARAMETERIIVPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERIIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterIivEXT", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterIivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterIivEXT");
    }

    typedef void (*PFNGLGETTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLint*);
    PFNGLGETTEXPARAMETERIIVEXTPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERIIVEXTPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterIivOES(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterIivOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterIivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterIivOES");
    }

    typedef void (*PFNGLGETTEXPARAMETERIIVOESPROC)(GLenum, GLenum, GLint*);
    PFNGLGETTEXPARAMETERIIVOESPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERIIVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterIuiv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterIuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterIuiv");
    }

    typedef void (*PFNGLGETTEXPARAMETERIUIVPROC)(GLenum, GLenum, GLuint*);
    PFNGLGETTEXPARAMETERIUIVPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERIUIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterIuivEXT", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterIuivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterIuivEXT");
    }

    typedef void (*PFNGLGETTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLuint*);
    PFNGLGETTEXPARAMETERIUIVEXTPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERIUIVEXTPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterIuivOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterIuivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterIuivOES");
    }

    typedef void (*PFNGLGETTEXPARAMETERIUIVOESPROC)(GLenum, GLenum, GLuint*);
    PFNGLGETTEXPARAMETERIUIVOESPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERIUIVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterfv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterfv");
    }

    typedef void (*PFNGLGETTEXPARAMETERFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLGETTEXPARAMETERFVPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERFVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameteriv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameteriv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameteriv");
    }

    typedef void (*PFNGLGETTEXPARAMETERIVPROC)(GLenum, GLenum, GLint*);
    PFNGLGETTEXPARAMETERIVPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterxv(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterxv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterxv");
    }

    typedef void (*PFNGLGETTEXPARAMETERXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETTEXPARAMETERXVPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERXVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetTexParameterxvOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTexParameterxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTexParameterxvOES");
    }

    typedef void (*PFNGLGETTEXPARAMETERXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLGETTEXPARAMETERXVOESPROC next = reinterpret_cast<PFNGLGETTEXPARAMETERXVOESPROC>(it->second);
    return next(target, pname, params);
}

GLuint64 opengl_es_layer_glGetTextureHandleIMG(GLuint texture) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glGetTextureHandleIMG", texture);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTextureHandleIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTextureHandleIMG");
    }

    typedef GLuint64 (*PFNGLGETTEXTUREHANDLEIMGPROC)(GLuint);
    PFNGLGETTEXTUREHANDLEIMGPROC next = reinterpret_cast<PFNGLGETTEXTUREHANDLEIMGPROC>(it->second);
    return next(texture);
}

GLuint64 opengl_es_layer_glGetTextureHandleNV(GLuint texture) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glGetTextureHandleNV", texture);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTextureHandleNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTextureHandleNV");
    }

    typedef GLuint64 (*PFNGLGETTEXTUREHANDLENVPROC)(GLuint);
    PFNGLGETTEXTUREHANDLENVPROC next = reinterpret_cast<PFNGLGETTEXTUREHANDLENVPROC>(it->second);
    return next(texture);
}

GLuint64 opengl_es_layer_glGetTextureSamplerHandleIMG(GLuint texture, GLuint sampler) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glGetTextureSamplerHandleIMG", texture, sampler);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTextureSamplerHandleIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTextureSamplerHandleIMG");
    }

    typedef GLuint64 (*PFNGLGETTEXTURESAMPLERHANDLEIMGPROC)(GLuint, GLuint);
    PFNGLGETTEXTURESAMPLERHANDLEIMGPROC next = reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLEIMGPROC>(it->second);
    return next(texture, sampler);
}

GLuint64 opengl_es_layer_glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glGetTextureSamplerHandleNV", texture, sampler);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTextureSamplerHandleNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTextureSamplerHandleNV");
    }

    typedef GLuint64 (*PFNGLGETTEXTURESAMPLERHANDLENVPROC)(GLuint, GLuint);
    PFNGLGETTEXTURESAMPLERHANDLENVPROC next = reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLENVPROC>(it->second);
    return next(texture, sampler);
}

void opengl_es_layer_glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p, %p, %p, %s)", mCmdIndex++, "glGetTransformFeedbackVarying", program, index, bufSize, length, size, type, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTransformFeedbackVarying");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTransformFeedbackVarying");
    }

    typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint, GLuint, GLsizei, GLsizei*, GLsizei*, GLenum*, GLchar*);
    PFNGLGETTRANSFORMFEEDBACKVARYINGPROC next = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGPROC>(it->second);
    return next(program, index, bufSize, length, size, type, name);
}

void opengl_es_layer_glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %s)", mCmdIndex++, "glGetTranslatedShaderSourceANGLE", shader, bufsize, length, source);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetTranslatedShaderSourceANGLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetTranslatedShaderSourceANGLE");
    }

    typedef void (*PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC)(GLuint, GLsizei, GLsizei*, GLchar*);
    PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC next = reinterpret_cast<PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC>(it->second);
    return next(shader, bufsize, length, source);
}

GLuint opengl_es_layer_glGetUniformBlockIndex(GLuint program, GLchar* uniformBlockName) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %s)", mCmdIndex++, "glGetUniformBlockIndex", program, uniformBlockName);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUniformBlockIndex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUniformBlockIndex");
    }

    typedef GLuint (*PFNGLGETUNIFORMBLOCKINDEXPROC)(GLuint, GLchar*);
    PFNGLGETUNIFORMBLOCKINDEXPROC next = reinterpret_cast<PFNGLGETUNIFORMBLOCKINDEXPROC>(it->second);
    return next(program, uniformBlockName);
}

void opengl_es_layer_glGetUniformIndices(GLuint program, GLsizei uniformCount, GLchar** uniformNames, GLuint* uniformIndices) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %s, %p)", mCmdIndex++, "glGetUniformIndices", program, uniformCount, *uniformNames, uniformIndices);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUniformIndices");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUniformIndices");
    }

    typedef void (*PFNGLGETUNIFORMINDICESPROC)(GLuint, GLsizei, GLchar**, GLuint*);
    PFNGLGETUNIFORMINDICESPROC next = reinterpret_cast<PFNGLGETUNIFORMINDICESPROC>(it->second);
    return next(program, uniformCount, uniformNames, uniformIndices);
}

GLint opengl_es_layer_glGetUniformLocation(GLuint program, GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %s)", mCmdIndex++, "glGetUniformLocation", program, name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUniformLocation");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUniformLocation");
    }

    typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC)(GLuint, GLchar*);
    PFNGLGETUNIFORMLOCATIONPROC next = reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(it->second);
    return next(program, name);
}

void opengl_es_layer_glGetUniformfv(GLuint program, GLint location, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glGetUniformfv", program, location, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUniformfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUniformfv");
    }

    typedef void (*PFNGLGETUNIFORMFVPROC)(GLuint, GLint, GLfloat*);
    PFNGLGETUNIFORMFVPROC next = reinterpret_cast<PFNGLGETUNIFORMFVPROC>(it->second);
    return next(program, location, params);
}

void opengl_es_layer_glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glGetUniformi64vNV", program, location, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUniformi64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUniformi64vNV");
    }

    typedef void (*PFNGLGETUNIFORMI64VNVPROC)(GLuint, GLint, GLint64EXT*);
    PFNGLGETUNIFORMI64VNVPROC next = reinterpret_cast<PFNGLGETUNIFORMI64VNVPROC>(it->second);
    return next(program, location, params);
}

void opengl_es_layer_glGetUniformiv(GLuint program, GLint location, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glGetUniformiv", program, location, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUniformiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUniformiv");
    }

    typedef void (*PFNGLGETUNIFORMIVPROC)(GLuint, GLint, GLint*);
    PFNGLGETUNIFORMIVPROC next = reinterpret_cast<PFNGLGETUNIFORMIVPROC>(it->second);
    return next(program, location, params);
}

void opengl_es_layer_glGetUniformuiv(GLuint program, GLint location, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glGetUniformuiv", program, location, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUniformuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUniformuiv");
    }

    typedef void (*PFNGLGETUNIFORMUIVPROC)(GLuint, GLint, GLuint*);
    PFNGLGETUNIFORMUIVPROC next = reinterpret_cast<PFNGLGETUNIFORMUIVPROC>(it->second);
    return next(program, location, params);
}

void opengl_es_layer_glGetUnsignedBytei_vEXT(GLenum target, GLuint index, GLubyte* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetUnsignedBytei_vEXT", target, index, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUnsignedBytei_vEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUnsignedBytei_vEXT");
    }

    typedef void (*PFNGLGETUNSIGNEDBYTEI_VEXTPROC)(GLenum, GLuint, GLubyte*);
    PFNGLGETUNSIGNEDBYTEI_VEXTPROC next = reinterpret_cast<PFNGLGETUNSIGNEDBYTEI_VEXTPROC>(it->second);
    return next(target, index, data);
}

void opengl_es_layer_glGetUnsignedBytevEXT(GLenum pname, GLubyte* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glGetUnsignedBytevEXT", pname, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetUnsignedBytevEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetUnsignedBytevEXT");
    }

    typedef void (*PFNGLGETUNSIGNEDBYTEVEXTPROC)(GLenum, GLubyte*);
    PFNGLGETUNSIGNEDBYTEVEXTPROC next = reinterpret_cast<PFNGLGETUNSIGNEDBYTEVEXTPROC>(it->second);
    return next(pname, data);
}

void opengl_es_layer_glGetVertexAttribIiv(GLuint index, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetVertexAttribIiv", index, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetVertexAttribIiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetVertexAttribIiv");
    }

    typedef void (*PFNGLGETVERTEXATTRIBIIVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETVERTEXATTRIBIIVPROC next = reinterpret_cast<PFNGLGETVERTEXATTRIBIIVPROC>(it->second);
    return next(index, pname, params);
}

void opengl_es_layer_glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetVertexAttribIuiv", index, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetVertexAttribIuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetVertexAttribIuiv");
    }

    typedef void (*PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint, GLenum, GLuint*);
    PFNGLGETVERTEXATTRIBIUIVPROC next = reinterpret_cast<PFNGLGETVERTEXATTRIBIUIVPROC>(it->second);
    return next(index, pname, params);
}

void opengl_es_layer_glGetVertexAttribPointerv(GLuint index, GLenum pname, void** pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetVertexAttribPointerv", index, pname, *pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetVertexAttribPointerv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetVertexAttribPointerv");
    }

    typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint, GLenum, void**);
    PFNGLGETVERTEXATTRIBPOINTERVPROC next = reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC>(it->second);
    return next(index, pname, pointer);
}

void opengl_es_layer_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetVertexAttribfv", index, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetVertexAttribfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetVertexAttribfv");
    }

    typedef void (*PFNGLGETVERTEXATTRIBFVPROC)(GLuint, GLenum, GLfloat*);
    PFNGLGETVERTEXATTRIBFVPROC next = reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC>(it->second);
    return next(index, pname, params);
}

void opengl_es_layer_glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glGetVertexAttribiv", index, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetVertexAttribiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetVertexAttribiv");
    }

    typedef void (*PFNGLGETVERTEXATTRIBIVPROC)(GLuint, GLenum, GLint*);
    PFNGLGETVERTEXATTRIBIVPROC next = reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC>(it->second);
    return next(index, pname, params);
}

GLVULKANPROCNV opengl_es_layer_glGetVkProcAddrNV(GLchar* name) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%s)", mCmdIndex++, "glGetVkProcAddrNV", name);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetVkProcAddrNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetVkProcAddrNV");
    }

    typedef GLVULKANPROCNV (*PFNGLGETVKPROCADDRNVPROC)(GLchar*);
    PFNGLGETVKPROCADDRNVPROC next = reinterpret_cast<PFNGLGETVKPROCADDRNVPROC>(it->second);
    return next(name);
}

void opengl_es_layer_glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformfv", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformfv");
    }

    typedef void (*PFNGLGETNUNIFORMFVPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLGETNUNIFORMFVPROC next = reinterpret_cast<PFNGLGETNUNIFORMFVPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformfvEXT", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformfvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformfvEXT");
    }

    typedef void (*PFNGLGETNUNIFORMFVEXTPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLGETNUNIFORMFVEXTPROC next = reinterpret_cast<PFNGLGETNUNIFORMFVEXTPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glGetnUniformfvKHR(GLuint program, GLint location, GLsizei bufSize, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformfvKHR", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformfvKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformfvKHR");
    }

    typedef void (*PFNGLGETNUNIFORMFVKHRPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLGETNUNIFORMFVKHRPROC next = reinterpret_cast<PFNGLGETNUNIFORMFVKHRPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformiv", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformiv");
    }

    typedef void (*PFNGLGETNUNIFORMIVPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLGETNUNIFORMIVPROC next = reinterpret_cast<PFNGLGETNUNIFORMIVPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformivEXT", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformivEXT");
    }

    typedef void (*PFNGLGETNUNIFORMIVEXTPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLGETNUNIFORMIVEXTPROC next = reinterpret_cast<PFNGLGETNUNIFORMIVEXTPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glGetnUniformivKHR(GLuint program, GLint location, GLsizei bufSize, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformivKHR", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformivKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformivKHR");
    }

    typedef void (*PFNGLGETNUNIFORMIVKHRPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLGETNUNIFORMIVKHRPROC next = reinterpret_cast<PFNGLGETNUNIFORMIVKHRPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformuiv", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformuiv");
    }

    typedef void (*PFNGLGETNUNIFORMUIVPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLGETNUNIFORMUIVPROC next = reinterpret_cast<PFNGLGETNUNIFORMUIVPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glGetnUniformuivKHR(GLuint program, GLint location, GLsizei bufSize, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glGetnUniformuivKHR", program, location, bufSize, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glGetnUniformuivKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glGetnUniformuivKHR");
    }

    typedef void (*PFNGLGETNUNIFORMUIVKHRPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLGETNUNIFORMUIVKHRPROC next = reinterpret_cast<PFNGLGETNUNIFORMUIVKHRPROC>(it->second);
    return next(program, location, bufSize, params);
}

void opengl_es_layer_glHint(GLenum target, GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glHint", target, mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glHint");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glHint");
    }

    typedef void (*PFNGLHINTPROC)(GLenum, GLenum);
    PFNGLHINTPROC next = reinterpret_cast<PFNGLHINTPROC>(it->second);
    return next(target, mode);
}

void opengl_es_layer_glImportMemoryFdEXT(GLuint memory, GLuint64 size, GLenum handleType, GLint fd) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %" PRIu64 ", %u, %d)", mCmdIndex++, "glImportMemoryFdEXT", memory, size, handleType, fd);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glImportMemoryFdEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glImportMemoryFdEXT");
    }

    typedef void (*PFNGLIMPORTMEMORYFDEXTPROC)(GLuint, GLuint64, GLenum, GLint);
    PFNGLIMPORTMEMORYFDEXTPROC next = reinterpret_cast<PFNGLIMPORTMEMORYFDEXTPROC>(it->second);
    return next(memory, size, handleType, fd);
}

void opengl_es_layer_glImportSemaphoreFdEXT(GLuint semaphore, GLenum handleType, GLint fd) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glImportSemaphoreFdEXT", semaphore, handleType, fd);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glImportSemaphoreFdEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glImportSemaphoreFdEXT");
    }

    typedef void (*PFNGLIMPORTSEMAPHOREFDEXTPROC)(GLuint, GLenum, GLint);
    PFNGLIMPORTSEMAPHOREFDEXTPROC next = reinterpret_cast<PFNGLIMPORTSEMAPHOREFDEXTPROC>(it->second);
    return next(semaphore, handleType, fd);
}

void opengl_es_layer_glInsertEventMarkerEXT(GLsizei length, GLchar* marker) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %s)", mCmdIndex++, "glInsertEventMarkerEXT", length, marker);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glInsertEventMarkerEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glInsertEventMarkerEXT");
    }

    typedef void (*PFNGLINSERTEVENTMARKEREXTPROC)(GLsizei, GLchar*);
    PFNGLINSERTEVENTMARKEREXTPROC next = reinterpret_cast<PFNGLINSERTEVENTMARKEREXTPROC>(it->second);
    return next(length, marker);
}

void opengl_es_layer_glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %f)", mCmdIndex++, "glInterpolatePathsNV", resultPath, pathA, pathB, weight);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glInterpolatePathsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glInterpolatePathsNV");
    }

    typedef void (*PFNGLINTERPOLATEPATHSNVPROC)(GLuint, GLuint, GLuint, GLfloat);
    PFNGLINTERPOLATEPATHSNVPROC next = reinterpret_cast<PFNGLINTERPOLATEPATHSNVPROC>(it->second);
    return next(resultPath, pathA, pathB, weight);
}

void opengl_es_layer_glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, GLenum* attachments) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glInvalidateFramebuffer", target, numAttachments, attachments);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glInvalidateFramebuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glInvalidateFramebuffer");
    }

    typedef void (*PFNGLINVALIDATEFRAMEBUFFERPROC)(GLenum, GLsizei, GLenum*);
    PFNGLINVALIDATEFRAMEBUFFERPROC next = reinterpret_cast<PFNGLINVALIDATEFRAMEBUFFERPROC>(it->second);
    return next(target, numAttachments, attachments);
}

void opengl_es_layer_glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %d, %d, %d, %d)", mCmdIndex++, "glInvalidateSubFramebuffer", target, numAttachments, attachments, x, y, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glInvalidateSubFramebuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glInvalidateSubFramebuffer");
    }

    typedef void (*PFNGLINVALIDATESUBFRAMEBUFFERPROC)(GLenum, GLsizei, GLenum*, GLint, GLint, GLsizei, GLsizei);
    PFNGLINVALIDATESUBFRAMEBUFFERPROC next = reinterpret_cast<PFNGLINVALIDATESUBFRAMEBUFFERPROC>(it->second);
    return next(target, numAttachments, attachments, x, y, width, height);
}

GLboolean opengl_es_layer_glIsBuffer(GLuint buffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsBuffer", buffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsBuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsBuffer");
    }

    typedef GLboolean (*PFNGLISBUFFERPROC)(GLuint);
    PFNGLISBUFFERPROC next = reinterpret_cast<PFNGLISBUFFERPROC>(it->second);
    return next(buffer);
}

GLboolean opengl_es_layer_glIsEnabled(GLenum cap) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsEnabled", cap);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsEnabled");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsEnabled");
    }

    typedef GLboolean (*PFNGLISENABLEDPROC)(GLenum);
    PFNGLISENABLEDPROC next = reinterpret_cast<PFNGLISENABLEDPROC>(it->second);
    return next(cap);
}

GLboolean opengl_es_layer_glIsEnabledi(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glIsEnabledi", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsEnabledi");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsEnabledi");
    }

    typedef GLboolean (*PFNGLISENABLEDIPROC)(GLenum, GLuint);
    PFNGLISENABLEDIPROC next = reinterpret_cast<PFNGLISENABLEDIPROC>(it->second);
    return next(target, index);
}

GLboolean opengl_es_layer_glIsEnablediEXT(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glIsEnablediEXT", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsEnablediEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsEnablediEXT");
    }

    typedef GLboolean (*PFNGLISENABLEDIEXTPROC)(GLenum, GLuint);
    PFNGLISENABLEDIEXTPROC next = reinterpret_cast<PFNGLISENABLEDIEXTPROC>(it->second);
    return next(target, index);
}

GLboolean opengl_es_layer_glIsEnablediNV(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glIsEnablediNV", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsEnablediNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsEnablediNV");
    }

    typedef GLboolean (*PFNGLISENABLEDINVPROC)(GLenum, GLuint);
    PFNGLISENABLEDINVPROC next = reinterpret_cast<PFNGLISENABLEDINVPROC>(it->second);
    return next(target, index);
}

GLboolean opengl_es_layer_glIsEnablediOES(GLenum target, GLuint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glIsEnablediOES", target, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsEnablediOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsEnablediOES");
    }

    typedef GLboolean (*PFNGLISENABLEDIOESPROC)(GLenum, GLuint);
    PFNGLISENABLEDIOESPROC next = reinterpret_cast<PFNGLISENABLEDIOESPROC>(it->second);
    return next(target, index);
}

GLboolean opengl_es_layer_glIsFenceNV(GLuint fence) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsFenceNV", fence);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsFenceNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsFenceNV");
    }

    typedef GLboolean (*PFNGLISFENCENVPROC)(GLuint);
    PFNGLISFENCENVPROC next = reinterpret_cast<PFNGLISFENCENVPROC>(it->second);
    return next(fence);
}

GLboolean opengl_es_layer_glIsFramebuffer(GLuint framebuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsFramebuffer", framebuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsFramebuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsFramebuffer");
    }

    typedef GLboolean (*PFNGLISFRAMEBUFFERPROC)(GLuint);
    PFNGLISFRAMEBUFFERPROC next = reinterpret_cast<PFNGLISFRAMEBUFFERPROC>(it->second);
    return next(framebuffer);
}

GLboolean opengl_es_layer_glIsFramebufferOES(GLuint framebuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsFramebufferOES", framebuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsFramebufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsFramebufferOES");
    }

    typedef GLboolean (*PFNGLISFRAMEBUFFEROESPROC)(GLuint);
    PFNGLISFRAMEBUFFEROESPROC next = reinterpret_cast<PFNGLISFRAMEBUFFEROESPROC>(it->second);
    return next(framebuffer);
}

GLboolean opengl_es_layer_glIsImageHandleResidentNV(GLuint64 handle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glIsImageHandleResidentNV", handle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsImageHandleResidentNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsImageHandleResidentNV");
    }

    typedef GLboolean (*PFNGLISIMAGEHANDLERESIDENTNVPROC)(GLuint64);
    PFNGLISIMAGEHANDLERESIDENTNVPROC next = reinterpret_cast<PFNGLISIMAGEHANDLERESIDENTNVPROC>(it->second);
    return next(handle);
}

GLboolean opengl_es_layer_glIsMemoryObjectEXT(GLuint memoryObject) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsMemoryObjectEXT", memoryObject);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsMemoryObjectEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsMemoryObjectEXT");
    }

    typedef GLboolean (*PFNGLISMEMORYOBJECTEXTPROC)(GLuint);
    PFNGLISMEMORYOBJECTEXTPROC next = reinterpret_cast<PFNGLISMEMORYOBJECTEXTPROC>(it->second);
    return next(memoryObject);
}

GLboolean opengl_es_layer_glIsPathNV(GLuint path) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsPathNV", path);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsPathNV");
    }

    typedef GLboolean (*PFNGLISPATHNVPROC)(GLuint);
    PFNGLISPATHNVPROC next = reinterpret_cast<PFNGLISPATHNVPROC>(it->second);
    return next(path);
}

GLboolean opengl_es_layer_glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f, %f)", mCmdIndex++, "glIsPointInFillPathNV", path, mask, x, y);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsPointInFillPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsPointInFillPathNV");
    }

    typedef GLboolean (*PFNGLISPOINTINFILLPATHNVPROC)(GLuint, GLuint, GLfloat, GLfloat);
    PFNGLISPOINTINFILLPATHNVPROC next = reinterpret_cast<PFNGLISPOINTINFILLPATHNVPROC>(it->second);
    return next(path, mask, x, y);
}

GLboolean opengl_es_layer_glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f)", mCmdIndex++, "glIsPointInStrokePathNV", path, x, y);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsPointInStrokePathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsPointInStrokePathNV");
    }

    typedef GLboolean (*PFNGLISPOINTINSTROKEPATHNVPROC)(GLuint, GLfloat, GLfloat);
    PFNGLISPOINTINSTROKEPATHNVPROC next = reinterpret_cast<PFNGLISPOINTINSTROKEPATHNVPROC>(it->second);
    return next(path, x, y);
}

GLboolean opengl_es_layer_glIsProgram(GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsProgram", program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsProgram");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsProgram");
    }

    typedef GLboolean (*PFNGLISPROGRAMPROC)(GLuint);
    PFNGLISPROGRAMPROC next = reinterpret_cast<PFNGLISPROGRAMPROC>(it->second);
    return next(program);
}

GLboolean opengl_es_layer_glIsProgramPipeline(GLuint pipeline) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsProgramPipeline", pipeline);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsProgramPipeline");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsProgramPipeline");
    }

    typedef GLboolean (*PFNGLISPROGRAMPIPELINEPROC)(GLuint);
    PFNGLISPROGRAMPIPELINEPROC next = reinterpret_cast<PFNGLISPROGRAMPIPELINEPROC>(it->second);
    return next(pipeline);
}

GLboolean opengl_es_layer_glIsProgramPipelineEXT(GLuint pipeline) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsProgramPipelineEXT", pipeline);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsProgramPipelineEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsProgramPipelineEXT");
    }

    typedef GLboolean (*PFNGLISPROGRAMPIPELINEEXTPROC)(GLuint);
    PFNGLISPROGRAMPIPELINEEXTPROC next = reinterpret_cast<PFNGLISPROGRAMPIPELINEEXTPROC>(it->second);
    return next(pipeline);
}

GLboolean opengl_es_layer_glIsQuery(GLuint id) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsQuery", id);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsQuery");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsQuery");
    }

    typedef GLboolean (*PFNGLISQUERYPROC)(GLuint);
    PFNGLISQUERYPROC next = reinterpret_cast<PFNGLISQUERYPROC>(it->second);
    return next(id);
}

GLboolean opengl_es_layer_glIsQueryEXT(GLuint id) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsQueryEXT", id);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsQueryEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsQueryEXT");
    }

    typedef GLboolean (*PFNGLISQUERYEXTPROC)(GLuint);
    PFNGLISQUERYEXTPROC next = reinterpret_cast<PFNGLISQUERYEXTPROC>(it->second);
    return next(id);
}

GLboolean opengl_es_layer_glIsRenderbuffer(GLuint renderbuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsRenderbuffer", renderbuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsRenderbuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsRenderbuffer");
    }

    typedef GLboolean (*PFNGLISRENDERBUFFERPROC)(GLuint);
    PFNGLISRENDERBUFFERPROC next = reinterpret_cast<PFNGLISRENDERBUFFERPROC>(it->second);
    return next(renderbuffer);
}

GLboolean opengl_es_layer_glIsRenderbufferOES(GLuint renderbuffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsRenderbufferOES", renderbuffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsRenderbufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsRenderbufferOES");
    }

    typedef GLboolean (*PFNGLISRENDERBUFFEROESPROC)(GLuint);
    PFNGLISRENDERBUFFEROESPROC next = reinterpret_cast<PFNGLISRENDERBUFFEROESPROC>(it->second);
    return next(renderbuffer);
}

GLboolean opengl_es_layer_glIsSampler(GLuint sampler) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsSampler", sampler);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsSampler");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsSampler");
    }

    typedef GLboolean (*PFNGLISSAMPLERPROC)(GLuint);
    PFNGLISSAMPLERPROC next = reinterpret_cast<PFNGLISSAMPLERPROC>(it->second);
    return next(sampler);
}

GLboolean opengl_es_layer_glIsSemaphoreEXT(GLuint semaphore) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsSemaphoreEXT", semaphore);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsSemaphoreEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsSemaphoreEXT");
    }

    typedef GLboolean (*PFNGLISSEMAPHOREEXTPROC)(GLuint);
    PFNGLISSEMAPHOREEXTPROC next = reinterpret_cast<PFNGLISSEMAPHOREEXTPROC>(it->second);
    return next(semaphore);
}

GLboolean opengl_es_layer_glIsShader(GLuint shader) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsShader", shader);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsShader");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsShader");
    }

    typedef GLboolean (*PFNGLISSHADERPROC)(GLuint);
    PFNGLISSHADERPROC next = reinterpret_cast<PFNGLISSHADERPROC>(it->second);
    return next(shader);
}

GLboolean opengl_es_layer_glIsSync(GLsync sync) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glIsSync", sync);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsSync");
    }

    typedef GLboolean (*PFNGLISSYNCPROC)(GLsync);
    PFNGLISSYNCPROC next = reinterpret_cast<PFNGLISSYNCPROC>(it->second);
    return next(sync);
}

GLboolean opengl_es_layer_glIsSyncAPPLE(GLsync sync) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glIsSyncAPPLE", sync);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsSyncAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsSyncAPPLE");
    }

    typedef GLboolean (*PFNGLISSYNCAPPLEPROC)(GLsync);
    PFNGLISSYNCAPPLEPROC next = reinterpret_cast<PFNGLISSYNCAPPLEPROC>(it->second);
    return next(sync);
}

GLboolean opengl_es_layer_glIsTexture(GLuint texture) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsTexture", texture);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsTexture");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsTexture");
    }

    typedef GLboolean (*PFNGLISTEXTUREPROC)(GLuint);
    PFNGLISTEXTUREPROC next = reinterpret_cast<PFNGLISTEXTUREPROC>(it->second);
    return next(texture);
}

GLboolean opengl_es_layer_glIsTextureHandleResidentNV(GLuint64 handle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glIsTextureHandleResidentNV", handle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsTextureHandleResidentNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsTextureHandleResidentNV");
    }

    typedef GLboolean (*PFNGLISTEXTUREHANDLERESIDENTNVPROC)(GLuint64);
    PFNGLISTEXTUREHANDLERESIDENTNVPROC next = reinterpret_cast<PFNGLISTEXTUREHANDLERESIDENTNVPROC>(it->second);
    return next(handle);
}

GLboolean opengl_es_layer_glIsTransformFeedback(GLuint id) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsTransformFeedback", id);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsTransformFeedback");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsTransformFeedback");
    }

    typedef GLboolean (*PFNGLISTRANSFORMFEEDBACKPROC)(GLuint);
    PFNGLISTRANSFORMFEEDBACKPROC next = reinterpret_cast<PFNGLISTRANSFORMFEEDBACKPROC>(it->second);
    return next(id);
}

GLboolean opengl_es_layer_glIsVertexArray(GLuint array) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsVertexArray", array);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsVertexArray");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsVertexArray");
    }

    typedef GLboolean (*PFNGLISVERTEXARRAYPROC)(GLuint);
    PFNGLISVERTEXARRAYPROC next = reinterpret_cast<PFNGLISVERTEXARRAYPROC>(it->second);
    return next(array);
}

GLboolean opengl_es_layer_glIsVertexArrayOES(GLuint array) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glIsVertexArrayOES", array);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glIsVertexArrayOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glIsVertexArrayOES");
    }

    typedef GLboolean (*PFNGLISVERTEXARRAYOESPROC)(GLuint);
    PFNGLISVERTEXARRAYOESPROC next = reinterpret_cast<PFNGLISVERTEXARRAYOESPROC>(it->second);
    return next(array);
}

void opengl_es_layer_glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %s)", mCmdIndex++, "glLabelObjectEXT", type, object, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLabelObjectEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLabelObjectEXT");
    }

    typedef void (*PFNGLLABELOBJECTEXTPROC)(GLenum, GLuint, GLsizei, GLchar*);
    PFNGLLABELOBJECTEXTPROC next = reinterpret_cast<PFNGLLABELOBJECTEXTPROC>(it->second);
    return next(type, object, length, label);
}

void opengl_es_layer_glLightModelf(GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f)", mCmdIndex++, "glLightModelf", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightModelf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightModelf");
    }

    typedef void (*PFNGLLIGHTMODELFPROC)(GLenum, GLfloat);
    PFNGLLIGHTMODELFPROC next = reinterpret_cast<PFNGLLIGHTMODELFPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glLightModelfv(GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glLightModelfv", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightModelfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightModelfv");
    }

    typedef void (*PFNGLLIGHTMODELFVPROC)(GLenum, GLfloat*);
    PFNGLLIGHTMODELFVPROC next = reinterpret_cast<PFNGLLIGHTMODELFVPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glLightModelx(GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glLightModelx", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightModelx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightModelx");
    }

    typedef void (*PFNGLLIGHTMODELXPROC)(GLenum, GLfixed);
    PFNGLLIGHTMODELXPROC next = reinterpret_cast<PFNGLLIGHTMODELXPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glLightModelxOES(GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glLightModelxOES", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightModelxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightModelxOES");
    }

    typedef void (*PFNGLLIGHTMODELXOESPROC)(GLenum, GLfixed);
    PFNGLLIGHTMODELXOESPROC next = reinterpret_cast<PFNGLLIGHTMODELXOESPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glLightModelxv(GLenum pname, GLfixed* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glLightModelxv", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightModelxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightModelxv");
    }

    typedef void (*PFNGLLIGHTMODELXVPROC)(GLenum, GLfixed*);
    PFNGLLIGHTMODELXVPROC next = reinterpret_cast<PFNGLLIGHTMODELXVPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glLightModelxvOES(GLenum pname, GLfixed* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glLightModelxvOES", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightModelxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightModelxvOES");
    }

    typedef void (*PFNGLLIGHTMODELXVOESPROC)(GLenum, GLfixed*);
    PFNGLLIGHTMODELXVOESPROC next = reinterpret_cast<PFNGLLIGHTMODELXVOESPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glLightf(GLenum light, GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f)", mCmdIndex++, "glLightf", light, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightf");
    }

    typedef void (*PFNGLLIGHTFPROC)(GLenum, GLenum, GLfloat);
    PFNGLLIGHTFPROC next = reinterpret_cast<PFNGLLIGHTFPROC>(it->second);
    return next(light, pname, param);
}

void opengl_es_layer_glLightfv(GLenum light, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glLightfv", light, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightfv");
    }

    typedef void (*PFNGLLIGHTFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLLIGHTFVPROC next = reinterpret_cast<PFNGLLIGHTFVPROC>(it->second);
    return next(light, pname, params);
}

void opengl_es_layer_glLightx(GLenum light, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glLightx", light, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightx");
    }

    typedef void (*PFNGLLIGHTXPROC)(GLenum, GLenum, GLfixed);
    PFNGLLIGHTXPROC next = reinterpret_cast<PFNGLLIGHTXPROC>(it->second);
    return next(light, pname, param);
}

void opengl_es_layer_glLightxOES(GLenum light, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glLightxOES", light, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightxOES");
    }

    typedef void (*PFNGLLIGHTXOESPROC)(GLenum, GLenum, GLfixed);
    PFNGLLIGHTXOESPROC next = reinterpret_cast<PFNGLLIGHTXOESPROC>(it->second);
    return next(light, pname, param);
}

void opengl_es_layer_glLightxv(GLenum light, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glLightxv", light, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightxv");
    }

    typedef void (*PFNGLLIGHTXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLLIGHTXVPROC next = reinterpret_cast<PFNGLLIGHTXVPROC>(it->second);
    return next(light, pname, params);
}

void opengl_es_layer_glLightxvOES(GLenum light, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glLightxvOES", light, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLightxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLightxvOES");
    }

    typedef void (*PFNGLLIGHTXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLLIGHTXVOESPROC next = reinterpret_cast<PFNGLLIGHTXVOESPROC>(it->second);
    return next(light, pname, params);
}

void opengl_es_layer_glLineWidth(GLfloat width) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f)", mCmdIndex++, "glLineWidth", width);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLineWidth");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLineWidth");
    }

    typedef void (*PFNGLLINEWIDTHPROC)(GLfloat);
    PFNGLLINEWIDTHPROC next = reinterpret_cast<PFNGLLINEWIDTHPROC>(it->second);
    return next(width);
}

void opengl_es_layer_glLineWidthx(GLfixed width) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glLineWidthx", width);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLineWidthx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLineWidthx");
    }

    typedef void (*PFNGLLINEWIDTHXPROC)(GLfixed);
    PFNGLLINEWIDTHXPROC next = reinterpret_cast<PFNGLLINEWIDTHXPROC>(it->second);
    return next(width);
}

void opengl_es_layer_glLineWidthxOES(GLfixed width) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glLineWidthxOES", width);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLineWidthxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLineWidthxOES");
    }

    typedef void (*PFNGLLINEWIDTHXOESPROC)(GLfixed);
    PFNGLLINEWIDTHXOESPROC next = reinterpret_cast<PFNGLLINEWIDTHXOESPROC>(it->second);
    return next(width);
}

void opengl_es_layer_glLinkProgram(GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glLinkProgram", program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLinkProgram");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLinkProgram");
    }

    typedef void (*PFNGLLINKPROGRAMPROC)(GLuint);
    PFNGLLINKPROGRAMPROC next = reinterpret_cast<PFNGLLINKPROGRAMPROC>(it->second);
    return next(program);
}

void opengl_es_layer_glLoadIdentity(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glLoadIdentity");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLoadIdentity");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLoadIdentity");
    }

    typedef void (*PFNGLLOADIDENTITYPROC)(void);
    PFNGLLOADIDENTITYPROC next = reinterpret_cast<PFNGLLOADIDENTITYPROC>(it->second);
    return next();
}

void opengl_es_layer_glLoadMatrixf(GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glLoadMatrixf", m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLoadMatrixf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLoadMatrixf");
    }

    typedef void (*PFNGLLOADMATRIXFPROC)(GLfloat*);
    PFNGLLOADMATRIXFPROC next = reinterpret_cast<PFNGLLOADMATRIXFPROC>(it->second);
    return next(m);
}

void opengl_es_layer_glLoadMatrixx(GLfixed* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glLoadMatrixx", m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLoadMatrixx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLoadMatrixx");
    }

    typedef void (*PFNGLLOADMATRIXXPROC)(GLfixed*);
    PFNGLLOADMATRIXXPROC next = reinterpret_cast<PFNGLLOADMATRIXXPROC>(it->second);
    return next(m);
}

void opengl_es_layer_glLoadMatrixxOES(GLfixed* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glLoadMatrixxOES", m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLoadMatrixxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLoadMatrixxOES");
    }

    typedef void (*PFNGLLOADMATRIXXOESPROC)(GLfixed*);
    PFNGLLOADMATRIXXOESPROC next = reinterpret_cast<PFNGLLOADMATRIXXOESPROC>(it->second);
    return next(m);
}

void opengl_es_layer_glLoadPaletteFromModelViewMatrixOES(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glLoadPaletteFromModelViewMatrixOES");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLoadPaletteFromModelViewMatrixOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLoadPaletteFromModelViewMatrixOES");
    }

    typedef void (*PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC)(void);
    PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC next = reinterpret_cast<PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC>(it->second);
    return next();
}

void opengl_es_layer_glLogicOp(GLenum opcode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glLogicOp", opcode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glLogicOp");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glLogicOp");
    }

    typedef void (*PFNGLLOGICOPPROC)(GLenum);
    PFNGLLOGICOPPROC next = reinterpret_cast<PFNGLLOGICOPPROC>(it->second);
    return next(opcode);
}

void opengl_es_layer_glMakeImageHandleNonResidentNV(GLuint64 handle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glMakeImageHandleNonResidentNV", handle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMakeImageHandleNonResidentNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMakeImageHandleNonResidentNV");
    }

    typedef void (*PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC)(GLuint64);
    PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC next = reinterpret_cast<PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC>(it->second);
    return next(handle);
}

void opengl_es_layer_glMakeImageHandleResidentNV(GLuint64 handle, GLenum access) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ", %u)", mCmdIndex++, "glMakeImageHandleResidentNV", handle, access);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMakeImageHandleResidentNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMakeImageHandleResidentNV");
    }

    typedef void (*PFNGLMAKEIMAGEHANDLERESIDENTNVPROC)(GLuint64, GLenum);
    PFNGLMAKEIMAGEHANDLERESIDENTNVPROC next = reinterpret_cast<PFNGLMAKEIMAGEHANDLERESIDENTNVPROC>(it->second);
    return next(handle, access);
}

void opengl_es_layer_glMakeTextureHandleNonResidentNV(GLuint64 handle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glMakeTextureHandleNonResidentNV", handle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMakeTextureHandleNonResidentNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMakeTextureHandleNonResidentNV");
    }

    typedef void (*PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC)(GLuint64);
    PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC next = reinterpret_cast<PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC>(it->second);
    return next(handle);
}

void opengl_es_layer_glMakeTextureHandleResidentNV(GLuint64 handle) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glMakeTextureHandleResidentNV", handle);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMakeTextureHandleResidentNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMakeTextureHandleResidentNV");
    }

    typedef void (*PFNGLMAKETEXTUREHANDLERESIDENTNVPROC)(GLuint64);
    PFNGLMAKETEXTUREHANDLERESIDENTNVPROC next = reinterpret_cast<PFNGLMAKETEXTUREHANDLERESIDENTNVPROC>(it->second);
    return next(handle);
}

void * opengl_es_layer_glMapBufferOES(GLenum target, GLenum access) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glMapBufferOES", target, access);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMapBufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMapBufferOES");
    }

    typedef void * (*PFNGLMAPBUFFEROESPROC)(GLenum, GLenum);
    PFNGLMAPBUFFEROESPROC next = reinterpret_cast<PFNGLMAPBUFFEROESPROC>(it->second);
    return next(target, access);
}

void * opengl_es_layer_glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %ld, %u)", mCmdIndex++, "glMapBufferRange", target, offset, length, access);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMapBufferRange");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMapBufferRange");
    }

    typedef void * (*PFNGLMAPBUFFERRANGEPROC)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
    PFNGLMAPBUFFERRANGEPROC next = reinterpret_cast<PFNGLMAPBUFFERRANGEPROC>(it->second);
    return next(target, offset, length, access);
}

void * opengl_es_layer_glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %ld, %u)", mCmdIndex++, "glMapBufferRangeEXT", target, offset, length, access);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMapBufferRangeEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMapBufferRangeEXT");
    }

    typedef void * (*PFNGLMAPBUFFERRANGEEXTPROC)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
    PFNGLMAPBUFFERRANGEEXTPROC next = reinterpret_cast<PFNGLMAPBUFFERRANGEEXTPROC>(it->second);
    return next(target, offset, length, access);
}

void opengl_es_layer_glMaterialf(GLenum face, GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f)", mCmdIndex++, "glMaterialf", face, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMaterialf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMaterialf");
    }

    typedef void (*PFNGLMATERIALFPROC)(GLenum, GLenum, GLfloat);
    PFNGLMATERIALFPROC next = reinterpret_cast<PFNGLMATERIALFPROC>(it->second);
    return next(face, pname, param);
}

void opengl_es_layer_glMaterialfv(GLenum face, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glMaterialfv", face, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMaterialfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMaterialfv");
    }

    typedef void (*PFNGLMATERIALFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLMATERIALFVPROC next = reinterpret_cast<PFNGLMATERIALFVPROC>(it->second);
    return next(face, pname, params);
}

void opengl_es_layer_glMaterialx(GLenum face, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glMaterialx", face, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMaterialx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMaterialx");
    }

    typedef void (*PFNGLMATERIALXPROC)(GLenum, GLenum, GLfixed);
    PFNGLMATERIALXPROC next = reinterpret_cast<PFNGLMATERIALXPROC>(it->second);
    return next(face, pname, param);
}

void opengl_es_layer_glMaterialxOES(GLenum face, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glMaterialxOES", face, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMaterialxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMaterialxOES");
    }

    typedef void (*PFNGLMATERIALXOESPROC)(GLenum, GLenum, GLfixed);
    PFNGLMATERIALXOESPROC next = reinterpret_cast<PFNGLMATERIALXOESPROC>(it->second);
    return next(face, pname, param);
}

void opengl_es_layer_glMaterialxv(GLenum face, GLenum pname, GLfixed* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glMaterialxv", face, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMaterialxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMaterialxv");
    }

    typedef void (*PFNGLMATERIALXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLMATERIALXVPROC next = reinterpret_cast<PFNGLMATERIALXVPROC>(it->second);
    return next(face, pname, param);
}

void opengl_es_layer_glMaterialxvOES(GLenum face, GLenum pname, GLfixed* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glMaterialxvOES", face, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMaterialxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMaterialxvOES");
    }

    typedef void (*PFNGLMATERIALXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLMATERIALXVOESPROC next = reinterpret_cast<PFNGLMATERIALXVOESPROC>(it->second);
    return next(face, pname, param);
}

void opengl_es_layer_glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f, %f, %f)", mCmdIndex++, "glMatrixFrustumEXT", mode, left, right, bottom, top, zNear, zFar);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixFrustumEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixFrustumEXT");
    }

    typedef void (*PFNGLMATRIXFRUSTUMEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
    PFNGLMATRIXFRUSTUMEXTPROC next = reinterpret_cast<PFNGLMATRIXFRUSTUMEXTPROC>(it->second);
    return next(mode, left, right, bottom, top, zNear, zFar);
}

void opengl_es_layer_glMatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %d, %p)", mCmdIndex++, "glMatrixIndexPointerOES", size, type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixIndexPointerOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixIndexPointerOES");
    }

    typedef void (*PFNGLMATRIXINDEXPOINTEROESPROC)(GLint, GLenum, GLsizei, void*);
    PFNGLMATRIXINDEXPOINTEROESPROC next = reinterpret_cast<PFNGLMATRIXINDEXPOINTEROESPROC>(it->second);
    return next(size, type, stride, pointer);
}

void opengl_es_layer_glMatrixLoad3x2fNV(GLenum matrixMode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixLoad3x2fNV", matrixMode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoad3x2fNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoad3x2fNV");
    }

    typedef void (*PFNGLMATRIXLOAD3X2FNVPROC)(GLenum, GLfloat*);
    PFNGLMATRIXLOAD3X2FNVPROC next = reinterpret_cast<PFNGLMATRIXLOAD3X2FNVPROC>(it->second);
    return next(matrixMode, m);
}

void opengl_es_layer_glMatrixLoad3x3fNV(GLenum matrixMode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixLoad3x3fNV", matrixMode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoad3x3fNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoad3x3fNV");
    }

    typedef void (*PFNGLMATRIXLOAD3X3FNVPROC)(GLenum, GLfloat*);
    PFNGLMATRIXLOAD3X3FNVPROC next = reinterpret_cast<PFNGLMATRIXLOAD3X3FNVPROC>(it->second);
    return next(matrixMode, m);
}

void opengl_es_layer_glMatrixLoadIdentityEXT(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glMatrixLoadIdentityEXT", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoadIdentityEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoadIdentityEXT");
    }

    typedef void (*PFNGLMATRIXLOADIDENTITYEXTPROC)(GLenum);
    PFNGLMATRIXLOADIDENTITYEXTPROC next = reinterpret_cast<PFNGLMATRIXLOADIDENTITYEXTPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glMatrixLoadTranspose3x3fNV(GLenum matrixMode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixLoadTranspose3x3fNV", matrixMode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoadTranspose3x3fNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoadTranspose3x3fNV");
    }

    typedef void (*PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC)(GLenum, GLfloat*);
    PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC next = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC>(it->second);
    return next(matrixMode, m);
}

void opengl_es_layer_glMatrixLoadTransposedEXT(GLenum mode, GLdouble* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixLoadTransposedEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoadTransposedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoadTransposedEXT");
    }

    typedef void (*PFNGLMATRIXLOADTRANSPOSEDEXTPROC)(GLenum, GLdouble*);
    PFNGLMATRIXLOADTRANSPOSEDEXTPROC next = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEDEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixLoadTransposefEXT(GLenum mode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixLoadTransposefEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoadTransposefEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoadTransposefEXT");
    }

    typedef void (*PFNGLMATRIXLOADTRANSPOSEFEXTPROC)(GLenum, GLfloat*);
    PFNGLMATRIXLOADTRANSPOSEFEXTPROC next = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEFEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixLoaddEXT(GLenum mode, GLdouble* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixLoaddEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoaddEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoaddEXT");
    }

    typedef void (*PFNGLMATRIXLOADDEXTPROC)(GLenum, GLdouble*);
    PFNGLMATRIXLOADDEXTPROC next = reinterpret_cast<PFNGLMATRIXLOADDEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixLoadfEXT(GLenum mode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixLoadfEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixLoadfEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixLoadfEXT");
    }

    typedef void (*PFNGLMATRIXLOADFEXTPROC)(GLenum, GLfloat*);
    PFNGLMATRIXLOADFEXTPROC next = reinterpret_cast<PFNGLMATRIXLOADFEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixMode(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glMatrixMode", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMode");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMode");
    }

    typedef void (*PFNGLMATRIXMODEPROC)(GLenum);
    PFNGLMATRIXMODEPROC next = reinterpret_cast<PFNGLMATRIXMODEPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glMatrixMult3x2fNV(GLenum matrixMode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixMult3x2fNV", matrixMode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMult3x2fNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMult3x2fNV");
    }

    typedef void (*PFNGLMATRIXMULT3X2FNVPROC)(GLenum, GLfloat*);
    PFNGLMATRIXMULT3X2FNVPROC next = reinterpret_cast<PFNGLMATRIXMULT3X2FNVPROC>(it->second);
    return next(matrixMode, m);
}

void opengl_es_layer_glMatrixMult3x3fNV(GLenum matrixMode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixMult3x3fNV", matrixMode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMult3x3fNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMult3x3fNV");
    }

    typedef void (*PFNGLMATRIXMULT3X3FNVPROC)(GLenum, GLfloat*);
    PFNGLMATRIXMULT3X3FNVPROC next = reinterpret_cast<PFNGLMATRIXMULT3X3FNVPROC>(it->second);
    return next(matrixMode, m);
}

void opengl_es_layer_glMatrixMultTranspose3x3fNV(GLenum matrixMode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixMultTranspose3x3fNV", matrixMode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMultTranspose3x3fNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMultTranspose3x3fNV");
    }

    typedef void (*PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC)(GLenum, GLfloat*);
    PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC next = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC>(it->second);
    return next(matrixMode, m);
}

void opengl_es_layer_glMatrixMultTransposedEXT(GLenum mode, GLdouble* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixMultTransposedEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMultTransposedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMultTransposedEXT");
    }

    typedef void (*PFNGLMATRIXMULTTRANSPOSEDEXTPROC)(GLenum, GLdouble*);
    PFNGLMATRIXMULTTRANSPOSEDEXTPROC next = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEDEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixMultTransposefEXT(GLenum mode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixMultTransposefEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMultTransposefEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMultTransposefEXT");
    }

    typedef void (*PFNGLMATRIXMULTTRANSPOSEFEXTPROC)(GLenum, GLfloat*);
    PFNGLMATRIXMULTTRANSPOSEFEXTPROC next = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEFEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixMultdEXT(GLenum mode, GLdouble* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixMultdEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMultdEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMultdEXT");
    }

    typedef void (*PFNGLMATRIXMULTDEXTPROC)(GLenum, GLdouble*);
    PFNGLMATRIXMULTDEXTPROC next = reinterpret_cast<PFNGLMATRIXMULTDEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixMultfEXT(GLenum mode, GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glMatrixMultfEXT", mode, m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixMultfEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixMultfEXT");
    }

    typedef void (*PFNGLMATRIXMULTFEXTPROC)(GLenum, GLfloat*);
    PFNGLMATRIXMULTFEXTPROC next = reinterpret_cast<PFNGLMATRIXMULTFEXTPROC>(it->second);
    return next(mode, m);
}

void opengl_es_layer_glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f, %f, %f)", mCmdIndex++, "glMatrixOrthoEXT", mode, left, right, bottom, top, zNear, zFar);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixOrthoEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixOrthoEXT");
    }

    typedef void (*PFNGLMATRIXORTHOEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
    PFNGLMATRIXORTHOEXTPROC next = reinterpret_cast<PFNGLMATRIXORTHOEXTPROC>(it->second);
    return next(mode, left, right, bottom, top, zNear, zFar);
}

void opengl_es_layer_glMatrixPopEXT(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glMatrixPopEXT", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixPopEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixPopEXT");
    }

    typedef void (*PFNGLMATRIXPOPEXTPROC)(GLenum);
    PFNGLMATRIXPOPEXTPROC next = reinterpret_cast<PFNGLMATRIXPOPEXTPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glMatrixPushEXT(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glMatrixPushEXT", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixPushEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixPushEXT");
    }

    typedef void (*PFNGLMATRIXPUSHEXTPROC)(GLenum);
    PFNGLMATRIXPUSHEXTPROC next = reinterpret_cast<PFNGLMATRIXPUSHEXTPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f)", mCmdIndex++, "glMatrixRotatedEXT", mode, angle, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixRotatedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixRotatedEXT");
    }

    typedef void (*PFNGLMATRIXROTATEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
    PFNGLMATRIXROTATEDEXTPROC next = reinterpret_cast<PFNGLMATRIXROTATEDEXTPROC>(it->second);
    return next(mode, angle, x, y, z);
}

void opengl_es_layer_glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f)", mCmdIndex++, "glMatrixRotatefEXT", mode, angle, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixRotatefEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixRotatefEXT");
    }

    typedef void (*PFNGLMATRIXROTATEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLMATRIXROTATEFEXTPROC next = reinterpret_cast<PFNGLMATRIXROTATEFEXTPROC>(it->second);
    return next(mode, angle, x, y, z);
}

void opengl_es_layer_glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f)", mCmdIndex++, "glMatrixScaledEXT", mode, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixScaledEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixScaledEXT");
    }

    typedef void (*PFNGLMATRIXSCALEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble);
    PFNGLMATRIXSCALEDEXTPROC next = reinterpret_cast<PFNGLMATRIXSCALEDEXTPROC>(it->second);
    return next(mode, x, y, z);
}

void opengl_es_layer_glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f)", mCmdIndex++, "glMatrixScalefEXT", mode, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixScalefEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixScalefEXT");
    }

    typedef void (*PFNGLMATRIXSCALEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat);
    PFNGLMATRIXSCALEFEXTPROC next = reinterpret_cast<PFNGLMATRIXSCALEFEXTPROC>(it->second);
    return next(mode, x, y, z);
}

void opengl_es_layer_glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f)", mCmdIndex++, "glMatrixTranslatedEXT", mode, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixTranslatedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixTranslatedEXT");
    }

    typedef void (*PFNGLMATRIXTRANSLATEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble);
    PFNGLMATRIXTRANSLATEDEXTPROC next = reinterpret_cast<PFNGLMATRIXTRANSLATEDEXTPROC>(it->second);
    return next(mode, x, y, z);
}

void opengl_es_layer_glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f)", mCmdIndex++, "glMatrixTranslatefEXT", mode, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMatrixTranslatefEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMatrixTranslatefEXT");
    }

    typedef void (*PFNGLMATRIXTRANSLATEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat);
    PFNGLMATRIXTRANSLATEFEXTPROC next = reinterpret_cast<PFNGLMATRIXTRANSLATEFEXTPROC>(it->second);
    return next(mode, x, y, z);
}

void opengl_es_layer_glMaxShaderCompilerThreadsKHR(GLuint count) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glMaxShaderCompilerThreadsKHR", count);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMaxShaderCompilerThreadsKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMaxShaderCompilerThreadsKHR");
    }

    typedef void (*PFNGLMAXSHADERCOMPILERTHREADSKHRPROC)(GLuint);
    PFNGLMAXSHADERCOMPILERTHREADSKHRPROC next = reinterpret_cast<PFNGLMAXSHADERCOMPILERTHREADSKHRPROC>(it->second);
    return next(count);
}

void opengl_es_layer_glMemoryBarrier(GLbitfield barriers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glMemoryBarrier", barriers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMemoryBarrier");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMemoryBarrier");
    }

    typedef void (*PFNGLMEMORYBARRIERPROC)(GLbitfield);
    PFNGLMEMORYBARRIERPROC next = reinterpret_cast<PFNGLMEMORYBARRIERPROC>(it->second);
    return next(barriers);
}

void opengl_es_layer_glMemoryBarrierByRegion(GLbitfield barriers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glMemoryBarrierByRegion", barriers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMemoryBarrierByRegion");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMemoryBarrierByRegion");
    }

    typedef void (*PFNGLMEMORYBARRIERBYREGIONPROC)(GLbitfield);
    PFNGLMEMORYBARRIERBYREGIONPROC next = reinterpret_cast<PFNGLMEMORYBARRIERBYREGIONPROC>(it->second);
    return next(barriers);
}

void opengl_es_layer_glMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glMemoryObjectParameterivEXT", memoryObject, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMemoryObjectParameterivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMemoryObjectParameterivEXT");
    }

    typedef void (*PFNGLMEMORYOBJECTPARAMETERIVEXTPROC)(GLuint, GLenum, GLint*);
    PFNGLMEMORYOBJECTPARAMETERIVEXTPROC next = reinterpret_cast<PFNGLMEMORYOBJECTPARAMETERIVEXTPROC>(it->second);
    return next(memoryObject, pname, params);
}

void opengl_es_layer_glMinSampleShading(GLfloat value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f)", mCmdIndex++, "glMinSampleShading", value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMinSampleShading");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMinSampleShading");
    }

    typedef void (*PFNGLMINSAMPLESHADINGPROC)(GLfloat);
    PFNGLMINSAMPLESHADINGPROC next = reinterpret_cast<PFNGLMINSAMPLESHADINGPROC>(it->second);
    return next(value);
}

void opengl_es_layer_glMinSampleShadingOES(GLfloat value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f)", mCmdIndex++, "glMinSampleShadingOES", value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMinSampleShadingOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMinSampleShadingOES");
    }

    typedef void (*PFNGLMINSAMPLESHADINGOESPROC)(GLfloat);
    PFNGLMINSAMPLESHADINGOESPROC next = reinterpret_cast<PFNGLMINSAMPLESHADINGOESPROC>(it->second);
    return next(value);
}

void opengl_es_layer_glMultMatrixf(GLfloat* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glMultMatrixf", m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultMatrixf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultMatrixf");
    }

    typedef void (*PFNGLMULTMATRIXFPROC)(GLfloat*);
    PFNGLMULTMATRIXFPROC next = reinterpret_cast<PFNGLMULTMATRIXFPROC>(it->second);
    return next(m);
}

void opengl_es_layer_glMultMatrixx(GLfixed* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glMultMatrixx", m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultMatrixx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultMatrixx");
    }

    typedef void (*PFNGLMULTMATRIXXPROC)(GLfixed*);
    PFNGLMULTMATRIXXPROC next = reinterpret_cast<PFNGLMULTMATRIXXPROC>(it->second);
    return next(m);
}

void opengl_es_layer_glMultMatrixxOES(GLfixed* m) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p)", mCmdIndex++, "glMultMatrixxOES", m);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultMatrixxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultMatrixxOES");
    }

    typedef void (*PFNGLMULTMATRIXXOESPROC)(GLfixed*);
    PFNGLMULTMATRIXXOESPROC next = reinterpret_cast<PFNGLMULTMATRIXXOESPROC>(it->second);
    return next(m);
}

void opengl_es_layer_glMultiDrawArraysEXT(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %p, %d)", mCmdIndex++, "glMultiDrawArraysEXT", mode, first, count, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiDrawArraysEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiDrawArraysEXT");
    }

    typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC)(GLenum, GLint*, GLsizei*, GLsizei);
    PFNGLMULTIDRAWARRAYSEXTPROC next = reinterpret_cast<PFNGLMULTIDRAWARRAYSEXTPROC>(it->second);
    return next(mode, first, count, primcount);
}

void opengl_es_layer_glMultiDrawArraysIndirectEXT(GLenum mode, void* indirect, GLsizei drawcount, GLsizei stride) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %d, %d)", mCmdIndex++, "glMultiDrawArraysIndirectEXT", mode, indirect, drawcount, stride);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiDrawArraysIndirectEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiDrawArraysIndirectEXT");
    }

    typedef void (*PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC)(GLenum, void*, GLsizei, GLsizei);
    PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC next = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC>(it->second);
    return next(mode, indirect, drawcount, stride);
}

void opengl_es_layer_glMultiDrawElementsBaseVertexEXT(GLenum mode, GLsizei* count, GLenum type, void** indices, GLsizei primcount, GLint* basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %u, %p, %d, %p)", mCmdIndex++, "glMultiDrawElementsBaseVertexEXT", mode, count, type, *indices, primcount, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiDrawElementsBaseVertexEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiDrawElementsBaseVertexEXT");
    }

    typedef void (*PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC)(GLenum, GLsizei*, GLenum, void**, GLsizei, GLint*);
    PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC next = reinterpret_cast<PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC>(it->second);
    return next(mode, count, type, indices, primcount, basevertex);
}

void opengl_es_layer_glMultiDrawElementsBaseVertexOES(GLenum mode, GLsizei* count, GLenum type, void** indices, GLsizei primcount, GLint* basevertex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %u, %p, %d, %p)", mCmdIndex++, "glMultiDrawElementsBaseVertexOES", mode, count, type, *indices, primcount, basevertex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiDrawElementsBaseVertexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiDrawElementsBaseVertexOES");
    }

    typedef void (*PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC)(GLenum, GLsizei*, GLenum, void**, GLsizei, GLint*);
    PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC next = reinterpret_cast<PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC>(it->second);
    return next(mode, count, type, indices, primcount, basevertex);
}

void opengl_es_layer_glMultiDrawElementsEXT(GLenum mode, GLsizei* count, GLenum type, void** indices, GLsizei primcount) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %u, %p, %d)", mCmdIndex++, "glMultiDrawElementsEXT", mode, count, type, *indices, primcount);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiDrawElementsEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiDrawElementsEXT");
    }

    typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC)(GLenum, GLsizei*, GLenum, void**, GLsizei);
    PFNGLMULTIDRAWELEMENTSEXTPROC next = reinterpret_cast<PFNGLMULTIDRAWELEMENTSEXTPROC>(it->second);
    return next(mode, count, type, indices, primcount);
}

void opengl_es_layer_glMultiDrawElementsIndirectEXT(GLenum mode, GLenum type, void* indirect, GLsizei drawcount, GLsizei stride) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %d, %d)", mCmdIndex++, "glMultiDrawElementsIndirectEXT", mode, type, indirect, drawcount, stride);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiDrawElementsIndirectEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiDrawElementsIndirectEXT");
    }

    typedef void (*PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC)(GLenum, GLenum, void*, GLsizei, GLsizei);
    PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC next = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC>(it->second);
    return next(mode, type, indirect, drawcount, stride);
}

void opengl_es_layer_glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f)", mCmdIndex++, "glMultiTexCoord4f", target, s, t, r, q);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiTexCoord4f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiTexCoord4f");
    }

    typedef void (*PFNGLMULTITEXCOORD4FPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLMULTITEXCOORD4FPROC next = reinterpret_cast<PFNGLMULTITEXCOORD4FPROC>(it->second);
    return next(target, s, t, r, q);
}

void opengl_es_layer_glMultiTexCoord4x(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d)", mCmdIndex++, "glMultiTexCoord4x", texture, s, t, r, q);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiTexCoord4x");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiTexCoord4x");
    }

    typedef void (*PFNGLMULTITEXCOORD4XPROC)(GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLMULTITEXCOORD4XPROC next = reinterpret_cast<PFNGLMULTITEXCOORD4XPROC>(it->second);
    return next(texture, s, t, r, q);
}

void opengl_es_layer_glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d)", mCmdIndex++, "glMultiTexCoord4xOES", texture, s, t, r, q);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glMultiTexCoord4xOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glMultiTexCoord4xOES");
    }

    typedef void (*PFNGLMULTITEXCOORD4XOESPROC)(GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLMULTITEXCOORD4XOESPROC next = reinterpret_cast<PFNGLMULTITEXCOORD4XOESPROC>(it->second);
    return next(texture, s, t, r, q);
}

void opengl_es_layer_glNamedBufferStorageExternalEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %ld, %p, %u)", mCmdIndex++, "glNamedBufferStorageExternalEXT", buffer, offset, size, clientBuffer, flags);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glNamedBufferStorageExternalEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glNamedBufferStorageExternalEXT");
    }

    typedef void (*PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC)(GLuint, GLintptr, GLsizeiptr, GLeglClientBufferEXT, GLbitfield);
    PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC next = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC>(it->second);
    return next(buffer, offset, size, clientBuffer, flags);
}

void opengl_es_layer_glNamedBufferStorageMemEXT(GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %ld, %u, %" PRIu64 ")", mCmdIndex++, "glNamedBufferStorageMemEXT", buffer, size, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glNamedBufferStorageMemEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glNamedBufferStorageMemEXT");
    }

    typedef void (*PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC)(GLuint, GLsizeiptr, GLuint, GLuint64);
    PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC next = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC>(it->second);
    return next(buffer, size, memory, offset);
}

void opengl_es_layer_glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p)", mCmdIndex++, "glNamedFramebufferSampleLocationsfvNV", framebuffer, start, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glNamedFramebufferSampleLocationsfvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glNamedFramebufferSampleLocationsfvNV");
    }

    typedef void (*PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)(GLuint, GLuint, GLsizei, GLfloat*);
    PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC next = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(it->second);
    return next(framebuffer, start, count, v);
}

void opengl_es_layer_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f)", mCmdIndex++, "glNormal3f", nx, ny, nz);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glNormal3f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glNormal3f");
    }

    typedef void (*PFNGLNORMAL3FPROC)(GLfloat, GLfloat, GLfloat);
    PFNGLNORMAL3FPROC next = reinterpret_cast<PFNGLNORMAL3FPROC>(it->second);
    return next(nx, ny, nz);
}

void opengl_es_layer_glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d)", mCmdIndex++, "glNormal3x", nx, ny, nz);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glNormal3x");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glNormal3x");
    }

    typedef void (*PFNGLNORMAL3XPROC)(GLfixed, GLfixed, GLfixed);
    PFNGLNORMAL3XPROC next = reinterpret_cast<PFNGLNORMAL3XPROC>(it->second);
    return next(nx, ny, nz);
}

void opengl_es_layer_glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d)", mCmdIndex++, "glNormal3xOES", nx, ny, nz);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glNormal3xOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glNormal3xOES");
    }

    typedef void (*PFNGLNORMAL3XOESPROC)(GLfixed, GLfixed, GLfixed);
    PFNGLNORMAL3XOESPROC next = reinterpret_cast<PFNGLNORMAL3XOESPROC>(it->second);
    return next(nx, ny, nz);
}

void opengl_es_layer_glNormalPointer(GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glNormalPointer", type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glNormalPointer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glNormalPointer");
    }

    typedef void (*PFNGLNORMALPOINTERPROC)(GLenum, GLsizei, void*);
    PFNGLNORMALPOINTERPROC next = reinterpret_cast<PFNGLNORMALPOINTERPROC>(it->second);
    return next(type, stride, pointer);
}

void opengl_es_layer_glObjectLabel(GLenum identifier, GLuint name, GLsizei length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %s)", mCmdIndex++, "glObjectLabel", identifier, name, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glObjectLabel");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glObjectLabel");
    }

    typedef void (*PFNGLOBJECTLABELPROC)(GLenum, GLuint, GLsizei, GLchar*);
    PFNGLOBJECTLABELPROC next = reinterpret_cast<PFNGLOBJECTLABELPROC>(it->second);
    return next(identifier, name, length, label);
}

void opengl_es_layer_glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %s)", mCmdIndex++, "glObjectLabelKHR", identifier, name, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glObjectLabelKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glObjectLabelKHR");
    }

    typedef void (*PFNGLOBJECTLABELKHRPROC)(GLenum, GLuint, GLsizei, GLchar*);
    PFNGLOBJECTLABELKHRPROC next = reinterpret_cast<PFNGLOBJECTLABELKHRPROC>(it->second);
    return next(identifier, name, length, label);
}

void opengl_es_layer_glObjectPtrLabel(void* ptr, GLsizei length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %s)", mCmdIndex++, "glObjectPtrLabel", ptr, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glObjectPtrLabel");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glObjectPtrLabel");
    }

    typedef void (*PFNGLOBJECTPTRLABELPROC)(void*, GLsizei, GLchar*);
    PFNGLOBJECTPTRLABELPROC next = reinterpret_cast<PFNGLOBJECTPTRLABELPROC>(it->second);
    return next(ptr, length, label);
}

void opengl_es_layer_glObjectPtrLabelKHR(void* ptr, GLsizei length, GLchar* label) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %d, %s)", mCmdIndex++, "glObjectPtrLabelKHR", ptr, length, label);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glObjectPtrLabelKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glObjectPtrLabelKHR");
    }

    typedef void (*PFNGLOBJECTPTRLABELKHRPROC)(void*, GLsizei, GLchar*);
    PFNGLOBJECTPTRLABELKHRPROC next = reinterpret_cast<PFNGLOBJECTPTRLABELKHRPROC>(it->second);
    return next(ptr, length, label);
}

void opengl_es_layer_glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f, %f)", mCmdIndex++, "glOrthof", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glOrthof");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glOrthof");
    }

    typedef void (*PFNGLORTHOFPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLORTHOFPROC next = reinterpret_cast<PFNGLORTHOFPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f, %f)", mCmdIndex++, "glOrthofOES", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glOrthofOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glOrthofOES");
    }

    typedef void (*PFNGLORTHOFOESPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLORTHOFOESPROC next = reinterpret_cast<PFNGLORTHOFOESPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d, %d)", mCmdIndex++, "glOrthox", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glOrthox");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glOrthox");
    }

    typedef void (*PFNGLORTHOXPROC)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLORTHOXPROC next = reinterpret_cast<PFNGLORTHOXPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d, %d)", mCmdIndex++, "glOrthoxOES", l, r, b, t, n, f);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glOrthoxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glOrthoxOES");
    }

    typedef void (*PFNGLORTHOXOESPROC)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLORTHOXOESPROC next = reinterpret_cast<PFNGLORTHOXOESPROC>(it->second);
    return next(l, r, b, t, n, f);
}

void opengl_es_layer_glPatchParameteri(GLenum pname, GLint value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glPatchParameteri", pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPatchParameteri");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPatchParameteri");
    }

    typedef void (*PFNGLPATCHPARAMETERIPROC)(GLenum, GLint);
    PFNGLPATCHPARAMETERIPROC next = reinterpret_cast<PFNGLPATCHPARAMETERIPROC>(it->second);
    return next(pname, value);
}

void opengl_es_layer_glPatchParameteriEXT(GLenum pname, GLint value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glPatchParameteriEXT", pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPatchParameteriEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPatchParameteriEXT");
    }

    typedef void (*PFNGLPATCHPARAMETERIEXTPROC)(GLenum, GLint);
    PFNGLPATCHPARAMETERIEXTPROC next = reinterpret_cast<PFNGLPATCHPARAMETERIEXTPROC>(it->second);
    return next(pname, value);
}

void opengl_es_layer_glPatchParameteriOES(GLenum pname, GLint value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glPatchParameteriOES", pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPatchParameteriOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPatchParameteriOES");
    }

    typedef void (*PFNGLPATCHPARAMETERIOESPROC)(GLenum, GLint);
    PFNGLPATCHPARAMETERIOESPROC next = reinterpret_cast<PFNGLPATCHPARAMETERIOESPROC>(it->second);
    return next(pname, value);
}

void opengl_es_layer_glPathCommandsNV(GLuint path, GLsizei numCommands, GLubyte* commands, GLsizei numCoords, GLenum coordType, void* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %d, %u, %p)", mCmdIndex++, "glPathCommandsNV", path, numCommands, commands, numCoords, coordType, coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathCommandsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathCommandsNV");
    }

    typedef void (*PFNGLPATHCOMMANDSNVPROC)(GLuint, GLsizei, GLubyte*, GLsizei, GLenum, void*);
    PFNGLPATHCOMMANDSNVPROC next = reinterpret_cast<PFNGLPATHCOMMANDSNVPROC>(it->second);
    return next(path, numCommands, commands, numCoords, coordType, coords);
}

void opengl_es_layer_glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, void* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %p)", mCmdIndex++, "glPathCoordsNV", path, numCoords, coordType, coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathCoordsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathCoordsNV");
    }

    typedef void (*PFNGLPATHCOORDSNVPROC)(GLuint, GLsizei, GLenum, void*);
    PFNGLPATHCOORDSNVPROC next = reinterpret_cast<PFNGLPATHCOORDSNVPROC>(it->second);
    return next(path, numCoords, coordType, coords);
}

void opengl_es_layer_glPathCoverDepthFuncNV(GLenum func) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glPathCoverDepthFuncNV", func);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathCoverDepthFuncNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathCoverDepthFuncNV");
    }

    typedef void (*PFNGLPATHCOVERDEPTHFUNCNVPROC)(GLenum);
    PFNGLPATHCOVERDEPTHFUNCNVPROC next = reinterpret_cast<PFNGLPATHCOVERDEPTHFUNCNVPROC>(it->second);
    return next(func);
}

void opengl_es_layer_glPathDashArrayNV(GLuint path, GLsizei dashCount, GLfloat* dashArray) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glPathDashArrayNV", path, dashCount, dashArray);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathDashArrayNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathDashArrayNV");
    }

    typedef void (*PFNGLPATHDASHARRAYNVPROC)(GLuint, GLsizei, GLfloat*);
    PFNGLPATHDASHARRAYNVPROC next = reinterpret_cast<PFNGLPATHDASHARRAYNVPROC>(it->second);
    return next(path, dashCount, dashArray);
}

GLenum opengl_es_layer_glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, void* fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %u, %u, %d, %u, %f)", mCmdIndex++, "glPathGlyphIndexArrayNV", firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathGlyphIndexArrayNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathGlyphIndexArrayNV");
    }

    typedef GLenum (*PFNGLPATHGLYPHINDEXARRAYNVPROC)(GLuint, GLenum, void*, GLbitfield, GLuint, GLsizei, GLuint, GLfloat);
    PFNGLPATHGLYPHINDEXARRAYNVPROC next = reinterpret_cast<PFNGLPATHGLYPHINDEXARRAYNVPROC>(it->second);
    return next(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

GLenum opengl_es_layer_glPathGlyphIndexRangeNV(GLenum fontTarget, void* fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p, %u, %u, %f, %u)", mCmdIndex++, "glPathGlyphIndexRangeNV", fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount[2]);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathGlyphIndexRangeNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathGlyphIndexRangeNV");
    }

    typedef GLenum (*PFNGLPATHGLYPHINDEXRANGENVPROC)(GLenum, void*, GLbitfield, GLuint, GLfloat, GLuint);
    PFNGLPATHGLYPHINDEXRANGENVPROC next = reinterpret_cast<PFNGLPATHGLYPHINDEXRANGENVPROC>(it->second);
    return next(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount[2]);
}

void opengl_es_layer_glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, void* fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %u, %u, %d, %u, %u, %f)", mCmdIndex++, "glPathGlyphRangeNV", firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathGlyphRangeNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathGlyphRangeNV");
    }

    typedef void (*PFNGLPATHGLYPHRANGENVPROC)(GLuint, GLenum, void*, GLbitfield, GLuint, GLsizei, GLenum, GLuint, GLfloat);
    PFNGLPATHGLYPHRANGENVPROC next = reinterpret_cast<PFNGLPATHGLYPHRANGENVPROC>(it->second);
    return next(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void opengl_es_layer_glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, void* fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, void* charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %u, %d, %u, %p, %u, %u, %f)", mCmdIndex++, "glPathGlyphsNV", firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathGlyphsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathGlyphsNV");
    }

    typedef void (*PFNGLPATHGLYPHSNVPROC)(GLuint, GLenum, void*, GLbitfield, GLsizei, GLenum, void*, GLenum, GLuint, GLfloat);
    PFNGLPATHGLYPHSNVPROC next = reinterpret_cast<PFNGLPATHGLYPHSNVPROC>(it->second);
    return next(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum opengl_es_layer_glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, void* fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %ld, %p, %d, %u, %d, %u, %f)", mCmdIndex++, "glPathMemoryGlyphIndexArrayNV", firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathMemoryGlyphIndexArrayNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathMemoryGlyphIndexArrayNV");
    }

    typedef GLenum (*PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC)(GLuint, GLenum, GLsizeiptr, void*, GLsizei, GLuint, GLsizei, GLuint, GLfloat);
    PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC next = reinterpret_cast<PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC>(it->second);
    return next(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

void opengl_es_layer_glPathParameterfNV(GLuint path, GLenum pname, GLfloat value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f)", mCmdIndex++, "glPathParameterfNV", path, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathParameterfNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathParameterfNV");
    }

    typedef void (*PFNGLPATHPARAMETERFNVPROC)(GLuint, GLenum, GLfloat);
    PFNGLPATHPARAMETERFNVPROC next = reinterpret_cast<PFNGLPATHPARAMETERFNVPROC>(it->second);
    return next(path, pname, value);
}

void opengl_es_layer_glPathParameterfvNV(GLuint path, GLenum pname, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glPathParameterfvNV", path, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathParameterfvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathParameterfvNV");
    }

    typedef void (*PFNGLPATHPARAMETERFVNVPROC)(GLuint, GLenum, GLfloat*);
    PFNGLPATHPARAMETERFVNVPROC next = reinterpret_cast<PFNGLPATHPARAMETERFVNVPROC>(it->second);
    return next(path, pname, value);
}

void opengl_es_layer_glPathParameteriNV(GLuint path, GLenum pname, GLint value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glPathParameteriNV", path, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathParameteriNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathParameteriNV");
    }

    typedef void (*PFNGLPATHPARAMETERINVPROC)(GLuint, GLenum, GLint);
    PFNGLPATHPARAMETERINVPROC next = reinterpret_cast<PFNGLPATHPARAMETERINVPROC>(it->second);
    return next(path, pname, value);
}

void opengl_es_layer_glPathParameterivNV(GLuint path, GLenum pname, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glPathParameterivNV", path, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathParameterivNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathParameterivNV");
    }

    typedef void (*PFNGLPATHPARAMETERIVNVPROC)(GLuint, GLenum, GLint*);
    PFNGLPATHPARAMETERIVNVPROC next = reinterpret_cast<PFNGLPATHPARAMETERIVNVPROC>(it->second);
    return next(path, pname, value);
}

void opengl_es_layer_glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f)", mCmdIndex++, "glPathStencilDepthOffsetNV", factor, units);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathStencilDepthOffsetNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathStencilDepthOffsetNV");
    }

    typedef void (*PFNGLPATHSTENCILDEPTHOFFSETNVPROC)(GLfloat, GLfloat);
    PFNGLPATHSTENCILDEPTHOFFSETNVPROC next = reinterpret_cast<PFNGLPATHSTENCILDEPTHOFFSETNVPROC>(it->second);
    return next(factor, units);
}

void opengl_es_layer_glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u)", mCmdIndex++, "glPathStencilFuncNV", func, ref, mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathStencilFuncNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathStencilFuncNV");
    }

    typedef void (*PFNGLPATHSTENCILFUNCNVPROC)(GLenum, GLint, GLuint);
    PFNGLPATHSTENCILFUNCNVPROC next = reinterpret_cast<PFNGLPATHSTENCILFUNCNVPROC>(it->second);
    return next(func, ref, mask);
}

void opengl_es_layer_glPathStringNV(GLuint path, GLenum format, GLsizei length, void* pathString) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %p)", mCmdIndex++, "glPathStringNV", path, format, length, pathString);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathStringNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathStringNV");
    }

    typedef void (*PFNGLPATHSTRINGNVPROC)(GLuint, GLenum, GLsizei, void*);
    PFNGLPATHSTRINGNVPROC next = reinterpret_cast<PFNGLPATHSTRINGNVPROC>(it->second);
    return next(path, format, length, pathString);
}

void opengl_es_layer_glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, GLubyte* commands, GLsizei numCoords, GLenum coordType, void* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %p, %d, %u, %p)", mCmdIndex++, "glPathSubCommandsNV", path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathSubCommandsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathSubCommandsNV");
    }

    typedef void (*PFNGLPATHSUBCOMMANDSNVPROC)(GLuint, GLsizei, GLsizei, GLsizei, GLubyte*, GLsizei, GLenum, void*);
    PFNGLPATHSUBCOMMANDSNVPROC next = reinterpret_cast<PFNGLPATHSUBCOMMANDSNVPROC>(it->second);
    return next(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void opengl_es_layer_glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, void* coords) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glPathSubCoordsNV", path, coordStart, numCoords, coordType, coords);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPathSubCoordsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPathSubCoordsNV");
    }

    typedef void (*PFNGLPATHSUBCOORDSNVPROC)(GLuint, GLsizei, GLsizei, GLenum, void*);
    PFNGLPATHSUBCOORDSNVPROC next = reinterpret_cast<PFNGLPATHSUBCOORDSNVPROC>(it->second);
    return next(path, coordStart, numCoords, coordType, coords);
}

void opengl_es_layer_glPauseTransformFeedback(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glPauseTransformFeedback");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPauseTransformFeedback");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPauseTransformFeedback");
    }

    typedef void (*PFNGLPAUSETRANSFORMFEEDBACKPROC)(void);
    PFNGLPAUSETRANSFORMFEEDBACKPROC next = reinterpret_cast<PFNGLPAUSETRANSFORMFEEDBACKPROC>(it->second);
    return next();
}

void opengl_es_layer_glPixelStorei(GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glPixelStorei", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPixelStorei");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPixelStorei");
    }

    typedef void (*PFNGLPIXELSTOREIPROC)(GLenum, GLint);
    PFNGLPIXELSTOREIPROC next = reinterpret_cast<PFNGLPIXELSTOREIPROC>(it->second);
    return next(pname, param);
}

GLboolean opengl_es_layer_glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat* x, GLfloat* y, GLfloat* tangentX, GLfloat* tangentY) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %f, %p, %p, %p, %p)", mCmdIndex++, "glPointAlongPathNV", path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointAlongPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointAlongPathNV");
    }

    typedef GLboolean (*PFNGLPOINTALONGPATHNVPROC)(GLuint, GLsizei, GLsizei, GLfloat, GLfloat*, GLfloat*, GLfloat*, GLfloat*);
    PFNGLPOINTALONGPATHNVPROC next = reinterpret_cast<PFNGLPOINTALONGPATHNVPROC>(it->second);
    return next(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void opengl_es_layer_glPointParameterf(GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f)", mCmdIndex++, "glPointParameterf", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointParameterf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointParameterf");
    }

    typedef void (*PFNGLPOINTPARAMETERFPROC)(GLenum, GLfloat);
    PFNGLPOINTPARAMETERFPROC next = reinterpret_cast<PFNGLPOINTPARAMETERFPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glPointParameterfv(GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glPointParameterfv", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointParameterfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointParameterfv");
    }

    typedef void (*PFNGLPOINTPARAMETERFVPROC)(GLenum, GLfloat*);
    PFNGLPOINTPARAMETERFVPROC next = reinterpret_cast<PFNGLPOINTPARAMETERFVPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glPointParameterx(GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glPointParameterx", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointParameterx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointParameterx");
    }

    typedef void (*PFNGLPOINTPARAMETERXPROC)(GLenum, GLfixed);
    PFNGLPOINTPARAMETERXPROC next = reinterpret_cast<PFNGLPOINTPARAMETERXPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glPointParameterxOES(GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glPointParameterxOES", pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointParameterxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointParameterxOES");
    }

    typedef void (*PFNGLPOINTPARAMETERXOESPROC)(GLenum, GLfixed);
    PFNGLPOINTPARAMETERXOESPROC next = reinterpret_cast<PFNGLPOINTPARAMETERXOESPROC>(it->second);
    return next(pname, param);
}

void opengl_es_layer_glPointParameterxv(GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glPointParameterxv", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointParameterxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointParameterxv");
    }

    typedef void (*PFNGLPOINTPARAMETERXVPROC)(GLenum, GLfixed*);
    PFNGLPOINTPARAMETERXVPROC next = reinterpret_cast<PFNGLPOINTPARAMETERXVPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glPointParameterxvOES(GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glPointParameterxvOES", pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointParameterxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointParameterxvOES");
    }

    typedef void (*PFNGLPOINTPARAMETERXVOESPROC)(GLenum, GLfixed*);
    PFNGLPOINTPARAMETERXVOESPROC next = reinterpret_cast<PFNGLPOINTPARAMETERXVOESPROC>(it->second);
    return next(pname, params);
}

void opengl_es_layer_glPointSize(GLfloat size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f)", mCmdIndex++, "glPointSize", size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointSize");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointSize");
    }

    typedef void (*PFNGLPOINTSIZEPROC)(GLfloat);
    PFNGLPOINTSIZEPROC next = reinterpret_cast<PFNGLPOINTSIZEPROC>(it->second);
    return next(size);
}

void opengl_es_layer_glPointSizePointerOES(GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glPointSizePointerOES", type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointSizePointerOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointSizePointerOES");
    }

    typedef void (*PFNGLPOINTSIZEPOINTEROESPROC)(GLenum, GLsizei, void*);
    PFNGLPOINTSIZEPOINTEROESPROC next = reinterpret_cast<PFNGLPOINTSIZEPOINTEROESPROC>(it->second);
    return next(type, stride, pointer);
}

void opengl_es_layer_glPointSizex(GLfixed size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glPointSizex", size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointSizex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointSizex");
    }

    typedef void (*PFNGLPOINTSIZEXPROC)(GLfixed);
    PFNGLPOINTSIZEXPROC next = reinterpret_cast<PFNGLPOINTSIZEXPROC>(it->second);
    return next(size);
}

void opengl_es_layer_glPointSizexOES(GLfixed size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d)", mCmdIndex++, "glPointSizexOES", size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPointSizexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPointSizexOES");
    }

    typedef void (*PFNGLPOINTSIZEXOESPROC)(GLfixed);
    PFNGLPOINTSIZEXOESPROC next = reinterpret_cast<PFNGLPOINTSIZEXOESPROC>(it->second);
    return next(size);
}

void opengl_es_layer_glPolygonModeNV(GLenum face, GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glPolygonModeNV", face, mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPolygonModeNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPolygonModeNV");
    }

    typedef void (*PFNGLPOLYGONMODENVPROC)(GLenum, GLenum);
    PFNGLPOLYGONMODENVPROC next = reinterpret_cast<PFNGLPOLYGONMODENVPROC>(it->second);
    return next(face, mode);
}

void opengl_es_layer_glPolygonOffset(GLfloat factor, GLfloat units) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f)", mCmdIndex++, "glPolygonOffset", factor, units);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPolygonOffset");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPolygonOffset");
    }

    typedef void (*PFNGLPOLYGONOFFSETPROC)(GLfloat, GLfloat);
    PFNGLPOLYGONOFFSETPROC next = reinterpret_cast<PFNGLPOLYGONOFFSETPROC>(it->second);
    return next(factor, units);
}

void opengl_es_layer_glPolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f)", mCmdIndex++, "glPolygonOffsetClampEXT", factor, units, clamp);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPolygonOffsetClampEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPolygonOffsetClampEXT");
    }

    typedef void (*PFNGLPOLYGONOFFSETCLAMPEXTPROC)(GLfloat, GLfloat, GLfloat);
    PFNGLPOLYGONOFFSETCLAMPEXTPROC next = reinterpret_cast<PFNGLPOLYGONOFFSETCLAMPEXTPROC>(it->second);
    return next(factor, units, clamp);
}

void opengl_es_layer_glPolygonOffsetx(GLfixed factor, GLfixed units) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d)", mCmdIndex++, "glPolygonOffsetx", factor, units);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPolygonOffsetx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPolygonOffsetx");
    }

    typedef void (*PFNGLPOLYGONOFFSETXPROC)(GLfixed, GLfixed);
    PFNGLPOLYGONOFFSETXPROC next = reinterpret_cast<PFNGLPOLYGONOFFSETXPROC>(it->second);
    return next(factor, units);
}

void opengl_es_layer_glPolygonOffsetxOES(GLfixed factor, GLfixed units) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d)", mCmdIndex++, "glPolygonOffsetxOES", factor, units);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPolygonOffsetxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPolygonOffsetxOES");
    }

    typedef void (*PFNGLPOLYGONOFFSETXOESPROC)(GLfixed, GLfixed);
    PFNGLPOLYGONOFFSETXOESPROC next = reinterpret_cast<PFNGLPOLYGONOFFSETXOESPROC>(it->second);
    return next(factor, units);
}

void opengl_es_layer_glPopDebugGroup(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glPopDebugGroup");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPopDebugGroup");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPopDebugGroup");
    }

    typedef void (*PFNGLPOPDEBUGGROUPPROC)(void);
    PFNGLPOPDEBUGGROUPPROC next = reinterpret_cast<PFNGLPOPDEBUGGROUPPROC>(it->second);
    return next();
}

void opengl_es_layer_glPopDebugGroupKHR(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glPopDebugGroupKHR");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPopDebugGroupKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPopDebugGroupKHR");
    }

    typedef void (*PFNGLPOPDEBUGGROUPKHRPROC)(void);
    PFNGLPOPDEBUGGROUPKHRPROC next = reinterpret_cast<PFNGLPOPDEBUGGROUPKHRPROC>(it->second);
    return next();
}

void opengl_es_layer_glPopGroupMarkerEXT(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glPopGroupMarkerEXT");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPopGroupMarkerEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPopGroupMarkerEXT");
    }

    typedef void (*PFNGLPOPGROUPMARKEREXTPROC)(void);
    PFNGLPOPGROUPMARKEREXTPROC next = reinterpret_cast<PFNGLPOPGROUPMARKEREXTPROC>(it->second);
    return next();
}

void opengl_es_layer_glPopMatrix(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glPopMatrix");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPopMatrix");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPopMatrix");
    }

    typedef void (*PFNGLPOPMATRIXPROC)(void);
    PFNGLPOPMATRIXPROC next = reinterpret_cast<PFNGLPOPMATRIXPROC>(it->second);
    return next();
}

void opengl_es_layer_glPrimitiveBoundingBox(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f, %f, %f, %f)", mCmdIndex++, "glPrimitiveBoundingBox", minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPrimitiveBoundingBox");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPrimitiveBoundingBox");
    }

    typedef void (*PFNGLPRIMITIVEBOUNDINGBOXPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLPRIMITIVEBOUNDINGBOXPROC next = reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXPROC>(it->second);
    return next(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void opengl_es_layer_glPrimitiveBoundingBoxEXT(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f, %f, %f, %f)", mCmdIndex++, "glPrimitiveBoundingBoxEXT", minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPrimitiveBoundingBoxEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPrimitiveBoundingBoxEXT");
    }

    typedef void (*PFNGLPRIMITIVEBOUNDINGBOXEXTPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLPRIMITIVEBOUNDINGBOXEXTPROC next = reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXEXTPROC>(it->second);
    return next(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void opengl_es_layer_glPrimitiveBoundingBoxOES(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f, %f, %f, %f, %f)", mCmdIndex++, "glPrimitiveBoundingBoxOES", minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPrimitiveBoundingBoxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPrimitiveBoundingBoxOES");
    }

    typedef void (*PFNGLPRIMITIVEBOUNDINGBOXOESPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLPRIMITIVEBOUNDINGBOXOESPROC next = reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXOESPROC>(it->second);
    return next(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void opengl_es_layer_glProgramBinary(GLuint program, GLenum binaryFormat, void* binary, GLsizei length) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %d)", mCmdIndex++, "glProgramBinary", program, binaryFormat, binary, length);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramBinary");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramBinary");
    }

    typedef void (*PFNGLPROGRAMBINARYPROC)(GLuint, GLenum, void*, GLsizei);
    PFNGLPROGRAMBINARYPROC next = reinterpret_cast<PFNGLPROGRAMBINARYPROC>(it->second);
    return next(program, binaryFormat, binary, length);
}

void opengl_es_layer_glProgramBinaryOES(GLuint program, GLenum binaryFormat, void* binary, GLint length) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %d)", mCmdIndex++, "glProgramBinaryOES", program, binaryFormat, binary, length);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramBinaryOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramBinaryOES");
    }

    typedef void (*PFNGLPROGRAMBINARYOESPROC)(GLuint, GLenum, void*, GLint);
    PFNGLPROGRAMBINARYOESPROC next = reinterpret_cast<PFNGLPROGRAMBINARYOESPROC>(it->second);
    return next(program, binaryFormat, binary, length);
}

void opengl_es_layer_glProgramParameteri(GLuint program, GLenum pname, GLint value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glProgramParameteri", program, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramParameteri");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramParameteri");
    }

    typedef void (*PFNGLPROGRAMPARAMETERIPROC)(GLuint, GLenum, GLint);
    PFNGLPROGRAMPARAMETERIPROC next = reinterpret_cast<PFNGLPROGRAMPARAMETERIPROC>(it->second);
    return next(program, pname, value);
}

void opengl_es_layer_glProgramParameteriEXT(GLuint program, GLenum pname, GLint value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glProgramParameteriEXT", program, pname, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramParameteriEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramParameteriEXT");
    }

    typedef void (*PFNGLPROGRAMPARAMETERIEXTPROC)(GLuint, GLenum, GLint);
    PFNGLPROGRAMPARAMETERIEXTPROC next = reinterpret_cast<PFNGLPROGRAMPARAMETERIEXTPROC>(it->second);
    return next(program, pname, value);
}

void opengl_es_layer_glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, GLfloat* coeffs) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %p)", mCmdIndex++, "glProgramPathFragmentInputGenNV", program, location, genMode, components, coeffs);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramPathFragmentInputGenNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramPathFragmentInputGenNV");
    }

    typedef void (*PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC)(GLuint, GLint, GLenum, GLint, GLfloat*);
    PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC next = reinterpret_cast<PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC>(it->second);
    return next(program, location, genMode, components, coeffs);
}

void opengl_es_layer_glProgramUniform1f(GLuint program, GLint location, GLfloat v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f)", mCmdIndex++, "glProgramUniform1f", program, location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1f");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1FPROC)(GLuint, GLint, GLfloat);
    PFNGLPROGRAMUNIFORM1FPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1FPROC>(it->second);
    return next(program, location, v0);
}

void opengl_es_layer_glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f)", mCmdIndex++, "glProgramUniform1fEXT", program, location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1fEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1fEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1FEXTPROC)(GLuint, GLint, GLfloat);
    PFNGLPROGRAMUNIFORM1FEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1FEXTPROC>(it->second);
    return next(program, location, v0);
}

void opengl_es_layer_glProgramUniform1fv(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1fv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1FVPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM1FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1FVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1fvEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1FVEXTPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM1FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1FVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform1i(GLuint program, GLint location, GLint v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d)", mCmdIndex++, "glProgramUniform1i", program, location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1i");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1IPROC)(GLuint, GLint, GLint);
    PFNGLPROGRAMUNIFORM1IPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1IPROC>(it->second);
    return next(program, location, v0);
}

void opengl_es_layer_glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRId64 ")", mCmdIndex++, "glProgramUniform1i64NV", program, location, x);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1i64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1I64NVPROC)(GLuint, GLint, GLint64EXT);
    PFNGLPROGRAMUNIFORM1I64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64NVPROC>(it->second);
    return next(program, location, x);
}

void opengl_es_layer_glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1i64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1i64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1I64VNVPROC)(GLuint, GLint, GLsizei, GLint64EXT*);
    PFNGLPROGRAMUNIFORM1I64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform1iEXT(GLuint program, GLint location, GLint v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d)", mCmdIndex++, "glProgramUniform1iEXT", program, location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1iEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1iEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1IEXTPROC)(GLuint, GLint, GLint);
    PFNGLPROGRAMUNIFORM1IEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1IEXTPROC>(it->second);
    return next(program, location, v0);
}

void opengl_es_layer_glProgramUniform1iv(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1iv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1iv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1IVPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM1IVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1IVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1ivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1ivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1ivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1IVEXTPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM1IVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1IVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform1ui(GLuint program, GLint location, GLuint v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u)", mCmdIndex++, "glProgramUniform1ui", program, location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1ui");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1UIPROC)(GLuint, GLint, GLuint);
    PFNGLPROGRAMUNIFORM1UIPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIPROC>(it->second);
    return next(program, location, v0);
}

void opengl_es_layer_glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRIu64 ")", mCmdIndex++, "glProgramUniform1ui64NV", program, location, x);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1ui64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1UI64NVPROC)(GLuint, GLint, GLuint64EXT);
    PFNGLPROGRAMUNIFORM1UI64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64NVPROC>(it->second);
    return next(program, location, x);
}

void opengl_es_layer_glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1ui64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1ui64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1UI64VNVPROC)(GLuint, GLint, GLsizei, GLuint64EXT*);
    PFNGLPROGRAMUNIFORM1UI64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u)", mCmdIndex++, "glProgramUniform1uiEXT", program, location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1uiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1uiEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1UIEXTPROC)(GLuint, GLint, GLuint);
    PFNGLPROGRAMUNIFORM1UIEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIEXTPROC>(it->second);
    return next(program, location, v0);
}

void opengl_es_layer_glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1uiv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1uiv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1UIVPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM1UIVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform1uivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform1uivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform1uivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM1UIVEXTPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM1UIVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f, %f)", mCmdIndex++, "glProgramUniform2f", program, location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2f");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2FPROC)(GLuint, GLint, GLfloat, GLfloat);
    PFNGLPROGRAMUNIFORM2FPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2FPROC>(it->second);
    return next(program, location, v0, v1);
}

void opengl_es_layer_glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f, %f)", mCmdIndex++, "glProgramUniform2fEXT", program, location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2fEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2fEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2FEXTPROC)(GLuint, GLint, GLfloat, GLfloat);
    PFNGLPROGRAMUNIFORM2FEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2FEXTPROC>(it->second);
    return next(program, location, v0, v1);
}

void opengl_es_layer_glProgramUniform2fv(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2fv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2FVPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM2FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2FVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2fvEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2FVEXTPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM2FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2FVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d)", mCmdIndex++, "glProgramUniform2i", program, location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2i");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2IPROC)(GLuint, GLint, GLint, GLint);
    PFNGLPROGRAMUNIFORM2IPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2IPROC>(it->second);
    return next(program, location, v0, v1);
}

void opengl_es_layer_glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRId64 ", %" PRId64 ")", mCmdIndex++, "glProgramUniform2i64NV", program, location, x, y);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2i64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2I64NVPROC)(GLuint, GLint, GLint64EXT, GLint64EXT);
    PFNGLPROGRAMUNIFORM2I64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64NVPROC>(it->second);
    return next(program, location, x, y);
}

void opengl_es_layer_glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2i64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2i64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2I64VNVPROC)(GLuint, GLint, GLsizei, GLint64EXT*);
    PFNGLPROGRAMUNIFORM2I64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d)", mCmdIndex++, "glProgramUniform2iEXT", program, location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2iEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2iEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2IEXTPROC)(GLuint, GLint, GLint, GLint);
    PFNGLPROGRAMUNIFORM2IEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2IEXTPROC>(it->second);
    return next(program, location, v0, v1);
}

void opengl_es_layer_glProgramUniform2iv(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2iv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2iv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2IVPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM2IVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2IVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2ivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2ivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2ivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2IVEXTPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM2IVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2IVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u)", mCmdIndex++, "glProgramUniform2ui", program, location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2ui");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2UIPROC)(GLuint, GLint, GLuint, GLuint);
    PFNGLPROGRAMUNIFORM2UIPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIPROC>(it->second);
    return next(program, location, v0, v1);
}

void opengl_es_layer_glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRIu64 ", %" PRIu64 ")", mCmdIndex++, "glProgramUniform2ui64NV", program, location, x, y);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2ui64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2UI64NVPROC)(GLuint, GLint, GLuint64EXT, GLuint64EXT);
    PFNGLPROGRAMUNIFORM2UI64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64NVPROC>(it->second);
    return next(program, location, x, y);
}

void opengl_es_layer_glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2ui64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2ui64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2UI64VNVPROC)(GLuint, GLint, GLsizei, GLuint64EXT*);
    PFNGLPROGRAMUNIFORM2UI64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u)", mCmdIndex++, "glProgramUniform2uiEXT", program, location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2uiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2uiEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2UIEXTPROC)(GLuint, GLint, GLuint, GLuint);
    PFNGLPROGRAMUNIFORM2UIEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIEXTPROC>(it->second);
    return next(program, location, v0, v1);
}

void opengl_es_layer_glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2uiv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2uiv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2UIVPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM2UIVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform2uivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform2uivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform2uivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM2UIVEXTPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM2UIVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f, %f, %f)", mCmdIndex++, "glProgramUniform3f", program, location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3f");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3FPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat);
    PFNGLPROGRAMUNIFORM3FPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3FPROC>(it->second);
    return next(program, location, v0, v1, v2);
}

void opengl_es_layer_glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f, %f, %f)", mCmdIndex++, "glProgramUniform3fEXT", program, location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3fEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3fEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3FEXTPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat);
    PFNGLPROGRAMUNIFORM3FEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3FEXTPROC>(it->second);
    return next(program, location, v0, v1, v2);
}

void opengl_es_layer_glProgramUniform3fv(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3fv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3FVPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM3FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3FVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3fvEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3FVEXTPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM3FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3FVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d)", mCmdIndex++, "glProgramUniform3i", program, location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3i");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3IPROC)(GLuint, GLint, GLint, GLint, GLint);
    PFNGLPROGRAMUNIFORM3IPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3IPROC>(it->second);
    return next(program, location, v0, v1, v2);
}

void opengl_es_layer_glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRId64 ", %" PRId64 ", %" PRId64 ")", mCmdIndex++, "glProgramUniform3i64NV", program, location, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3i64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3I64NVPROC)(GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT);
    PFNGLPROGRAMUNIFORM3I64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64NVPROC>(it->second);
    return next(program, location, x, y, z);
}

void opengl_es_layer_glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3i64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3i64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3I64VNVPROC)(GLuint, GLint, GLsizei, GLint64EXT*);
    PFNGLPROGRAMUNIFORM3I64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d)", mCmdIndex++, "glProgramUniform3iEXT", program, location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3iEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3iEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3IEXTPROC)(GLuint, GLint, GLint, GLint, GLint);
    PFNGLPROGRAMUNIFORM3IEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3IEXTPROC>(it->second);
    return next(program, location, v0, v1, v2);
}

void opengl_es_layer_glProgramUniform3iv(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3iv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3iv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3IVPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM3IVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3IVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3ivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3ivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3ivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3IVEXTPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM3IVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3IVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u, %u)", mCmdIndex++, "glProgramUniform3ui", program, location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3ui");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3UIPROC)(GLuint, GLint, GLuint, GLuint, GLuint);
    PFNGLPROGRAMUNIFORM3UIPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIPROC>(it->second);
    return next(program, location, v0, v1, v2);
}

void opengl_es_layer_glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRIu64 ", %" PRIu64 ", %" PRIu64 ")", mCmdIndex++, "glProgramUniform3ui64NV", program, location, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3ui64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3UI64NVPROC)(GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT);
    PFNGLPROGRAMUNIFORM3UI64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64NVPROC>(it->second);
    return next(program, location, x, y, z);
}

void opengl_es_layer_glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3ui64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3ui64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3UI64VNVPROC)(GLuint, GLint, GLsizei, GLuint64EXT*);
    PFNGLPROGRAMUNIFORM3UI64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u, %u)", mCmdIndex++, "glProgramUniform3uiEXT", program, location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3uiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3uiEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3UIEXTPROC)(GLuint, GLint, GLuint, GLuint, GLuint);
    PFNGLPROGRAMUNIFORM3UIEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIEXTPROC>(it->second);
    return next(program, location, v0, v1, v2);
}

void opengl_es_layer_glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3uiv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3uiv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3UIVPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM3UIVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform3uivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform3uivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform3uivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM3UIVEXTPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM3UIVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f, %f, %f, %f)", mCmdIndex++, "glProgramUniform4f", program, location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4f");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4FPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLPROGRAMUNIFORM4FPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4FPROC>(it->second);
    return next(program, location, v0, v1, v2, v3);
}

void opengl_es_layer_glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %f, %f, %f, %f)", mCmdIndex++, "glProgramUniform4fEXT", program, location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4fEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4fEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4FEXTPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLPROGRAMUNIFORM4FEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4FEXTPROC>(it->second);
    return next(program, location, v0, v1, v2, v3);
}

void opengl_es_layer_glProgramUniform4fv(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4fv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4FVPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM4FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4FVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4fvEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4FVEXTPROC)(GLuint, GLint, GLsizei, GLfloat*);
    PFNGLPROGRAMUNIFORM4FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4FVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d)", mCmdIndex++, "glProgramUniform4i", program, location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4i");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4IPROC)(GLuint, GLint, GLint, GLint, GLint, GLint);
    PFNGLPROGRAMUNIFORM4IPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4IPROC>(it->second);
    return next(program, location, v0, v1, v2, v3);
}

void opengl_es_layer_glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRId64 ", %" PRId64 ", %" PRId64 ", %" PRId64 ")", mCmdIndex++, "glProgramUniform4i64NV", program, location, x, y, z, w);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4i64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4I64NVPROC)(GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT);
    PFNGLPROGRAMUNIFORM4I64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64NVPROC>(it->second);
    return next(program, location, x, y, z, w);
}

void opengl_es_layer_glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4i64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4i64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4I64VNVPROC)(GLuint, GLint, GLsizei, GLint64EXT*);
    PFNGLPROGRAMUNIFORM4I64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d)", mCmdIndex++, "glProgramUniform4iEXT", program, location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4iEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4iEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4IEXTPROC)(GLuint, GLint, GLint, GLint, GLint, GLint);
    PFNGLPROGRAMUNIFORM4IEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4IEXTPROC>(it->second);
    return next(program, location, v0, v1, v2, v3);
}

void opengl_es_layer_glProgramUniform4iv(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4iv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4iv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4IVPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM4IVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4IVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4ivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4ivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4ivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4IVEXTPROC)(GLuint, GLint, GLsizei, GLint*);
    PFNGLPROGRAMUNIFORM4IVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4IVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u, %u, %u)", mCmdIndex++, "glProgramUniform4ui", program, location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4ui");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4UIPROC)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
    PFNGLPROGRAMUNIFORM4UIPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIPROC>(it->second);
    return next(program, location, v0, v1, v2, v3);
}

void opengl_es_layer_glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRIu64 ", %" PRIu64 ", %" PRIu64 ", %" PRIu64 ")", mCmdIndex++, "glProgramUniform4ui64NV", program, location, x, y, z, w);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4ui64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4UI64NVPROC)(GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT);
    PFNGLPROGRAMUNIFORM4UI64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64NVPROC>(it->second);
    return next(program, location, x, y, z, w);
}

void opengl_es_layer_glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4ui64vNV", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4ui64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4UI64VNVPROC)(GLuint, GLint, GLsizei, GLuint64EXT*);
    PFNGLPROGRAMUNIFORM4UI64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64VNVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u, %u, %u)", mCmdIndex++, "glProgramUniform4uiEXT", program, location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4uiEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4uiEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4UIEXTPROC)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
    PFNGLPROGRAMUNIFORM4UIEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIEXTPROC>(it->second);
    return next(program, location, v0, v1, v2, v3);
}

void opengl_es_layer_glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4uiv", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4uiv");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4UIVPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM4UIVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniform4uivEXT", program, location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniform4uivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniform4uivEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORM4UIVEXTPROC)(GLuint, GLint, GLsizei, GLuint*);
    PFNGLPROGRAMUNIFORM4UIVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVEXTPROC>(it->second);
    return next(program, location, count, value);
}

void opengl_es_layer_glProgramUniformHandleui64IMG(GLuint program, GLint location, GLuint64 value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRIu64 ")", mCmdIndex++, "glProgramUniformHandleui64IMG", program, location, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformHandleui64IMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformHandleui64IMG");
    }

    typedef void (*PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC)(GLuint, GLint, GLuint64);
    PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC>(it->second);
    return next(program, location, value);
}

void opengl_es_layer_glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %" PRIu64 ")", mCmdIndex++, "glProgramUniformHandleui64NV", program, location, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformHandleui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformHandleui64NV");
    }

    typedef void (*PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC)(GLuint, GLint, GLuint64);
    PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC>(it->second);
    return next(program, location, value);
}

void opengl_es_layer_glProgramUniformHandleui64vIMG(GLuint program, GLint location, GLsizei count, GLuint64* values) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniformHandleui64vIMG", program, location, count, values);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformHandleui64vIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformHandleui64vIMG");
    }

    typedef void (*PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC)(GLuint, GLint, GLsizei, GLuint64*);
    PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC>(it->second);
    return next(program, location, count, values);
}

void opengl_es_layer_glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, GLuint64* values) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %p)", mCmdIndex++, "glProgramUniformHandleui64vNV", program, location, count, values);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformHandleui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformHandleui64vNV");
    }

    typedef void (*PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC)(GLuint, GLint, GLsizei, GLuint64*);
    PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC>(it->second);
    return next(program, location, count, values);
}

void opengl_es_layer_glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix2fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix2fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX2FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix2fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix2fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix2fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix2x3fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix2x3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix2x3fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix2x3fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix2x3fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix2x3fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix2x4fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix2x4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix2x4fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix2x4fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix2x4fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix2x4fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix3fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix3fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX3FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix3fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix3fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix3fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix3x2fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix3x2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix3x2fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix3x2fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix3x2fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix3x2fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix3x4fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix3x4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix3x4fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix3x4fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix3x4fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix3x4fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix4fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix4fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX4FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix4fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix4fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix4fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix4x2fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix4x2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix4x2fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix4x2fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix4x2fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix4x2fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix4x3fv", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix4x3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix4x3fv");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %u, %p)", mCmdIndex++, "glProgramUniformMatrix4x3fvEXT", program, location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glProgramUniformMatrix4x3fvEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glProgramUniformMatrix4x3fvEXT");
    }

    typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC next = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC>(it->second);
    return next(program, location, count, transpose, value);
}

void opengl_es_layer_glPushDebugGroup(GLenum source, GLuint id, GLsizei length, GLchar* message) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %s)", mCmdIndex++, "glPushDebugGroup", source, id, length, message);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPushDebugGroup");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPushDebugGroup");
    }

    typedef void (*PFNGLPUSHDEBUGGROUPPROC)(GLenum, GLuint, GLsizei, GLchar*);
    PFNGLPUSHDEBUGGROUPPROC next = reinterpret_cast<PFNGLPUSHDEBUGGROUPPROC>(it->second);
    return next(source, id, length, message);
}

void opengl_es_layer_glPushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, GLchar* message) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %s)", mCmdIndex++, "glPushDebugGroupKHR", source, id, length, message);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPushDebugGroupKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPushDebugGroupKHR");
    }

    typedef void (*PFNGLPUSHDEBUGGROUPKHRPROC)(GLenum, GLuint, GLsizei, GLchar*);
    PFNGLPUSHDEBUGGROUPKHRPROC next = reinterpret_cast<PFNGLPUSHDEBUGGROUPKHRPROC>(it->second);
    return next(source, id, length, message);
}

void opengl_es_layer_glPushGroupMarkerEXT(GLsizei length, GLchar* marker) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %s)", mCmdIndex++, "glPushGroupMarkerEXT", length, marker);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPushGroupMarkerEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPushGroupMarkerEXT");
    }

    typedef void (*PFNGLPUSHGROUPMARKEREXTPROC)(GLsizei, GLchar*);
    PFNGLPUSHGROUPMARKEREXTPROC next = reinterpret_cast<PFNGLPUSHGROUPMARKEREXTPROC>(it->second);
    return next(length, marker);
}

void opengl_es_layer_glPushMatrix(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glPushMatrix");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glPushMatrix");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glPushMatrix");
    }

    typedef void (*PFNGLPUSHMATRIXPROC)(void);
    PFNGLPUSHMATRIXPROC next = reinterpret_cast<PFNGLPUSHMATRIXPROC>(it->second);
    return next();
}

void opengl_es_layer_glQueryCounterEXT(GLuint id, GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glQueryCounterEXT", id, target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glQueryCounterEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glQueryCounterEXT");
    }

    typedef void (*PFNGLQUERYCOUNTEREXTPROC)(GLuint, GLenum);
    PFNGLQUERYCOUNTEREXTPROC next = reinterpret_cast<PFNGLQUERYCOUNTEREXTPROC>(it->second);
    return next(id, target);
}

GLbitfield opengl_es_layer_glQueryMatrixxOES(GLfixed* mantissa, GLint* exponent) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %p)", mCmdIndex++, "glQueryMatrixxOES", mantissa, exponent);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glQueryMatrixxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glQueryMatrixxOES");
    }

    typedef GLbitfield (*PFNGLQUERYMATRIXXOESPROC)(GLfixed*, GLint*);
    PFNGLQUERYMATRIXXOESPROC next = reinterpret_cast<PFNGLQUERYMATRIXXOESPROC>(it->second);
    return next(mantissa, exponent);
}

void opengl_es_layer_glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glRasterSamplesEXT", samples, fixedsamplelocations);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRasterSamplesEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRasterSamplesEXT");
    }

    typedef void (*PFNGLRASTERSAMPLESEXTPROC)(GLuint, GLboolean);
    PFNGLRASTERSAMPLESEXTPROC next = reinterpret_cast<PFNGLRASTERSAMPLESEXTPROC>(it->second);
    return next(samples, fixedsamplelocations);
}

void opengl_es_layer_glReadBuffer(GLenum src) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glReadBuffer", src);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReadBuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReadBuffer");
    }

    typedef void (*PFNGLREADBUFFERPROC)(GLenum);
    PFNGLREADBUFFERPROC next = reinterpret_cast<PFNGLREADBUFFERPROC>(it->second);
    return next(src);
}

void opengl_es_layer_glReadBufferIndexedEXT(GLenum src, GLint index) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d)", mCmdIndex++, "glReadBufferIndexedEXT", src, index);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReadBufferIndexedEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReadBufferIndexedEXT");
    }

    typedef void (*PFNGLREADBUFFERINDEXEDEXTPROC)(GLenum, GLint);
    PFNGLREADBUFFERINDEXEDEXTPROC next = reinterpret_cast<PFNGLREADBUFFERINDEXEDEXTPROC>(it->second);
    return next(src, index);
}

void opengl_es_layer_glReadBufferNV(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glReadBufferNV", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReadBufferNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReadBufferNV");
    }

    typedef void (*PFNGLREADBUFFERNVPROC)(GLenum);
    PFNGLREADBUFFERNVPROC next = reinterpret_cast<PFNGLREADBUFFERNVPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glReadPixels", x, y, width, height, format, type, pixels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReadPixels");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReadPixels");
    }

    typedef void (*PFNGLREADPIXELSPROC)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void*);
    PFNGLREADPIXELSPROC next = reinterpret_cast<PFNGLREADPIXELSPROC>(it->second);
    return next(x, y, width, height, format, type, pixels);
}

void opengl_es_layer_glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %u, %u, %d, %p)", mCmdIndex++, "glReadnPixels", x, y, width, height, format, type, bufSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReadnPixels");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReadnPixels");
    }

    typedef void (*PFNGLREADNPIXELSPROC)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void*);
    PFNGLREADNPIXELSPROC next = reinterpret_cast<PFNGLREADNPIXELSPROC>(it->second);
    return next(x, y, width, height, format, type, bufSize, data);
}

void opengl_es_layer_glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %u, %u, %d, %p)", mCmdIndex++, "glReadnPixelsEXT", x, y, width, height, format, type, bufSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReadnPixelsEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReadnPixelsEXT");
    }

    typedef void (*PFNGLREADNPIXELSEXTPROC)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void*);
    PFNGLREADNPIXELSEXTPROC next = reinterpret_cast<PFNGLREADNPIXELSEXTPROC>(it->second);
    return next(x, y, width, height, format, type, bufSize, data);
}

void opengl_es_layer_glReadnPixelsKHR(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %u, %u, %d, %p)", mCmdIndex++, "glReadnPixelsKHR", x, y, width, height, format, type, bufSize, data);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReadnPixelsKHR");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReadnPixelsKHR");
    }

    typedef void (*PFNGLREADNPIXELSKHRPROC)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void*);
    PFNGLREADNPIXELSKHRPROC next = reinterpret_cast<PFNGLREADNPIXELSKHRPROC>(it->second);
    return next(x, y, width, height, format, type, bufSize, data);
}

void opengl_es_layer_glReleaseShaderCompiler(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glReleaseShaderCompiler");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glReleaseShaderCompiler");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glReleaseShaderCompiler");
    }

    typedef void (*PFNGLRELEASESHADERCOMPILERPROC)(void);
    PFNGLRELEASESHADERCOMPILERPROC next = reinterpret_cast<PFNGLRELEASESHADERCOMPILERPROC>(it->second);
    return next();
}

void opengl_es_layer_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorage", target, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorage");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorage");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEPROC)(GLenum, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC>(it->second);
    return next(target, internalformat, width, height);
}

void opengl_es_layer_glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorageMultisample", target, samples, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorageMultisample");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorageMultisample");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC>(it->second);
    return next(target, samples, internalformat, width, height);
}

void opengl_es_layer_glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorageMultisampleANGLE", target, samples, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorageMultisampleANGLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorageMultisampleANGLE");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC>(it->second);
    return next(target, samples, internalformat, width, height);
}

void opengl_es_layer_glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorageMultisampleAPPLE", target, samples, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorageMultisampleAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorageMultisampleAPPLE");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC>(it->second);
    return next(target, samples, internalformat, width, height);
}

void opengl_es_layer_glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorageMultisampleEXT", target, samples, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorageMultisampleEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorageMultisampleEXT");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(it->second);
    return next(target, samples, internalformat, width, height);
}

void opengl_es_layer_glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorageMultisampleIMG", target, samples, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorageMultisampleIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorageMultisampleIMG");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC>(it->second);
    return next(target, samples, internalformat, width, height);
}

void opengl_es_layer_glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorageMultisampleNV", target, samples, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorageMultisampleNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorageMultisampleNV");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC>(it->second);
    return next(target, samples, internalformat, width, height);
}

void opengl_es_layer_glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %d)", mCmdIndex++, "glRenderbufferStorageOES", target, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRenderbufferStorageOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRenderbufferStorageOES");
    }

    typedef void (*PFNGLRENDERBUFFERSTORAGEOESPROC)(GLenum, GLenum, GLsizei, GLsizei);
    PFNGLRENDERBUFFERSTORAGEOESPROC next = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEOESPROC>(it->second);
    return next(target, internalformat, width, height);
}

void opengl_es_layer_glResolveDepthValuesNV(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glResolveDepthValuesNV");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glResolveDepthValuesNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glResolveDepthValuesNV");
    }

    typedef void (*PFNGLRESOLVEDEPTHVALUESNVPROC)(void);
    PFNGLRESOLVEDEPTHVALUESNVPROC next = reinterpret_cast<PFNGLRESOLVEDEPTHVALUESNVPROC>(it->second);
    return next();
}

void opengl_es_layer_glResolveMultisampleFramebufferAPPLE(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glResolveMultisampleFramebufferAPPLE");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glResolveMultisampleFramebufferAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glResolveMultisampleFramebufferAPPLE");
    }

    typedef void (*PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC)(void);
    PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC next = reinterpret_cast<PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC>(it->second);
    return next();
}

void opengl_es_layer_glResumeTransformFeedback(void ) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s()", mCmdIndex++, "glResumeTransformFeedback");
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glResumeTransformFeedback");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glResumeTransformFeedback");
    }

    typedef void (*PFNGLRESUMETRANSFORMFEEDBACKPROC)(void);
    PFNGLRESUMETRANSFORMFEEDBACKPROC next = reinterpret_cast<PFNGLRESUMETRANSFORMFEEDBACKPROC>(it->second);
    return next();
}

void opengl_es_layer_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f, %f)", mCmdIndex++, "glRotatef", angle, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRotatef");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRotatef");
    }

    typedef void (*PFNGLROTATEFPROC)(GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLROTATEFPROC next = reinterpret_cast<PFNGLROTATEFPROC>(it->second);
    return next(angle, x, y, z);
}

void opengl_es_layer_glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glRotatex", angle, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRotatex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRotatex");
    }

    typedef void (*PFNGLROTATEXPROC)(GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLROTATEXPROC next = reinterpret_cast<PFNGLROTATEXPROC>(it->second);
    return next(angle, x, y, z);
}

void opengl_es_layer_glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glRotatexOES", angle, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glRotatexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glRotatexOES");
    }

    typedef void (*PFNGLROTATEXOESPROC)(GLfixed, GLfixed, GLfixed, GLfixed);
    PFNGLROTATEXOESPROC next = reinterpret_cast<PFNGLROTATEXOESPROC>(it->second);
    return next(angle, x, y, z);
}

void opengl_es_layer_glSampleCoverage(GLfloat value, GLboolean invert) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %u)", mCmdIndex++, "glSampleCoverage", value, invert);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSampleCoverage");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSampleCoverage");
    }

    typedef void (*PFNGLSAMPLECOVERAGEPROC)(GLfloat, GLboolean);
    PFNGLSAMPLECOVERAGEPROC next = reinterpret_cast<PFNGLSAMPLECOVERAGEPROC>(it->second);
    return next(value, invert);
}

void opengl_es_layer_glSampleCoveragex(GLclampx value, GLboolean invert) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u)", mCmdIndex++, "glSampleCoveragex", value, invert);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSampleCoveragex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSampleCoveragex");
    }

    typedef void (*PFNGLSAMPLECOVERAGEXPROC)(GLclampx, GLboolean);
    PFNGLSAMPLECOVERAGEXPROC next = reinterpret_cast<PFNGLSAMPLECOVERAGEXPROC>(it->second);
    return next(value, invert);
}

void opengl_es_layer_glSampleCoveragexOES(GLclampx value, GLboolean invert) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u)", mCmdIndex++, "glSampleCoveragexOES", value, invert);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSampleCoveragexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSampleCoveragexOES");
    }

    typedef void (*PFNGLSAMPLECOVERAGEXOESPROC)(GLclampx, GLboolean);
    PFNGLSAMPLECOVERAGEXOESPROC next = reinterpret_cast<PFNGLSAMPLECOVERAGEXOESPROC>(it->second);
    return next(value, invert);
}

void opengl_es_layer_glSampleMaski(GLuint maskNumber, GLbitfield mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glSampleMaski", maskNumber, mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSampleMaski");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSampleMaski");
    }

    typedef void (*PFNGLSAMPLEMASKIPROC)(GLuint, GLbitfield);
    PFNGLSAMPLEMASKIPROC next = reinterpret_cast<PFNGLSAMPLEMASKIPROC>(it->second);
    return next(maskNumber, mask);
}

void opengl_es_layer_glSamplerParameterIiv(GLuint sampler, GLenum pname, GLint* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameterIiv", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterIiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterIiv");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIIVPROC)(GLuint, GLenum, GLint*);
    PFNGLSAMPLERPARAMETERIIVPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIIVPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameterIivEXT", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterIivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterIivEXT");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIIVEXTPROC)(GLuint, GLenum, GLint*);
    PFNGLSAMPLERPARAMETERIIVEXTPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIIVEXTPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameterIivOES", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterIivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterIivOES");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIIVOESPROC)(GLuint, GLenum, GLint*);
    PFNGLSAMPLERPARAMETERIIVOESPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIIVOESPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameterIuiv", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterIuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterIuiv");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIUIVPROC)(GLuint, GLenum, GLuint*);
    PFNGLSAMPLERPARAMETERIUIVPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameterIuivEXT", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterIuivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterIuivEXT");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLuint*);
    PFNGLSAMPLERPARAMETERIUIVEXTPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVEXTPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameterIuivOES", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterIuivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterIuivOES");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIUIVOESPROC)(GLuint, GLenum, GLuint*);
    PFNGLSAMPLERPARAMETERIUIVOESPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVOESPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f)", mCmdIndex++, "glSamplerParameterf", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterf");
    }

    typedef void (*PFNGLSAMPLERPARAMETERFPROC)(GLuint, GLenum, GLfloat);
    PFNGLSAMPLERPARAMETERFPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERFPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameterfv", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameterfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameterfv");
    }

    typedef void (*PFNGLSAMPLERPARAMETERFVPROC)(GLuint, GLenum, GLfloat*);
    PFNGLSAMPLERPARAMETERFVPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERFVPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glSamplerParameteri", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameteri");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameteri");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIPROC)(GLuint, GLenum, GLint);
    PFNGLSAMPLERPARAMETERIPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glSamplerParameteriv(GLuint sampler, GLenum pname, GLint* param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSamplerParameteriv", sampler, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSamplerParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSamplerParameteriv");
    }

    typedef void (*PFNGLSAMPLERPARAMETERIVPROC)(GLuint, GLenum, GLint*);
    PFNGLSAMPLERPARAMETERIVPROC next = reinterpret_cast<PFNGLSAMPLERPARAMETERIVPROC>(it->second);
    return next(sampler, pname, param);
}

void opengl_es_layer_glScalef(GLfloat x, GLfloat y, GLfloat z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f)", mCmdIndex++, "glScalef", x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScalef");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScalef");
    }

    typedef void (*PFNGLSCALEFPROC)(GLfloat, GLfloat, GLfloat);
    PFNGLSCALEFPROC next = reinterpret_cast<PFNGLSCALEFPROC>(it->second);
    return next(x, y, z);
}

void opengl_es_layer_glScalex(GLfixed x, GLfixed y, GLfixed z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d)", mCmdIndex++, "glScalex", x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScalex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScalex");
    }

    typedef void (*PFNGLSCALEXPROC)(GLfixed, GLfixed, GLfixed);
    PFNGLSCALEXPROC next = reinterpret_cast<PFNGLSCALEXPROC>(it->second);
    return next(x, y, z);
}

void opengl_es_layer_glScalexOES(GLfixed x, GLfixed y, GLfixed z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d)", mCmdIndex++, "glScalexOES", x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScalexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScalexOES");
    }

    typedef void (*PFNGLSCALEXOESPROC)(GLfixed, GLfixed, GLfixed);
    PFNGLSCALEXOESPROC next = reinterpret_cast<PFNGLSCALEXOESPROC>(it->second);
    return next(x, y, z);
}

void opengl_es_layer_glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glScissor", x, y, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScissor");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScissor");
    }

    typedef void (*PFNGLSCISSORPROC)(GLint, GLint, GLsizei, GLsizei);
    PFNGLSCISSORPROC next = reinterpret_cast<PFNGLSCISSORPROC>(it->second);
    return next(x, y, width, height);
}

void opengl_es_layer_glScissorArrayvNV(GLuint first, GLsizei count, GLint* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glScissorArrayvNV", first, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScissorArrayvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScissorArrayvNV");
    }

    typedef void (*PFNGLSCISSORARRAYVNVPROC)(GLuint, GLsizei, GLint*);
    PFNGLSCISSORARRAYVNVPROC next = reinterpret_cast<PFNGLSCISSORARRAYVNVPROC>(it->second);
    return next(first, count, v);
}

void opengl_es_layer_glScissorArrayvOES(GLuint first, GLsizei count, GLint* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glScissorArrayvOES", first, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScissorArrayvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScissorArrayvOES");
    }

    typedef void (*PFNGLSCISSORARRAYVOESPROC)(GLuint, GLsizei, GLint*);
    PFNGLSCISSORARRAYVOESPROC next = reinterpret_cast<PFNGLSCISSORARRAYVOESPROC>(it->second);
    return next(first, count, v);
}

void opengl_es_layer_glScissorIndexedNV(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d)", mCmdIndex++, "glScissorIndexedNV", index, left, bottom, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScissorIndexedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScissorIndexedNV");
    }

    typedef void (*PFNGLSCISSORINDEXEDNVPROC)(GLuint, GLint, GLint, GLsizei, GLsizei);
    PFNGLSCISSORINDEXEDNVPROC next = reinterpret_cast<PFNGLSCISSORINDEXEDNVPROC>(it->second);
    return next(index, left, bottom, width, height);
}

void opengl_es_layer_glScissorIndexedOES(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d)", mCmdIndex++, "glScissorIndexedOES", index, left, bottom, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScissorIndexedOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScissorIndexedOES");
    }

    typedef void (*PFNGLSCISSORINDEXEDOESPROC)(GLuint, GLint, GLint, GLsizei, GLsizei);
    PFNGLSCISSORINDEXEDOESPROC next = reinterpret_cast<PFNGLSCISSORINDEXEDOESPROC>(it->second);
    return next(index, left, bottom, width, height);
}

void opengl_es_layer_glScissorIndexedvNV(GLuint index, GLint* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glScissorIndexedvNV", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScissorIndexedvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScissorIndexedvNV");
    }

    typedef void (*PFNGLSCISSORINDEXEDVNVPROC)(GLuint, GLint*);
    PFNGLSCISSORINDEXEDVNVPROC next = reinterpret_cast<PFNGLSCISSORINDEXEDVNVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glScissorIndexedvOES(GLuint index, GLint* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glScissorIndexedvOES", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glScissorIndexedvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glScissorIndexedvOES");
    }

    typedef void (*PFNGLSCISSORINDEXEDVOESPROC)(GLuint, GLint*);
    PFNGLSCISSORINDEXEDVOESPROC next = reinterpret_cast<PFNGLSCISSORINDEXEDVOESPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint* counterList) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %d, %p)", mCmdIndex++, "glSelectPerfMonitorCountersAMD", monitor, enable, group, numCounters, counterList);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSelectPerfMonitorCountersAMD");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSelectPerfMonitorCountersAMD");
    }

    typedef void (*PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)(GLuint, GLboolean, GLuint, GLint, GLuint*);
    PFNGLSELECTPERFMONITORCOUNTERSAMDPROC next = reinterpret_cast<PFNGLSELECTPERFMONITORCOUNTERSAMDPROC>(it->second);
    return next(monitor, enable, group, numCounters, counterList);
}

void opengl_es_layer_glSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, GLuint64* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glSemaphoreParameterui64vEXT", semaphore, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSemaphoreParameterui64vEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSemaphoreParameterui64vEXT");
    }

    typedef void (*PFNGLSEMAPHOREPARAMETERUI64VEXTPROC)(GLuint, GLenum, GLuint64*);
    PFNGLSEMAPHOREPARAMETERUI64VEXTPROC next = reinterpret_cast<PFNGLSEMAPHOREPARAMETERUI64VEXTPROC>(it->second);
    return next(semaphore, pname, params);
}

void opengl_es_layer_glSetFenceNV(GLuint fence, GLenum condition) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glSetFenceNV", fence, condition);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSetFenceNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSetFenceNV");
    }

    typedef void (*PFNGLSETFENCENVPROC)(GLuint, GLenum);
    PFNGLSETFENCENVPROC next = reinterpret_cast<PFNGLSETFENCENVPROC>(it->second);
    return next(fence, condition);
}

void opengl_es_layer_glShadeModel(GLenum mode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glShadeModel", mode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glShadeModel");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glShadeModel");
    }

    typedef void (*PFNGLSHADEMODELPROC)(GLenum);
    PFNGLSHADEMODELPROC next = reinterpret_cast<PFNGLSHADEMODELPROC>(it->second);
    return next(mode);
}

void opengl_es_layer_glShaderBinary(GLsizei count, GLuint* shaders, GLenum binaryformat, void* binary, GLsizei length) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %p, %u, %p, %d)", mCmdIndex++, "glShaderBinary", count, shaders, binaryformat, binary, length);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glShaderBinary");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glShaderBinary");
    }

    typedef void (*PFNGLSHADERBINARYPROC)(GLsizei, GLuint*, GLenum, void*, GLsizei);
    PFNGLSHADERBINARYPROC next = reinterpret_cast<PFNGLSHADERBINARYPROC>(it->second);
    return next(count, shaders, binaryformat, binary, length);
}

void opengl_es_layer_glShaderSource(GLuint shader, GLsizei count, GLchar** string, GLint* length) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %s, %p)", mCmdIndex++, "glShaderSource", shader, count, *string, length);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glShaderSource");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glShaderSource");
    }

    typedef void (*PFNGLSHADERSOURCEPROC)(GLuint, GLsizei, GLchar**, GLint*);
    PFNGLSHADERSOURCEPROC next = reinterpret_cast<PFNGLSHADERSOURCEPROC>(it->second);
    return next(shader, count, string, length);
}

void opengl_es_layer_glSignalSemaphoreEXT(GLuint semaphore, GLuint numBufferBarriers, GLuint* buffers, GLuint numTextureBarriers, GLuint* textures, GLenum* dstLayouts) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %u, %p, %p)", mCmdIndex++, "glSignalSemaphoreEXT", semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, dstLayouts);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSignalSemaphoreEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSignalSemaphoreEXT");
    }

    typedef void (*PFNGLSIGNALSEMAPHOREEXTPROC)(GLuint, GLuint, GLuint*, GLuint, GLuint*, GLenum*);
    PFNGLSIGNALSEMAPHOREEXTPROC next = reinterpret_cast<PFNGLSIGNALSEMAPHOREEXTPROC>(it->second);
    return next(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, dstLayouts);
}

void opengl_es_layer_glSignalVkFenceNV(GLuint64 vkFence) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glSignalVkFenceNV", vkFence);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSignalVkFenceNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSignalVkFenceNV");
    }

    typedef void (*PFNGLSIGNALVKFENCENVPROC)(GLuint64);
    PFNGLSIGNALVKFENCENVPROC next = reinterpret_cast<PFNGLSIGNALVKFENCENVPROC>(it->second);
    return next(vkFence);
}

void opengl_es_layer_glSignalVkSemaphoreNV(GLuint64 vkSemaphore) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glSignalVkSemaphoreNV", vkSemaphore);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSignalVkSemaphoreNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSignalVkSemaphoreNV");
    }

    typedef void (*PFNGLSIGNALVKSEMAPHORENVPROC)(GLuint64);
    PFNGLSIGNALVKSEMAPHORENVPROC next = reinterpret_cast<PFNGLSIGNALVKSEMAPHORENVPROC>(it->second);
    return next(vkSemaphore);
}

void opengl_es_layer_glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glStartTilingQCOM", x, y, width, height, preserveMask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStartTilingQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStartTilingQCOM");
    }

    typedef void (*PFNGLSTARTTILINGQCOMPROC)(GLuint, GLuint, GLuint, GLuint, GLbitfield);
    PFNGLSTARTTILINGQCOMPROC next = reinterpret_cast<PFNGLSTARTTILINGQCOMPROC>(it->second);
    return next(x, y, width, height, preserveMask);
}

void opengl_es_layer_glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, GLfloat* transformValues) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %p, %u, %u, %u, %u, %p)", mCmdIndex++, "glStencilFillPathInstancedNV", numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilFillPathInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilFillPathInstancedNV");
    }

    typedef void (*PFNGLSTENCILFILLPATHINSTANCEDNVPROC)(GLsizei, GLenum, void*, GLuint, GLenum, GLuint, GLenum, GLfloat*);
    PFNGLSTENCILFILLPATHINSTANCEDNVPROC next = reinterpret_cast<PFNGLSTENCILFILLPATHINSTANCEDNVPROC>(it->second);
    return next(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void opengl_es_layer_glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glStencilFillPathNV", path, fillMode, mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilFillPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilFillPathNV");
    }

    typedef void (*PFNGLSTENCILFILLPATHNVPROC)(GLuint, GLenum, GLuint);
    PFNGLSTENCILFILLPATHNVPROC next = reinterpret_cast<PFNGLSTENCILFILLPATHNVPROC>(it->second);
    return next(path, fillMode, mask);
}

void opengl_es_layer_glStencilFunc(GLenum func, GLint ref, GLuint mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u)", mCmdIndex++, "glStencilFunc", func, ref, mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilFunc");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilFunc");
    }

    typedef void (*PFNGLSTENCILFUNCPROC)(GLenum, GLint, GLuint);
    PFNGLSTENCILFUNCPROC next = reinterpret_cast<PFNGLSTENCILFUNCPROC>(it->second);
    return next(func, ref, mask);
}

void opengl_es_layer_glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %u)", mCmdIndex++, "glStencilFuncSeparate", face, func, ref, mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilFuncSeparate");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilFuncSeparate");
    }

    typedef void (*PFNGLSTENCILFUNCSEPARATEPROC)(GLenum, GLenum, GLint, GLuint);
    PFNGLSTENCILFUNCSEPARATEPROC next = reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC>(it->second);
    return next(face, func, ref, mask);
}

void opengl_es_layer_glStencilMask(GLuint mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glStencilMask", mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilMask");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilMask");
    }

    typedef void (*PFNGLSTENCILMASKPROC)(GLuint);
    PFNGLSTENCILMASKPROC next = reinterpret_cast<PFNGLSTENCILMASKPROC>(it->second);
    return next(mask);
}

void opengl_es_layer_glStencilMaskSeparate(GLenum face, GLuint mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glStencilMaskSeparate", face, mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilMaskSeparate");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilMaskSeparate");
    }

    typedef void (*PFNGLSTENCILMASKSEPARATEPROC)(GLenum, GLuint);
    PFNGLSTENCILMASKSEPARATEPROC next = reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC>(it->second);
    return next(face, mask);
}

void opengl_es_layer_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glStencilOp", fail, zfail, zpass);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilOp");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilOp");
    }

    typedef void (*PFNGLSTENCILOPPROC)(GLenum, GLenum, GLenum);
    PFNGLSTENCILOPPROC next = reinterpret_cast<PFNGLSTENCILOPPROC>(it->second);
    return next(fail, zfail, zpass);
}

void opengl_es_layer_glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glStencilOpSeparate", face, sfail, dpfail, dppass);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilOpSeparate");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilOpSeparate");
    }

    typedef void (*PFNGLSTENCILOPSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum);
    PFNGLSTENCILOPSEPARATEPROC next = reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC>(it->second);
    return next(face, sfail, dpfail, dppass);
}

void opengl_es_layer_glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, GLfloat* transformValues) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %p, %u, %d, %u, %u, %p)", mCmdIndex++, "glStencilStrokePathInstancedNV", numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilStrokePathInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilStrokePathInstancedNV");
    }

    typedef void (*PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC)(GLsizei, GLenum, void*, GLuint, GLint, GLuint, GLenum, GLfloat*);
    PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC next = reinterpret_cast<PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC>(it->second);
    return next(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void opengl_es_layer_glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u)", mCmdIndex++, "glStencilStrokePathNV", path, reference, mask);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilStrokePathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilStrokePathNV");
    }

    typedef void (*PFNGLSTENCILSTROKEPATHNVPROC)(GLuint, GLint, GLuint);
    PFNGLSTENCILSTROKEPATHNVPROC next = reinterpret_cast<PFNGLSTENCILSTROKEPATHNVPROC>(it->second);
    return next(path, reference, mask);
}

void opengl_es_layer_glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, GLfloat* transformValues) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %p, %u, %u, %u, %u, %u, %p)", mCmdIndex++, "glStencilThenCoverFillPathInstancedNV", numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilThenCoverFillPathInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilThenCoverFillPathInstancedNV");
    }

    typedef void (*PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC)(GLsizei, GLenum, void*, GLuint, GLenum, GLuint, GLenum, GLenum, GLfloat*);
    PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC next = reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC>(it->second);
    return next(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void opengl_es_layer_glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u)", mCmdIndex++, "glStencilThenCoverFillPathNV", path, fillMode, mask, coverMode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilThenCoverFillPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilThenCoverFillPathNV");
    }

    typedef void (*PFNGLSTENCILTHENCOVERFILLPATHNVPROC)(GLuint, GLenum, GLuint, GLenum);
    PFNGLSTENCILTHENCOVERFILLPATHNVPROC next = reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHNVPROC>(it->second);
    return next(path, fillMode, mask, coverMode);
}

void opengl_es_layer_glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, void* paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, GLfloat* transformValues) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %p, %u, %d, %u, %u, %u, %p)", mCmdIndex++, "glStencilThenCoverStrokePathInstancedNV", numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilThenCoverStrokePathInstancedNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilThenCoverStrokePathInstancedNV");
    }

    typedef void (*PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC)(GLsizei, GLenum, void*, GLuint, GLint, GLuint, GLenum, GLenum, GLfloat*);
    PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC next = reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC>(it->second);
    return next(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void opengl_es_layer_glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u)", mCmdIndex++, "glStencilThenCoverStrokePathNV", path, reference, mask, coverMode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glStencilThenCoverStrokePathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glStencilThenCoverStrokePathNV");
    }

    typedef void (*PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC)(GLuint, GLint, GLuint, GLenum);
    PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC next = reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC>(it->second);
    return next(path, reference, mask, coverMode);
}

void opengl_es_layer_glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glSubpixelPrecisionBiasNV", xbits, ybits);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glSubpixelPrecisionBiasNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glSubpixelPrecisionBiasNV");
    }

    typedef void (*PFNGLSUBPIXELPRECISIONBIASNVPROC)(GLuint, GLuint);
    PFNGLSUBPIXELPRECISIONBIASNVPROC next = reinterpret_cast<PFNGLSUBPIXELPRECISIONBIASNVPROC>(it->second);
    return next(xbits, ybits);
}

GLboolean opengl_es_layer_glTestFenceNV(GLuint fence) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glTestFenceNV", fence);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTestFenceNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTestFenceNV");
    }

    typedef GLboolean (*PFNGLTESTFENCENVPROC)(GLuint);
    PFNGLTESTFENCENVPROC next = reinterpret_cast<PFNGLTESTFENCENVPROC>(it->second);
    return next(fence);
}

void opengl_es_layer_glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glTexBuffer", target, internalformat, buffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexBuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexBuffer");
    }

    typedef void (*PFNGLTEXBUFFERPROC)(GLenum, GLenum, GLuint);
    PFNGLTEXBUFFERPROC next = reinterpret_cast<PFNGLTEXBUFFERPROC>(it->second);
    return next(target, internalformat, buffer);
}

void opengl_es_layer_glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glTexBufferEXT", target, internalformat, buffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexBufferEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexBufferEXT");
    }

    typedef void (*PFNGLTEXBUFFEREXTPROC)(GLenum, GLenum, GLuint);
    PFNGLTEXBUFFEREXTPROC next = reinterpret_cast<PFNGLTEXBUFFEREXTPROC>(it->second);
    return next(target, internalformat, buffer);
}

void opengl_es_layer_glTexBufferOES(GLenum target, GLenum internalformat, GLuint buffer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glTexBufferOES", target, internalformat, buffer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexBufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexBufferOES");
    }

    typedef void (*PFNGLTEXBUFFEROESPROC)(GLenum, GLenum, GLuint);
    PFNGLTEXBUFFEROESPROC next = reinterpret_cast<PFNGLTEXBUFFEROESPROC>(it->second);
    return next(target, internalformat, buffer);
}

void opengl_es_layer_glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %ld, %ld)", mCmdIndex++, "glTexBufferRange", target, internalformat, buffer, offset, size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexBufferRange");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexBufferRange");
    }

    typedef void (*PFNGLTEXBUFFERRANGEPROC)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
    PFNGLTEXBUFFERRANGEPROC next = reinterpret_cast<PFNGLTEXBUFFERRANGEPROC>(it->second);
    return next(target, internalformat, buffer, offset, size);
}

void opengl_es_layer_glTexBufferRangeEXT(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %ld, %ld)", mCmdIndex++, "glTexBufferRangeEXT", target, internalformat, buffer, offset, size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexBufferRangeEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexBufferRangeEXT");
    }

    typedef void (*PFNGLTEXBUFFERRANGEEXTPROC)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
    PFNGLTEXBUFFERRANGEEXTPROC next = reinterpret_cast<PFNGLTEXBUFFERRANGEEXTPROC>(it->second);
    return next(target, internalformat, buffer, offset, size);
}

void opengl_es_layer_glTexBufferRangeOES(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %ld, %ld)", mCmdIndex++, "glTexBufferRangeOES", target, internalformat, buffer, offset, size);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexBufferRangeOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexBufferRangeOES");
    }

    typedef void (*PFNGLTEXBUFFERRANGEOESPROC)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
    PFNGLTEXBUFFERRANGEOESPROC next = reinterpret_cast<PFNGLTEXBUFFERRANGEOESPROC>(it->second);
    return next(target, internalformat, buffer, offset, size);
}

void opengl_es_layer_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %d, %p)", mCmdIndex++, "glTexCoordPointer", size, type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexCoordPointer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexCoordPointer");
    }

    typedef void (*PFNGLTEXCOORDPOINTERPROC)(GLint, GLenum, GLsizei, void*);
    PFNGLTEXCOORDPOINTERPROC next = reinterpret_cast<PFNGLTEXCOORDPOINTERPROC>(it->second);
    return next(size, type, stride, pointer);
}

void opengl_es_layer_glTexEnvf(GLenum target, GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f)", mCmdIndex++, "glTexEnvf", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnvf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnvf");
    }

    typedef void (*PFNGLTEXENVFPROC)(GLenum, GLenum, GLfloat);
    PFNGLTEXENVFPROC next = reinterpret_cast<PFNGLTEXENVFPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexEnvfv(GLenum target, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexEnvfv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnvfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnvfv");
    }

    typedef void (*PFNGLTEXENVFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLTEXENVFVPROC next = reinterpret_cast<PFNGLTEXENVFVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexEnvi(GLenum target, GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexEnvi", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnvi");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnvi");
    }

    typedef void (*PFNGLTEXENVIPROC)(GLenum, GLenum, GLint);
    PFNGLTEXENVIPROC next = reinterpret_cast<PFNGLTEXENVIPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexEnviv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexEnviv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnviv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnviv");
    }

    typedef void (*PFNGLTEXENVIVPROC)(GLenum, GLenum, GLint*);
    PFNGLTEXENVIVPROC next = reinterpret_cast<PFNGLTEXENVIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexEnvx(GLenum target, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexEnvx", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnvx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnvx");
    }

    typedef void (*PFNGLTEXENVXPROC)(GLenum, GLenum, GLfixed);
    PFNGLTEXENVXPROC next = reinterpret_cast<PFNGLTEXENVXPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexEnvxOES(GLenum target, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexEnvxOES", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnvxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnvxOES");
    }

    typedef void (*PFNGLTEXENVXOESPROC)(GLenum, GLenum, GLfixed);
    PFNGLTEXENVXOESPROC next = reinterpret_cast<PFNGLTEXENVXOESPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexEnvxv(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexEnvxv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnvxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnvxv");
    }

    typedef void (*PFNGLTEXENVXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLTEXENVXVPROC next = reinterpret_cast<PFNGLTEXENVXVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexEnvxvOES(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexEnvxvOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexEnvxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexEnvxvOES");
    }

    typedef void (*PFNGLTEXENVXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLTEXENVXVOESPROC next = reinterpret_cast<PFNGLTEXENVXVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexGenfOES(GLenum coord, GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f)", mCmdIndex++, "glTexGenfOES", coord, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexGenfOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexGenfOES");
    }

    typedef void (*PFNGLTEXGENFOESPROC)(GLenum, GLenum, GLfloat);
    PFNGLTEXGENFOESPROC next = reinterpret_cast<PFNGLTEXGENFOESPROC>(it->second);
    return next(coord, pname, param);
}

void opengl_es_layer_glTexGenfvOES(GLenum coord, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexGenfvOES", coord, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexGenfvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexGenfvOES");
    }

    typedef void (*PFNGLTEXGENFVOESPROC)(GLenum, GLenum, GLfloat*);
    PFNGLTEXGENFVOESPROC next = reinterpret_cast<PFNGLTEXGENFVOESPROC>(it->second);
    return next(coord, pname, params);
}

void opengl_es_layer_glTexGeniOES(GLenum coord, GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexGeniOES", coord, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexGeniOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexGeniOES");
    }

    typedef void (*PFNGLTEXGENIOESPROC)(GLenum, GLenum, GLint);
    PFNGLTEXGENIOESPROC next = reinterpret_cast<PFNGLTEXGENIOESPROC>(it->second);
    return next(coord, pname, param);
}

void opengl_es_layer_glTexGenivOES(GLenum coord, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexGenivOES", coord, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexGenivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexGenivOES");
    }

    typedef void (*PFNGLTEXGENIVOESPROC)(GLenum, GLenum, GLint*);
    PFNGLTEXGENIVOESPROC next = reinterpret_cast<PFNGLTEXGENIVOESPROC>(it->second);
    return next(coord, pname, params);
}

void opengl_es_layer_glTexGenxOES(GLenum coord, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexGenxOES", coord, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexGenxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexGenxOES");
    }

    typedef void (*PFNGLTEXGENXOESPROC)(GLenum, GLenum, GLfixed);
    PFNGLTEXGENXOESPROC next = reinterpret_cast<PFNGLTEXGENXOESPROC>(it->second);
    return next(coord, pname, param);
}

void opengl_es_layer_glTexGenxvOES(GLenum coord, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexGenxvOES", coord, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexGenxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexGenxvOES");
    }

    typedef void (*PFNGLTEXGENXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLTEXGENXVOESPROC next = reinterpret_cast<PFNGLTEXGENXVOESPROC>(it->second);
    return next(coord, pname, params);
}

void opengl_es_layer_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, void* pixels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glTexImage2D", target, level, internalformat, width, height, border, format, type, pixels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexImage2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexImage2D");
    }

    typedef void (*PFNGLTEXIMAGE2DPROC)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, void*);
    PFNGLTEXIMAGE2DPROC next = reinterpret_cast<PFNGLTEXIMAGE2DPROC>(it->second);
    return next(target, level, internalformat, width, height, border, format, type, pixels);
}

void opengl_es_layer_glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void* pixels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glTexImage3D", target, level, internalformat, width, height, depth, border, format, type, pixels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexImage3D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexImage3D");
    }

    typedef void (*PFNGLTEXIMAGE3DPROC)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, void*);
    PFNGLTEXIMAGE3DPROC next = reinterpret_cast<PFNGLTEXIMAGE3DPROC>(it->second);
    return next(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void opengl_es_layer_glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void* pixels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glTexImage3DOES", target, level, internalformat, width, height, depth, border, format, type, pixels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexImage3DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexImage3DOES");
    }

    typedef void (*PFNGLTEXIMAGE3DOESPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, void*);
    PFNGLTEXIMAGE3DOESPROC next = reinterpret_cast<PFNGLTEXIMAGE3DOESPROC>(it->second);
    return next(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void opengl_es_layer_glTexPageCommitmentEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %u)", mCmdIndex++, "glTexPageCommitmentEXT", target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexPageCommitmentEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexPageCommitmentEXT");
    }

    typedef void (*PFNGLTEXPAGECOMMITMENTEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean);
    PFNGLTEXPAGECOMMITMENTEXTPROC next = reinterpret_cast<PFNGLTEXPAGECOMMITMENTEXTPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void opengl_es_layer_glTexParameterIiv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterIiv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterIiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterIiv");
    }

    typedef void (*PFNGLTEXPARAMETERIIVPROC)(GLenum, GLenum, GLint*);
    PFNGLTEXPARAMETERIIVPROC next = reinterpret_cast<PFNGLTEXPARAMETERIIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterIivEXT(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterIivEXT", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterIivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterIivEXT");
    }

    typedef void (*PFNGLTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLint*);
    PFNGLTEXPARAMETERIIVEXTPROC next = reinterpret_cast<PFNGLTEXPARAMETERIIVEXTPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterIivOES(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterIivOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterIivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterIivOES");
    }

    typedef void (*PFNGLTEXPARAMETERIIVOESPROC)(GLenum, GLenum, GLint*);
    PFNGLTEXPARAMETERIIVOESPROC next = reinterpret_cast<PFNGLTEXPARAMETERIIVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterIuiv(GLenum target, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterIuiv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterIuiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterIuiv");
    }

    typedef void (*PFNGLTEXPARAMETERIUIVPROC)(GLenum, GLenum, GLuint*);
    PFNGLTEXPARAMETERIUIVPROC next = reinterpret_cast<PFNGLTEXPARAMETERIUIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterIuivEXT(GLenum target, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterIuivEXT", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterIuivEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterIuivEXT");
    }

    typedef void (*PFNGLTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLuint*);
    PFNGLTEXPARAMETERIUIVEXTPROC next = reinterpret_cast<PFNGLTEXPARAMETERIUIVEXTPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterIuivOES(GLenum target, GLenum pname, GLuint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterIuivOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterIuivOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterIuivOES");
    }

    typedef void (*PFNGLTEXPARAMETERIUIVOESPROC)(GLenum, GLenum, GLuint*);
    PFNGLTEXPARAMETERIUIVOESPROC next = reinterpret_cast<PFNGLTEXPARAMETERIUIVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %f)", mCmdIndex++, "glTexParameterf", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterf");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterf");
    }

    typedef void (*PFNGLTEXPARAMETERFPROC)(GLenum, GLenum, GLfloat);
    PFNGLTEXPARAMETERFPROC next = reinterpret_cast<PFNGLTEXPARAMETERFPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexParameterfv(GLenum target, GLenum pname, GLfloat* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterfv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterfv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterfv");
    }

    typedef void (*PFNGLTEXPARAMETERFVPROC)(GLenum, GLenum, GLfloat*);
    PFNGLTEXPARAMETERFVPROC next = reinterpret_cast<PFNGLTEXPARAMETERFVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameteri(GLenum target, GLenum pname, GLint param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexParameteri", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameteri");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameteri");
    }

    typedef void (*PFNGLTEXPARAMETERIPROC)(GLenum, GLenum, GLint);
    PFNGLTEXPARAMETERIPROC next = reinterpret_cast<PFNGLTEXPARAMETERIPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexParameteriv(GLenum target, GLenum pname, GLint* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameteriv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameteriv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameteriv");
    }

    typedef void (*PFNGLTEXPARAMETERIVPROC)(GLenum, GLenum, GLint*);
    PFNGLTEXPARAMETERIVPROC next = reinterpret_cast<PFNGLTEXPARAMETERIVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterx(GLenum target, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexParameterx", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterx");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterx");
    }

    typedef void (*PFNGLTEXPARAMETERXPROC)(GLenum, GLenum, GLfixed);
    PFNGLTEXPARAMETERXPROC next = reinterpret_cast<PFNGLTEXPARAMETERXPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexParameterxOES(GLenum target, GLenum pname, GLfixed param) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d)", mCmdIndex++, "glTexParameterxOES", target, pname, param);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterxOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterxOES");
    }

    typedef void (*PFNGLTEXPARAMETERXOESPROC)(GLenum, GLenum, GLfixed);
    PFNGLTEXPARAMETERXOESPROC next = reinterpret_cast<PFNGLTEXPARAMETERXOESPROC>(it->second);
    return next(target, pname, param);
}

void opengl_es_layer_glTexParameterxv(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterxv", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterxv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterxv");
    }

    typedef void (*PFNGLTEXPARAMETERXVPROC)(GLenum, GLenum, GLfixed*);
    PFNGLTEXPARAMETERXVPROC next = reinterpret_cast<PFNGLTEXPARAMETERXVPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexParameterxvOES(GLenum target, GLenum pname, GLfixed* params) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p)", mCmdIndex++, "glTexParameterxvOES", target, pname, params);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexParameterxvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexParameterxvOES");
    }

    typedef void (*PFNGLTEXPARAMETERXVOESPROC)(GLenum, GLenum, GLfixed*);
    PFNGLTEXPARAMETERXVOESPROC next = reinterpret_cast<PFNGLTEXPARAMETERXVOESPROC>(it->second);
    return next(target, pname, params);
}

void opengl_es_layer_glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d)", mCmdIndex++, "glTexStorage1DEXT", target, levels, internalformat, width);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage1DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage1DEXT");
    }

    typedef void (*PFNGLTEXSTORAGE1DEXTPROC)(GLenum, GLsizei, GLenum, GLsizei);
    PFNGLTEXSTORAGE1DEXTPROC next = reinterpret_cast<PFNGLTEXSTORAGE1DEXTPROC>(it->second);
    return next(target, levels, internalformat, width);
}

void opengl_es_layer_glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glTexStorage2D", target, levels, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage2D");
    }

    typedef void (*PFNGLTEXSTORAGE2DPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLTEXSTORAGE2DPROC next = reinterpret_cast<PFNGLTEXSTORAGE2DPROC>(it->second);
    return next(target, levels, internalformat, width, height);
}

void opengl_es_layer_glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d)", mCmdIndex++, "glTexStorage2DEXT", target, levels, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage2DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage2DEXT");
    }

    typedef void (*PFNGLTEXSTORAGE2DEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLTEXSTORAGE2DEXTPROC next = reinterpret_cast<PFNGLTEXSTORAGE2DEXTPROC>(it->second);
    return next(target, levels, internalformat, width, height);
}

void opengl_es_layer_glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %u)", mCmdIndex++, "glTexStorage2DMultisample", target, samples, internalformat, width, height, fixedsamplelocations);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage2DMultisample");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage2DMultisample");
    }

    typedef void (*PFNGLTEXSTORAGE2DMULTISAMPLEPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
    PFNGLTEXSTORAGE2DMULTISAMPLEPROC next = reinterpret_cast<PFNGLTEXSTORAGE2DMULTISAMPLEPROC>(it->second);
    return next(target, samples, internalformat, width, height, fixedsamplelocations);
}

void opengl_es_layer_glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d)", mCmdIndex++, "glTexStorage3D", target, levels, internalformat, width, height, depth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage3D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage3D");
    }

    typedef void (*PFNGLTEXSTORAGE3DPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
    PFNGLTEXSTORAGE3DPROC next = reinterpret_cast<PFNGLTEXSTORAGE3DPROC>(it->second);
    return next(target, levels, internalformat, width, height, depth);
}

void opengl_es_layer_glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d)", mCmdIndex++, "glTexStorage3DEXT", target, levels, internalformat, width, height, depth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage3DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage3DEXT");
    }

    typedef void (*PFNGLTEXSTORAGE3DEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
    PFNGLTEXSTORAGE3DEXTPROC next = reinterpret_cast<PFNGLTEXSTORAGE3DEXTPROC>(it->second);
    return next(target, levels, internalformat, width, height, depth);
}

void opengl_es_layer_glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %u)", mCmdIndex++, "glTexStorage3DMultisample", target, samples, internalformat, width, height, depth, fixedsamplelocations);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage3DMultisample");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage3DMultisample");
    }

    typedef void (*PFNGLTEXSTORAGE3DMULTISAMPLEPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
    PFNGLTEXSTORAGE3DMULTISAMPLEPROC next = reinterpret_cast<PFNGLTEXSTORAGE3DMULTISAMPLEPROC>(it->second);
    return next(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void opengl_es_layer_glTexStorage3DMultisampleOES(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %u)", mCmdIndex++, "glTexStorage3DMultisampleOES", target, samples, internalformat, width, height, depth, fixedsamplelocations);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorage3DMultisampleOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorage3DMultisampleOES");
    }

    typedef void (*PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
    PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC next = reinterpret_cast<PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC>(it->second);
    return next(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void opengl_es_layer_glTexStorageMem2DEXT(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %u, %" PRIu64 ")", mCmdIndex++, "glTexStorageMem2DEXT", target, levels, internalFormat, width, height, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorageMem2DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorageMem2DEXT");
    }

    typedef void (*PFNGLTEXSTORAGEMEM2DEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64);
    PFNGLTEXSTORAGEMEM2DEXTPROC next = reinterpret_cast<PFNGLTEXSTORAGEMEM2DEXTPROC>(it->second);
    return next(target, levels, internalFormat, width, height, memory, offset);
}

void opengl_es_layer_glTexStorageMem2DMultisampleEXT(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %u, %u, %" PRIu64 ")", mCmdIndex++, "glTexStorageMem2DMultisampleEXT", target, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorageMem2DMultisampleEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorageMem2DMultisampleEXT");
    }

    typedef void (*PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
    PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC next = reinterpret_cast<PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC>(it->second);
    return next(target, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
}

void opengl_es_layer_glTexStorageMem3DEXT(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %u, %" PRIu64 ")", mCmdIndex++, "glTexStorageMem3DEXT", target, levels, internalFormat, width, height, depth, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorageMem3DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorageMem3DEXT");
    }

    typedef void (*PFNGLTEXSTORAGEMEM3DEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64);
    PFNGLTEXSTORAGEMEM3DEXTPROC next = reinterpret_cast<PFNGLTEXSTORAGEMEM3DEXTPROC>(it->second);
    return next(target, levels, internalFormat, width, height, depth, memory, offset);
}

void opengl_es_layer_glTexStorageMem3DMultisampleEXT(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %u, %u, %" PRIu64 ")", mCmdIndex++, "glTexStorageMem3DMultisampleEXT", target, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexStorageMem3DMultisampleEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexStorageMem3DMultisampleEXT");
    }

    typedef void (*PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
    PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC next = reinterpret_cast<PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC>(it->second);
    return next(target, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
}

void opengl_es_layer_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glTexSubImage2D", target, level, xoffset, yoffset, width, height, format, type, pixels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexSubImage2D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexSubImage2D");
    }

    typedef void (*PFNGLTEXSUBIMAGE2DPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void*);
    PFNGLTEXSUBIMAGE2DPROC next = reinterpret_cast<PFNGLTEXSUBIMAGE2DPROC>(it->second);
    return next(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void opengl_es_layer_glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void* pixels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glTexSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexSubImage3D");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexSubImage3D");
    }

    typedef void (*PFNGLTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void*);
    PFNGLTEXSUBIMAGE3DPROC next = reinterpret_cast<PFNGLTEXSUBIMAGE3DPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void opengl_es_layer_glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void* pixels) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d, %d, %d, %d, %u, %u, %p)", mCmdIndex++, "glTexSubImage3DOES", target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTexSubImage3DOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTexSubImage3DOES");
    }

    typedef void (*PFNGLTEXSUBIMAGE3DOESPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void*);
    PFNGLTEXSUBIMAGE3DOESPROC next = reinterpret_cast<PFNGLTEXSUBIMAGE3DOESPROC>(it->second);
    return next(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void opengl_es_layer_glTextureFoveationParametersQCOM(GLuint texture, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %f, %f, %f, %f, %f)", mCmdIndex++, "glTextureFoveationParametersQCOM", texture, layer, focalPoint, focalX, focalY, gainX, gainY, foveaArea);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureFoveationParametersQCOM");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureFoveationParametersQCOM");
    }

    typedef void (*PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC)(GLuint, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC next = reinterpret_cast<PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC>(it->second);
    return next(texture, layer, focalPoint, focalX, focalY, gainX, gainY, foveaArea);
}

void opengl_es_layer_glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %u, %d)", mCmdIndex++, "glTextureStorage1DEXT", texture, target, levels, internalformat, width);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureStorage1DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureStorage1DEXT");
    }

    typedef void (*PFNGLTEXTURESTORAGE1DEXTPROC)(GLuint, GLenum, GLsizei, GLenum, GLsizei);
    PFNGLTEXTURESTORAGE1DEXTPROC next = reinterpret_cast<PFNGLTEXTURESTORAGE1DEXTPROC>(it->second);
    return next(texture, target, levels, internalformat, width);
}

void opengl_es_layer_glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %u, %d, %d)", mCmdIndex++, "glTextureStorage2DEXT", texture, target, levels, internalformat, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureStorage2DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureStorage2DEXT");
    }

    typedef void (*PFNGLTEXTURESTORAGE2DEXTPROC)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    PFNGLTEXTURESTORAGE2DEXTPROC next = reinterpret_cast<PFNGLTEXTURESTORAGE2DEXTPROC>(it->second);
    return next(texture, target, levels, internalformat, width, height);
}

void opengl_es_layer_glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %d, %u, %d, %d, %d)", mCmdIndex++, "glTextureStorage3DEXT", texture, target, levels, internalformat, width, height, depth);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureStorage3DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureStorage3DEXT");
    }

    typedef void (*PFNGLTEXTURESTORAGE3DEXTPROC)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
    PFNGLTEXTURESTORAGE3DEXTPROC next = reinterpret_cast<PFNGLTEXTURESTORAGE3DEXTPROC>(it->second);
    return next(texture, target, levels, internalformat, width, height, depth);
}

void opengl_es_layer_glTextureStorageMem2DEXT(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %u, %" PRIu64 ")", mCmdIndex++, "glTextureStorageMem2DEXT", texture, levels, internalFormat, width, height, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureStorageMem2DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureStorageMem2DEXT");
    }

    typedef void (*PFNGLTEXTURESTORAGEMEM2DEXTPROC)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64);
    PFNGLTEXTURESTORAGEMEM2DEXTPROC next = reinterpret_cast<PFNGLTEXTURESTORAGEMEM2DEXTPROC>(it->second);
    return next(texture, levels, internalFormat, width, height, memory, offset);
}

void opengl_es_layer_glTextureStorageMem2DMultisampleEXT(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %u, %u, %" PRIu64 ")", mCmdIndex++, "glTextureStorageMem2DMultisampleEXT", texture, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureStorageMem2DMultisampleEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureStorageMem2DMultisampleEXT");
    }

    typedef void (*PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
    PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC next = reinterpret_cast<PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC>(it->second);
    return next(texture, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
}

void opengl_es_layer_glTextureStorageMem3DEXT(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %u, %" PRIu64 ")", mCmdIndex++, "glTextureStorageMem3DEXT", texture, levels, internalFormat, width, height, depth, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureStorageMem3DEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureStorageMem3DEXT");
    }

    typedef void (*PFNGLTEXTURESTORAGEMEM3DEXTPROC)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64);
    PFNGLTEXTURESTORAGEMEM3DEXTPROC next = reinterpret_cast<PFNGLTEXTURESTORAGEMEM3DEXTPROC>(it->second);
    return next(texture, levels, internalFormat, width, height, depth, memory, offset);
}

void opengl_es_layer_glTextureStorageMem3DMultisampleEXT(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %d, %d, %u, %u, %" PRIu64 ")", mCmdIndex++, "glTextureStorageMem3DMultisampleEXT", texture, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureStorageMem3DMultisampleEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureStorageMem3DMultisampleEXT");
    }

    typedef void (*PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
    PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC next = reinterpret_cast<PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC>(it->second);
    return next(texture, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
}

void opengl_es_layer_glTextureViewEXT(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u, %u, %u, %u)", mCmdIndex++, "glTextureViewEXT", texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureViewEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureViewEXT");
    }

    typedef void (*PFNGLTEXTUREVIEWEXTPROC)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint);
    PFNGLTEXTUREVIEWEXTPROC next = reinterpret_cast<PFNGLTEXTUREVIEWEXTPROC>(it->second);
    return next(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void opengl_es_layer_glTextureViewOES(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u, %u, %u, %u)", mCmdIndex++, "glTextureViewOES", texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTextureViewOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTextureViewOES");
    }

    typedef void (*PFNGLTEXTUREVIEWOESPROC)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint);
    PFNGLTEXTUREVIEWOESPROC next = reinterpret_cast<PFNGLTEXTUREVIEWOESPROC>(it->second);
    return next(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void opengl_es_layer_glTransformFeedbackVaryings(GLuint program, GLsizei count, GLchar** varyings, GLenum bufferMode) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %s, %u)", mCmdIndex++, "glTransformFeedbackVaryings", program, count, *varyings, bufferMode);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTransformFeedbackVaryings");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTransformFeedbackVaryings");
    }

    typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint, GLsizei, GLchar**, GLenum);
    PFNGLTRANSFORMFEEDBACKVARYINGSPROC next = reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSPROC>(it->second);
    return next(program, count, varyings, bufferMode);
}

void opengl_es_layer_glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, GLfloat* transformValues) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %p)", mCmdIndex++, "glTransformPathNV", resultPath, srcPath, transformType, transformValues);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTransformPathNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTransformPathNV");
    }

    typedef void (*PFNGLTRANSFORMPATHNVPROC)(GLuint, GLuint, GLenum, GLfloat*);
    PFNGLTRANSFORMPATHNVPROC next = reinterpret_cast<PFNGLTRANSFORMPATHNVPROC>(it->second);
    return next(resultPath, srcPath, transformType, transformValues);
}

void opengl_es_layer_glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%f, %f, %f)", mCmdIndex++, "glTranslatef", x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTranslatef");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTranslatef");
    }

    typedef void (*PFNGLTRANSLATEFPROC)(GLfloat, GLfloat, GLfloat);
    PFNGLTRANSLATEFPROC next = reinterpret_cast<PFNGLTRANSLATEFPROC>(it->second);
    return next(x, y, z);
}

void opengl_es_layer_glTranslatex(GLfixed x, GLfixed y, GLfixed z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d)", mCmdIndex++, "glTranslatex", x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTranslatex");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTranslatex");
    }

    typedef void (*PFNGLTRANSLATEXPROC)(GLfixed, GLfixed, GLfixed);
    PFNGLTRANSLATEXPROC next = reinterpret_cast<PFNGLTRANSLATEXPROC>(it->second);
    return next(x, y, z);
}

void opengl_es_layer_glTranslatexOES(GLfixed x, GLfixed y, GLfixed z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d)", mCmdIndex++, "glTranslatexOES", x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glTranslatexOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glTranslatexOES");
    }

    typedef void (*PFNGLTRANSLATEXOESPROC)(GLfixed, GLfixed, GLfixed);
    PFNGLTRANSLATEXOESPROC next = reinterpret_cast<PFNGLTRANSLATEXOESPROC>(it->second);
    return next(x, y, z);
}

void opengl_es_layer_glUniform1f(GLint location, GLfloat v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %f)", mCmdIndex++, "glUniform1f", location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1f");
    }

    typedef void (*PFNGLUNIFORM1FPROC)(GLint, GLfloat);
    PFNGLUNIFORM1FPROC next = reinterpret_cast<PFNGLUNIFORM1FPROC>(it->second);
    return next(location, v0);
}

void opengl_es_layer_glUniform1fv(GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform1fv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1fv");
    }

    typedef void (*PFNGLUNIFORM1FVPROC)(GLint, GLsizei, GLfloat*);
    PFNGLUNIFORM1FVPROC next = reinterpret_cast<PFNGLUNIFORM1FVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform1i(GLint location, GLint v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d)", mCmdIndex++, "glUniform1i", location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1i");
    }

    typedef void (*PFNGLUNIFORM1IPROC)(GLint, GLint);
    PFNGLUNIFORM1IPROC next = reinterpret_cast<PFNGLUNIFORM1IPROC>(it->second);
    return next(location, v0);
}

void opengl_es_layer_glUniform1i64NV(GLint location, GLint64EXT x) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRId64 ")", mCmdIndex++, "glUniform1i64NV", location, x);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1i64NV");
    }

    typedef void (*PFNGLUNIFORM1I64NVPROC)(GLint, GLint64EXT);
    PFNGLUNIFORM1I64NVPROC next = reinterpret_cast<PFNGLUNIFORM1I64NVPROC>(it->second);
    return next(location, x);
}

void opengl_es_layer_glUniform1i64vNV(GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform1i64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1i64vNV");
    }

    typedef void (*PFNGLUNIFORM1I64VNVPROC)(GLint, GLsizei, GLint64EXT*);
    PFNGLUNIFORM1I64VNVPROC next = reinterpret_cast<PFNGLUNIFORM1I64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform1iv(GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform1iv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1iv");
    }

    typedef void (*PFNGLUNIFORM1IVPROC)(GLint, GLsizei, GLint*);
    PFNGLUNIFORM1IVPROC next = reinterpret_cast<PFNGLUNIFORM1IVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform1ui(GLint location, GLuint v0) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u)", mCmdIndex++, "glUniform1ui", location, v0);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1ui");
    }

    typedef void (*PFNGLUNIFORM1UIPROC)(GLint, GLuint);
    PFNGLUNIFORM1UIPROC next = reinterpret_cast<PFNGLUNIFORM1UIPROC>(it->second);
    return next(location, v0);
}

void opengl_es_layer_glUniform1ui64NV(GLint location, GLuint64EXT x) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRIu64 ")", mCmdIndex++, "glUniform1ui64NV", location, x);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1ui64NV");
    }

    typedef void (*PFNGLUNIFORM1UI64NVPROC)(GLint, GLuint64EXT);
    PFNGLUNIFORM1UI64NVPROC next = reinterpret_cast<PFNGLUNIFORM1UI64NVPROC>(it->second);
    return next(location, x);
}

void opengl_es_layer_glUniform1ui64vNV(GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform1ui64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1ui64vNV");
    }

    typedef void (*PFNGLUNIFORM1UI64VNVPROC)(GLint, GLsizei, GLuint64EXT*);
    PFNGLUNIFORM1UI64VNVPROC next = reinterpret_cast<PFNGLUNIFORM1UI64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform1uiv(GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform1uiv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform1uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform1uiv");
    }

    typedef void (*PFNGLUNIFORM1UIVPROC)(GLint, GLsizei, GLuint*);
    PFNGLUNIFORM1UIVPROC next = reinterpret_cast<PFNGLUNIFORM1UIVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform2f(GLint location, GLfloat v0, GLfloat v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %f, %f)", mCmdIndex++, "glUniform2f", location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2f");
    }

    typedef void (*PFNGLUNIFORM2FPROC)(GLint, GLfloat, GLfloat);
    PFNGLUNIFORM2FPROC next = reinterpret_cast<PFNGLUNIFORM2FPROC>(it->second);
    return next(location, v0, v1);
}

void opengl_es_layer_glUniform2fv(GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform2fv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2fv");
    }

    typedef void (*PFNGLUNIFORM2FVPROC)(GLint, GLsizei, GLfloat*);
    PFNGLUNIFORM2FVPROC next = reinterpret_cast<PFNGLUNIFORM2FVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform2i(GLint location, GLint v0, GLint v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d)", mCmdIndex++, "glUniform2i", location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2i");
    }

    typedef void (*PFNGLUNIFORM2IPROC)(GLint, GLint, GLint);
    PFNGLUNIFORM2IPROC next = reinterpret_cast<PFNGLUNIFORM2IPROC>(it->second);
    return next(location, v0, v1);
}

void opengl_es_layer_glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRId64 ", %" PRId64 ")", mCmdIndex++, "glUniform2i64NV", location, x, y);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2i64NV");
    }

    typedef void (*PFNGLUNIFORM2I64NVPROC)(GLint, GLint64EXT, GLint64EXT);
    PFNGLUNIFORM2I64NVPROC next = reinterpret_cast<PFNGLUNIFORM2I64NVPROC>(it->second);
    return next(location, x, y);
}

void opengl_es_layer_glUniform2i64vNV(GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform2i64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2i64vNV");
    }

    typedef void (*PFNGLUNIFORM2I64VNVPROC)(GLint, GLsizei, GLint64EXT*);
    PFNGLUNIFORM2I64VNVPROC next = reinterpret_cast<PFNGLUNIFORM2I64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform2iv(GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform2iv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2iv");
    }

    typedef void (*PFNGLUNIFORM2IVPROC)(GLint, GLsizei, GLint*);
    PFNGLUNIFORM2IVPROC next = reinterpret_cast<PFNGLUNIFORM2IVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform2ui(GLint location, GLuint v0, GLuint v1) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %u)", mCmdIndex++, "glUniform2ui", location, v0, v1);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2ui");
    }

    typedef void (*PFNGLUNIFORM2UIPROC)(GLint, GLuint, GLuint);
    PFNGLUNIFORM2UIPROC next = reinterpret_cast<PFNGLUNIFORM2UIPROC>(it->second);
    return next(location, v0, v1);
}

void opengl_es_layer_glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRIu64 ", %" PRIu64 ")", mCmdIndex++, "glUniform2ui64NV", location, x, y);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2ui64NV");
    }

    typedef void (*PFNGLUNIFORM2UI64NVPROC)(GLint, GLuint64EXT, GLuint64EXT);
    PFNGLUNIFORM2UI64NVPROC next = reinterpret_cast<PFNGLUNIFORM2UI64NVPROC>(it->second);
    return next(location, x, y);
}

void opengl_es_layer_glUniform2ui64vNV(GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform2ui64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2ui64vNV");
    }

    typedef void (*PFNGLUNIFORM2UI64VNVPROC)(GLint, GLsizei, GLuint64EXT*);
    PFNGLUNIFORM2UI64VNVPROC next = reinterpret_cast<PFNGLUNIFORM2UI64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform2uiv(GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform2uiv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform2uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform2uiv");
    }

    typedef void (*PFNGLUNIFORM2UIVPROC)(GLint, GLsizei, GLuint*);
    PFNGLUNIFORM2UIVPROC next = reinterpret_cast<PFNGLUNIFORM2UIVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %f, %f, %f)", mCmdIndex++, "glUniform3f", location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3f");
    }

    typedef void (*PFNGLUNIFORM3FPROC)(GLint, GLfloat, GLfloat, GLfloat);
    PFNGLUNIFORM3FPROC next = reinterpret_cast<PFNGLUNIFORM3FPROC>(it->second);
    return next(location, v0, v1, v2);
}

void opengl_es_layer_glUniform3fv(GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform3fv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3fv");
    }

    typedef void (*PFNGLUNIFORM3FVPROC)(GLint, GLsizei, GLfloat*);
    PFNGLUNIFORM3FVPROC next = reinterpret_cast<PFNGLUNIFORM3FVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glUniform3i", location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3i");
    }

    typedef void (*PFNGLUNIFORM3IPROC)(GLint, GLint, GLint, GLint);
    PFNGLUNIFORM3IPROC next = reinterpret_cast<PFNGLUNIFORM3IPROC>(it->second);
    return next(location, v0, v1, v2);
}

void opengl_es_layer_glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRId64 ", %" PRId64 ", %" PRId64 ")", mCmdIndex++, "glUniform3i64NV", location, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3i64NV");
    }

    typedef void (*PFNGLUNIFORM3I64NVPROC)(GLint, GLint64EXT, GLint64EXT, GLint64EXT);
    PFNGLUNIFORM3I64NVPROC next = reinterpret_cast<PFNGLUNIFORM3I64NVPROC>(it->second);
    return next(location, x, y, z);
}

void opengl_es_layer_glUniform3i64vNV(GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform3i64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3i64vNV");
    }

    typedef void (*PFNGLUNIFORM3I64VNVPROC)(GLint, GLsizei, GLint64EXT*);
    PFNGLUNIFORM3I64VNVPROC next = reinterpret_cast<PFNGLUNIFORM3I64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform3iv(GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform3iv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3iv");
    }

    typedef void (*PFNGLUNIFORM3IVPROC)(GLint, GLsizei, GLint*);
    PFNGLUNIFORM3IVPROC next = reinterpret_cast<PFNGLUNIFORM3IVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %u, %u)", mCmdIndex++, "glUniform3ui", location, v0, v1, v2);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3ui");
    }

    typedef void (*PFNGLUNIFORM3UIPROC)(GLint, GLuint, GLuint, GLuint);
    PFNGLUNIFORM3UIPROC next = reinterpret_cast<PFNGLUNIFORM3UIPROC>(it->second);
    return next(location, v0, v1, v2);
}

void opengl_es_layer_glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRIu64 ", %" PRIu64 ", %" PRIu64 ")", mCmdIndex++, "glUniform3ui64NV", location, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3ui64NV");
    }

    typedef void (*PFNGLUNIFORM3UI64NVPROC)(GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT);
    PFNGLUNIFORM3UI64NVPROC next = reinterpret_cast<PFNGLUNIFORM3UI64NVPROC>(it->second);
    return next(location, x, y, z);
}

void opengl_es_layer_glUniform3ui64vNV(GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform3ui64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3ui64vNV");
    }

    typedef void (*PFNGLUNIFORM3UI64VNVPROC)(GLint, GLsizei, GLuint64EXT*);
    PFNGLUNIFORM3UI64VNVPROC next = reinterpret_cast<PFNGLUNIFORM3UI64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform3uiv(GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform3uiv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform3uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform3uiv");
    }

    typedef void (*PFNGLUNIFORM3UIVPROC)(GLint, GLsizei, GLuint*);
    PFNGLUNIFORM3UIVPROC next = reinterpret_cast<PFNGLUNIFORM3UIVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %f, %f, %f, %f)", mCmdIndex++, "glUniform4f", location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4f");
    }

    typedef void (*PFNGLUNIFORM4FPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLUNIFORM4FPROC next = reinterpret_cast<PFNGLUNIFORM4FPROC>(it->second);
    return next(location, v0, v1, v2, v3);
}

void opengl_es_layer_glUniform4fv(GLint location, GLsizei count, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform4fv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4fv");
    }

    typedef void (*PFNGLUNIFORM4FVPROC)(GLint, GLsizei, GLfloat*);
    PFNGLUNIFORM4FVPROC next = reinterpret_cast<PFNGLUNIFORM4FVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d, %d)", mCmdIndex++, "glUniform4i", location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4i");
    }

    typedef void (*PFNGLUNIFORM4IPROC)(GLint, GLint, GLint, GLint, GLint);
    PFNGLUNIFORM4IPROC next = reinterpret_cast<PFNGLUNIFORM4IPROC>(it->second);
    return next(location, v0, v1, v2, v3);
}

void opengl_es_layer_glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRId64 ", %" PRId64 ", %" PRId64 ", %" PRId64 ")", mCmdIndex++, "glUniform4i64NV", location, x, y, z, w);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4i64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4i64NV");
    }

    typedef void (*PFNGLUNIFORM4I64NVPROC)(GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT);
    PFNGLUNIFORM4I64NVPROC next = reinterpret_cast<PFNGLUNIFORM4I64NVPROC>(it->second);
    return next(location, x, y, z, w);
}

void opengl_es_layer_glUniform4i64vNV(GLint location, GLsizei count, GLint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform4i64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4i64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4i64vNV");
    }

    typedef void (*PFNGLUNIFORM4I64VNVPROC)(GLint, GLsizei, GLint64EXT*);
    PFNGLUNIFORM4I64VNVPROC next = reinterpret_cast<PFNGLUNIFORM4I64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform4iv(GLint location, GLsizei count, GLint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform4iv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4iv");
    }

    typedef void (*PFNGLUNIFORM4IVPROC)(GLint, GLsizei, GLint*);
    PFNGLUNIFORM4IVPROC next = reinterpret_cast<PFNGLUNIFORM4IVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %u, %u, %u)", mCmdIndex++, "glUniform4ui", location, v0, v1, v2, v3);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4ui");
    }

    typedef void (*PFNGLUNIFORM4UIPROC)(GLint, GLuint, GLuint, GLuint, GLuint);
    PFNGLUNIFORM4UIPROC next = reinterpret_cast<PFNGLUNIFORM4UIPROC>(it->second);
    return next(location, v0, v1, v2, v3);
}

void opengl_es_layer_glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRIu64 ", %" PRIu64 ", %" PRIu64 ", %" PRIu64 ")", mCmdIndex++, "glUniform4ui64NV", location, x, y, z, w);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4ui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4ui64NV");
    }

    typedef void (*PFNGLUNIFORM4UI64NVPROC)(GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT);
    PFNGLUNIFORM4UI64NVPROC next = reinterpret_cast<PFNGLUNIFORM4UI64NVPROC>(it->second);
    return next(location, x, y, z, w);
}

void opengl_es_layer_glUniform4ui64vNV(GLint location, GLsizei count, GLuint64EXT* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform4ui64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4ui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4ui64vNV");
    }

    typedef void (*PFNGLUNIFORM4UI64VNVPROC)(GLint, GLsizei, GLuint64EXT*);
    PFNGLUNIFORM4UI64VNVPROC next = reinterpret_cast<PFNGLUNIFORM4UI64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniform4uiv(GLint location, GLsizei count, GLuint* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniform4uiv", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniform4uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniform4uiv");
    }

    typedef void (*PFNGLUNIFORM4UIVPROC)(GLint, GLsizei, GLuint*);
    PFNGLUNIFORM4UIVPROC next = reinterpret_cast<PFNGLUNIFORM4UIVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glUniformBlockBinding", program, uniformBlockIndex, uniformBlockBinding);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformBlockBinding");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformBlockBinding");
    }

    typedef void (*PFNGLUNIFORMBLOCKBINDINGPROC)(GLuint, GLuint, GLuint);
    PFNGLUNIFORMBLOCKBINDINGPROC next = reinterpret_cast<PFNGLUNIFORMBLOCKBINDINGPROC>(it->second);
    return next(program, uniformBlockIndex, uniformBlockBinding);
}

void opengl_es_layer_glUniformHandleui64IMG(GLint location, GLuint64 value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRIu64 ")", mCmdIndex++, "glUniformHandleui64IMG", location, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformHandleui64IMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformHandleui64IMG");
    }

    typedef void (*PFNGLUNIFORMHANDLEUI64IMGPROC)(GLint, GLuint64);
    PFNGLUNIFORMHANDLEUI64IMGPROC next = reinterpret_cast<PFNGLUNIFORMHANDLEUI64IMGPROC>(it->second);
    return next(location, value);
}

void opengl_es_layer_glUniformHandleui64NV(GLint location, GLuint64 value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %" PRIu64 ")", mCmdIndex++, "glUniformHandleui64NV", location, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformHandleui64NV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformHandleui64NV");
    }

    typedef void (*PFNGLUNIFORMHANDLEUI64NVPROC)(GLint, GLuint64);
    PFNGLUNIFORMHANDLEUI64NVPROC next = reinterpret_cast<PFNGLUNIFORMHANDLEUI64NVPROC>(it->second);
    return next(location, value);
}

void opengl_es_layer_glUniformHandleui64vIMG(GLint location, GLsizei count, GLuint64* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniformHandleui64vIMG", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformHandleui64vIMG");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformHandleui64vIMG");
    }

    typedef void (*PFNGLUNIFORMHANDLEUI64VIMGPROC)(GLint, GLsizei, GLuint64*);
    PFNGLUNIFORMHANDLEUI64VIMGPROC next = reinterpret_cast<PFNGLUNIFORMHANDLEUI64VIMGPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniformHandleui64vNV(GLint location, GLsizei count, GLuint64* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %p)", mCmdIndex++, "glUniformHandleui64vNV", location, count, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformHandleui64vNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformHandleui64vNV");
    }

    typedef void (*PFNGLUNIFORMHANDLEUI64VNVPROC)(GLint, GLsizei, GLuint64*);
    PFNGLUNIFORMHANDLEUI64VNVPROC next = reinterpret_cast<PFNGLUNIFORMHANDLEUI64VNVPROC>(it->second);
    return next(location, count, value);
}

void opengl_es_layer_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix2fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix2fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX2FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX2FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix2x3fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix2x3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix2x3fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX2X3FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX2X3FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix2x3fvNV(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix2x3fvNV", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix2x3fvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix2x3fvNV");
    }

    typedef void (*PFNGLUNIFORMMATRIX2X3FVNVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX2X3FVNVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVNVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix2x4fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix2x4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix2x4fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX2X4FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX2X4FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix2x4fvNV(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix2x4fvNV", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix2x4fvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix2x4fvNV");
    }

    typedef void (*PFNGLUNIFORMMATRIX2X4FVNVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX2X4FVNVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVNVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix3fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix3fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX3FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX3FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix3x2fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix3x2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix3x2fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX3X2FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX3X2FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix3x2fvNV(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix3x2fvNV", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix3x2fvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix3x2fvNV");
    }

    typedef void (*PFNGLUNIFORMMATRIX3X2FVNVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX3X2FVNVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVNVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix3x4fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix3x4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix3x4fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX3X4FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX3X4FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix3x4fvNV(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix3x4fvNV", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix3x4fvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix3x4fvNV");
    }

    typedef void (*PFNGLUNIFORMMATRIX3X4FVNVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX3X4FVNVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVNVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix4fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix4fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX4FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX4FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix4x2fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix4x2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix4x2fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX4X2FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX4X2FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix4x2fvNV(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix4x2fvNV", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix4x2fvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix4x2fvNV");
    }

    typedef void (*PFNGLUNIFORMMATRIX4X2FVNVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX4X2FVNVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVNVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix4x3fv", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix4x3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix4x3fv");
    }

    typedef void (*PFNGLUNIFORMMATRIX4X3FVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX4X3FVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVPROC>(it->second);
    return next(location, count, transpose, value);
}

void opengl_es_layer_glUniformMatrix4x3fvNV(GLint location, GLsizei count, GLboolean transpose, GLfloat* value) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %u, %p)", mCmdIndex++, "glUniformMatrix4x3fvNV", location, count, transpose, value);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUniformMatrix4x3fvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUniformMatrix4x3fvNV");
    }

    typedef void (*PFNGLUNIFORMMATRIX4X3FVNVPROC)(GLint, GLsizei, GLboolean, GLfloat*);
    PFNGLUNIFORMMATRIX4X3FVNVPROC next = reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVNVPROC>(it->second);
    return next(location, count, transpose, value);
}

GLboolean opengl_es_layer_glUnmapBuffer(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glUnmapBuffer", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUnmapBuffer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUnmapBuffer");
    }

    typedef GLboolean (*PFNGLUNMAPBUFFERPROC)(GLenum);
    PFNGLUNMAPBUFFERPROC next = reinterpret_cast<PFNGLUNMAPBUFFERPROC>(it->second);
    return next(target);
}

GLboolean opengl_es_layer_glUnmapBufferOES(GLenum target) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glUnmapBufferOES", target);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUnmapBufferOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUnmapBufferOES");
    }

    typedef GLboolean (*PFNGLUNMAPBUFFEROESPROC)(GLenum);
    PFNGLUNMAPBUFFEROESPROC next = reinterpret_cast<PFNGLUNMAPBUFFEROESPROC>(it->second);
    return next(target);
}

void opengl_es_layer_glUseProgram(GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glUseProgram", program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUseProgram");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUseProgram");
    }

    typedef void (*PFNGLUSEPROGRAMPROC)(GLuint);
    PFNGLUSEPROGRAMPROC next = reinterpret_cast<PFNGLUSEPROGRAMPROC>(it->second);
    return next(program);
}

void opengl_es_layer_glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glUseProgramStages", pipeline, stages, program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUseProgramStages");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUseProgramStages");
    }

    typedef void (*PFNGLUSEPROGRAMSTAGESPROC)(GLuint, GLbitfield, GLuint);
    PFNGLUSEPROGRAMSTAGESPROC next = reinterpret_cast<PFNGLUSEPROGRAMSTAGESPROC>(it->second);
    return next(pipeline, stages, program);
}

void opengl_es_layer_glUseProgramStagesEXT(GLuint pipeline, GLbitfield stages, GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u)", mCmdIndex++, "glUseProgramStagesEXT", pipeline, stages, program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glUseProgramStagesEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glUseProgramStagesEXT");
    }

    typedef void (*PFNGLUSEPROGRAMSTAGESEXTPROC)(GLuint, GLbitfield, GLuint);
    PFNGLUSEPROGRAMSTAGESEXTPROC next = reinterpret_cast<PFNGLUSEPROGRAMSTAGESEXTPROC>(it->second);
    return next(pipeline, stages, program);
}

void opengl_es_layer_glValidateProgram(GLuint program) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glValidateProgram", program);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glValidateProgram");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glValidateProgram");
    }

    typedef void (*PFNGLVALIDATEPROGRAMPROC)(GLuint);
    PFNGLVALIDATEPROGRAMPROC next = reinterpret_cast<PFNGLVALIDATEPROGRAMPROC>(it->second);
    return next(program);
}

void opengl_es_layer_glValidateProgramPipeline(GLuint pipeline) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glValidateProgramPipeline", pipeline);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glValidateProgramPipeline");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glValidateProgramPipeline");
    }

    typedef void (*PFNGLVALIDATEPROGRAMPIPELINEPROC)(GLuint);
    PFNGLVALIDATEPROGRAMPIPELINEPROC next = reinterpret_cast<PFNGLVALIDATEPROGRAMPIPELINEPROC>(it->second);
    return next(pipeline);
}

void opengl_es_layer_glValidateProgramPipelineEXT(GLuint pipeline) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u)", mCmdIndex++, "glValidateProgramPipelineEXT", pipeline);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glValidateProgramPipelineEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glValidateProgramPipelineEXT");
    }

    typedef void (*PFNGLVALIDATEPROGRAMPIPELINEEXTPROC)(GLuint);
    PFNGLVALIDATEPROGRAMPIPELINEEXTPROC next = reinterpret_cast<PFNGLVALIDATEPROGRAMPIPELINEEXTPROC>(it->second);
    return next(pipeline);
}

void opengl_es_layer_glVertexAttrib1f(GLuint index, GLfloat x) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f)", mCmdIndex++, "glVertexAttrib1f", index, x);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib1f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib1f");
    }

    typedef void (*PFNGLVERTEXATTRIB1FPROC)(GLuint, GLfloat);
    PFNGLVERTEXATTRIB1FPROC next = reinterpret_cast<PFNGLVERTEXATTRIB1FPROC>(it->second);
    return next(index, x);
}

void opengl_es_layer_glVertexAttrib1fv(GLuint index, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glVertexAttrib1fv", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib1fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib1fv");
    }

    typedef void (*PFNGLVERTEXATTRIB1FVPROC)(GLuint, GLfloat*);
    PFNGLVERTEXATTRIB1FVPROC next = reinterpret_cast<PFNGLVERTEXATTRIB1FVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f)", mCmdIndex++, "glVertexAttrib2f", index, x, y);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib2f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib2f");
    }

    typedef void (*PFNGLVERTEXATTRIB2FPROC)(GLuint, GLfloat, GLfloat);
    PFNGLVERTEXATTRIB2FPROC next = reinterpret_cast<PFNGLVERTEXATTRIB2FPROC>(it->second);
    return next(index, x, y);
}

void opengl_es_layer_glVertexAttrib2fv(GLuint index, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glVertexAttrib2fv", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib2fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib2fv");
    }

    typedef void (*PFNGLVERTEXATTRIB2FVPROC)(GLuint, GLfloat*);
    PFNGLVERTEXATTRIB2FVPROC next = reinterpret_cast<PFNGLVERTEXATTRIB2FVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f)", mCmdIndex++, "glVertexAttrib3f", index, x, y, z);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib3f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib3f");
    }

    typedef void (*PFNGLVERTEXATTRIB3FPROC)(GLuint, GLfloat, GLfloat, GLfloat);
    PFNGLVERTEXATTRIB3FPROC next = reinterpret_cast<PFNGLVERTEXATTRIB3FPROC>(it->second);
    return next(index, x, y, z);
}

void opengl_es_layer_glVertexAttrib3fv(GLuint index, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glVertexAttrib3fv", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib3fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib3fv");
    }

    typedef void (*PFNGLVERTEXATTRIB3FVPROC)(GLuint, GLfloat*);
    PFNGLVERTEXATTRIB3FVPROC next = reinterpret_cast<PFNGLVERTEXATTRIB3FVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f)", mCmdIndex++, "glVertexAttrib4f", index, x, y, z, w);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib4f");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib4f");
    }

    typedef void (*PFNGLVERTEXATTRIB4FPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLVERTEXATTRIB4FPROC next = reinterpret_cast<PFNGLVERTEXATTRIB4FPROC>(it->second);
    return next(index, x, y, z, w);
}

void opengl_es_layer_glVertexAttrib4fv(GLuint index, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glVertexAttrib4fv", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttrib4fv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttrib4fv");
    }

    typedef void (*PFNGLVERTEXATTRIB4FVPROC)(GLuint, GLfloat*);
    PFNGLVERTEXATTRIB4FVPROC next = reinterpret_cast<PFNGLVERTEXATTRIB4FVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glVertexAttribBinding(GLuint attribindex, GLuint bindingindex) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glVertexAttribBinding", attribindex, bindingindex);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribBinding");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribBinding");
    }

    typedef void (*PFNGLVERTEXATTRIBBINDINGPROC)(GLuint, GLuint);
    PFNGLVERTEXATTRIBBINDINGPROC next = reinterpret_cast<PFNGLVERTEXATTRIBBINDINGPROC>(it->second);
    return next(attribindex, bindingindex);
}

void opengl_es_layer_glVertexAttribDivisor(GLuint index, GLuint divisor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glVertexAttribDivisor", index, divisor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribDivisor");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribDivisor");
    }

    typedef void (*PFNGLVERTEXATTRIBDIVISORPROC)(GLuint, GLuint);
    PFNGLVERTEXATTRIBDIVISORPROC next = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORPROC>(it->second);
    return next(index, divisor);
}

void opengl_es_layer_glVertexAttribDivisorANGLE(GLuint index, GLuint divisor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glVertexAttribDivisorANGLE", index, divisor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribDivisorANGLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribDivisorANGLE");
    }

    typedef void (*PFNGLVERTEXATTRIBDIVISORANGLEPROC)(GLuint, GLuint);
    PFNGLVERTEXATTRIBDIVISORANGLEPROC next = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORANGLEPROC>(it->second);
    return next(index, divisor);
}

void opengl_es_layer_glVertexAttribDivisorEXT(GLuint index, GLuint divisor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glVertexAttribDivisorEXT", index, divisor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribDivisorEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribDivisorEXT");
    }

    typedef void (*PFNGLVERTEXATTRIBDIVISOREXTPROC)(GLuint, GLuint);
    PFNGLVERTEXATTRIBDIVISOREXTPROC next = reinterpret_cast<PFNGLVERTEXATTRIBDIVISOREXTPROC>(it->second);
    return next(index, divisor);
}

void opengl_es_layer_glVertexAttribDivisorNV(GLuint index, GLuint divisor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glVertexAttribDivisorNV", index, divisor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribDivisorNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribDivisorNV");
    }

    typedef void (*PFNGLVERTEXATTRIBDIVISORNVPROC)(GLuint, GLuint);
    PFNGLVERTEXATTRIBDIVISORNVPROC next = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORNVPROC>(it->second);
    return next(index, divisor);
}

void opengl_es_layer_glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u, %u)", mCmdIndex++, "glVertexAttribFormat", attribindex, size, type, normalized, relativeoffset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribFormat");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribFormat");
    }

    typedef void (*PFNGLVERTEXATTRIBFORMATPROC)(GLuint, GLint, GLenum, GLboolean, GLuint);
    PFNGLVERTEXATTRIBFORMATPROC next = reinterpret_cast<PFNGLVERTEXATTRIBFORMATPROC>(it->second);
    return next(attribindex, size, type, normalized, relativeoffset);
}

void opengl_es_layer_glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %d, %d, %d)", mCmdIndex++, "glVertexAttribI4i", index, x, y, z, w);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribI4i");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribI4i");
    }

    typedef void (*PFNGLVERTEXATTRIBI4IPROC)(GLuint, GLint, GLint, GLint, GLint);
    PFNGLVERTEXATTRIBI4IPROC next = reinterpret_cast<PFNGLVERTEXATTRIBI4IPROC>(it->second);
    return next(index, x, y, z, w);
}

void opengl_es_layer_glVertexAttribI4iv(GLuint index, GLint* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glVertexAttribI4iv", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribI4iv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribI4iv");
    }

    typedef void (*PFNGLVERTEXATTRIBI4IVPROC)(GLuint, GLint*);
    PFNGLVERTEXATTRIBI4IVPROC next = reinterpret_cast<PFNGLVERTEXATTRIBI4IVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glVertexAttribI4ui", index, x, y, z, w);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribI4ui");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribI4ui");
    }

    typedef void (*PFNGLVERTEXATTRIBI4UIPROC)(GLuint, GLuint, GLuint, GLuint, GLuint);
    PFNGLVERTEXATTRIBI4UIPROC next = reinterpret_cast<PFNGLVERTEXATTRIBI4UIPROC>(it->second);
    return next(index, x, y, z, w);
}

void opengl_es_layer_glVertexAttribI4uiv(GLuint index, GLuint* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glVertexAttribI4uiv", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribI4uiv");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribI4uiv");
    }

    typedef void (*PFNGLVERTEXATTRIBI4UIVPROC)(GLuint, GLuint*);
    PFNGLVERTEXATTRIBI4UIVPROC next = reinterpret_cast<PFNGLVERTEXATTRIBI4UIVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u)", mCmdIndex++, "glVertexAttribIFormat", attribindex, size, type, relativeoffset);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribIFormat");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribIFormat");
    }

    typedef void (*PFNGLVERTEXATTRIBIFORMATPROC)(GLuint, GLint, GLenum, GLuint);
    PFNGLVERTEXATTRIBIFORMATPROC next = reinterpret_cast<PFNGLVERTEXATTRIBIFORMATPROC>(it->second);
    return next(attribindex, size, type, relativeoffset);
}

void opengl_es_layer_glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %d, %p)", mCmdIndex++, "glVertexAttribIPointer", index, size, type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribIPointer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribIPointer");
    }

    typedef void (*PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint, GLint, GLenum, GLsizei, void*);
    PFNGLVERTEXATTRIBIPOINTERPROC next = reinterpret_cast<PFNGLVERTEXATTRIBIPOINTERPROC>(it->second);
    return next(index, size, type, stride, pointer);
}

void opengl_es_layer_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %u, %u, %d, %p)", mCmdIndex++, "glVertexAttribPointer", index, size, type, normalized, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexAttribPointer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexAttribPointer");
    }

    typedef void (*PFNGLVERTEXATTRIBPOINTERPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, void*);
    PFNGLVERTEXATTRIBPOINTERPROC next = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(it->second);
    return next(index, size, type, normalized, stride, pointer);
}

void opengl_es_layer_glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u)", mCmdIndex++, "glVertexBindingDivisor", bindingindex, divisor);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexBindingDivisor");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexBindingDivisor");
    }

    typedef void (*PFNGLVERTEXBINDINGDIVISORPROC)(GLuint, GLuint);
    PFNGLVERTEXBINDINGDIVISORPROC next = reinterpret_cast<PFNGLVERTEXBINDINGDIVISORPROC>(it->second);
    return next(bindingindex, divisor);
}

void opengl_es_layer_glVertexPointer(GLint size, GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %d, %p)", mCmdIndex++, "glVertexPointer", size, type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glVertexPointer");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glVertexPointer");
    }

    typedef void (*PFNGLVERTEXPOINTERPROC)(GLint, GLenum, GLsizei, void*);
    PFNGLVERTEXPOINTERPROC next = reinterpret_cast<PFNGLVERTEXPOINTERPROC>(it->second);
    return next(size, type, stride, pointer);
}

void opengl_es_layer_glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %d, %d, %d)", mCmdIndex++, "glViewport", x, y, width, height);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewport");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewport");
    }

    typedef void (*PFNGLVIEWPORTPROC)(GLint, GLint, GLsizei, GLsizei);
    PFNGLVIEWPORTPROC next = reinterpret_cast<PFNGLVIEWPORTPROC>(it->second);
    return next(x, y, width, height);
}

void opengl_es_layer_glViewportArrayvNV(GLuint first, GLsizei count, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glViewportArrayvNV", first, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportArrayvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportArrayvNV");
    }

    typedef void (*PFNGLVIEWPORTARRAYVNVPROC)(GLuint, GLsizei, GLfloat*);
    PFNGLVIEWPORTARRAYVNVPROC next = reinterpret_cast<PFNGLVIEWPORTARRAYVNVPROC>(it->second);
    return next(first, count, v);
}

void opengl_es_layer_glViewportArrayvOES(GLuint first, GLsizei count, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glViewportArrayvOES", first, count, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportArrayvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportArrayvOES");
    }

    typedef void (*PFNGLVIEWPORTARRAYVOESPROC)(GLuint, GLsizei, GLfloat*);
    PFNGLVIEWPORTARRAYVOESPROC next = reinterpret_cast<PFNGLVIEWPORTARRAYVOESPROC>(it->second);
    return next(first, count, v);
}

void opengl_es_layer_glViewportIndexedfNV(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f)", mCmdIndex++, "glViewportIndexedfNV", index, x, y, w, h);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportIndexedfNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportIndexedfNV");
    }

    typedef void (*PFNGLVIEWPORTINDEXEDFNVPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLVIEWPORTINDEXEDFNVPROC next = reinterpret_cast<PFNGLVIEWPORTINDEXEDFNVPROC>(it->second);
    return next(index, x, y, w, h);
}

void opengl_es_layer_glViewportIndexedfOES(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f, %f, %f)", mCmdIndex++, "glViewportIndexedfOES", index, x, y, w, h);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportIndexedfOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportIndexedfOES");
    }

    typedef void (*PFNGLVIEWPORTINDEXEDFOESPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
    PFNGLVIEWPORTINDEXEDFOESPROC next = reinterpret_cast<PFNGLVIEWPORTINDEXEDFOESPROC>(it->second);
    return next(index, x, y, w, h);
}

void opengl_es_layer_glViewportIndexedfvNV(GLuint index, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glViewportIndexedfvNV", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportIndexedfvNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportIndexedfvNV");
    }

    typedef void (*PFNGLVIEWPORTINDEXEDFVNVPROC)(GLuint, GLfloat*);
    PFNGLVIEWPORTINDEXEDFVNVPROC next = reinterpret_cast<PFNGLVIEWPORTINDEXEDFVNVPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glViewportIndexedfvOES(GLuint index, GLfloat* v) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %p)", mCmdIndex++, "glViewportIndexedfvOES", index, v);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportIndexedfvOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportIndexedfvOES");
    }

    typedef void (*PFNGLVIEWPORTINDEXEDFVOESPROC)(GLuint, GLfloat*);
    PFNGLVIEWPORTINDEXEDFVOESPROC next = reinterpret_cast<PFNGLVIEWPORTINDEXEDFVOESPROC>(it->second);
    return next(index, v);
}

void opengl_es_layer_glViewportPositionWScaleNV(GLuint index, GLfloat xcoeff, GLfloat ycoeff) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %f, %f)", mCmdIndex++, "glViewportPositionWScaleNV", index, xcoeff, ycoeff);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportPositionWScaleNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportPositionWScaleNV");
    }

    typedef void (*PFNGLVIEWPORTPOSITIONWSCALENVPROC)(GLuint, GLfloat, GLfloat);
    PFNGLVIEWPORTPOSITIONWSCALENVPROC next = reinterpret_cast<PFNGLVIEWPORTPOSITIONWSCALENVPROC>(it->second);
    return next(index, xcoeff, ycoeff);
}

void opengl_es_layer_glViewportSwizzleNV(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %u, %u, %u)", mCmdIndex++, "glViewportSwizzleNV", index, swizzlex, swizzley, swizzlez, swizzlew);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glViewportSwizzleNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glViewportSwizzleNV");
    }

    typedef void (*PFNGLVIEWPORTSWIZZLENVPROC)(GLuint, GLenum, GLenum, GLenum, GLenum);
    PFNGLVIEWPORTSWIZZLENVPROC next = reinterpret_cast<PFNGLVIEWPORTSWIZZLENVPROC>(it->second);
    return next(index, swizzlex, swizzley, swizzlez, swizzlew);
}

void opengl_es_layer_glWaitSemaphoreEXT(GLuint semaphore, GLuint numBufferBarriers, GLuint* buffers, GLuint numTextureBarriers, GLuint* textures, GLenum* srcLayouts) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %u, %p, %u, %p, %p)", mCmdIndex++, "glWaitSemaphoreEXT", semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, srcLayouts);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glWaitSemaphoreEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glWaitSemaphoreEXT");
    }

    typedef void (*PFNGLWAITSEMAPHOREEXTPROC)(GLuint, GLuint, GLuint*, GLuint, GLuint*, GLenum*);
    PFNGLWAITSEMAPHOREEXTPROC next = reinterpret_cast<PFNGLWAITSEMAPHOREEXTPROC>(it->second);
    return next(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, srcLayouts);
}

void opengl_es_layer_glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %" PRIu64 ")", mCmdIndex++, "glWaitSync", sync, flags, timeout);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glWaitSync");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glWaitSync");
    }

    typedef void (*PFNGLWAITSYNCPROC)(GLsync, GLbitfield, GLuint64);
    PFNGLWAITSYNCPROC next = reinterpret_cast<PFNGLWAITSYNCPROC>(it->second);
    return next(sync, flags, timeout);
}

void opengl_es_layer_glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%p, %u, %" PRIu64 ")", mCmdIndex++, "glWaitSyncAPPLE", sync, flags, timeout);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glWaitSyncAPPLE");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glWaitSyncAPPLE");
    }

    typedef void (*PFNGLWAITSYNCAPPLEPROC)(GLsync, GLbitfield, GLuint64);
    PFNGLWAITSYNCAPPLEPROC next = reinterpret_cast<PFNGLWAITSYNCAPPLEPROC>(it->second);
    return next(sync, flags, timeout);
}

void opengl_es_layer_glWaitVkSemaphoreNV(GLuint64 vkSemaphore) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%" PRIu64 ")", mCmdIndex++, "glWaitVkSemaphoreNV", vkSemaphore);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glWaitVkSemaphoreNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glWaitVkSemaphoreNV");
    }

    typedef void (*PFNGLWAITVKSEMAPHORENVPROC)(GLuint64);
    PFNGLWAITVKSEMAPHORENVPROC next = reinterpret_cast<PFNGLWAITVKSEMAPHORENVPROC>(it->second);
    return next(vkSemaphore);
}

void opengl_es_layer_glWeightPathsNV(GLuint resultPath, GLsizei numPaths, GLuint* paths, GLfloat* weights) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p, %p)", mCmdIndex++, "glWeightPathsNV", resultPath, numPaths, paths, weights);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glWeightPathsNV");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glWeightPathsNV");
    }

    typedef void (*PFNGLWEIGHTPATHSNVPROC)(GLuint, GLsizei, GLuint*, GLfloat*);
    PFNGLWEIGHTPATHSNVPROC next = reinterpret_cast<PFNGLWEIGHTPATHSNVPROC>(it->second);
    return next(resultPath, numPaths, paths, weights);
}

void opengl_es_layer_glWeightPointerOES(GLint size, GLenum type, GLsizei stride, void* pointer) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%d, %u, %d, %p)", mCmdIndex++, "glWeightPointerOES", size, type, stride, pointer);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glWeightPointerOES");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glWeightPointerOES");
    }

    typedef void (*PFNGLWEIGHTPOINTEROESPROC)(GLint, GLenum, GLsizei, void*);
    PFNGLWEIGHTPOINTEROESPROC next = reinterpret_cast<PFNGLWEIGHTPOINTEROESPROC>(it->second);
    return next(size, type, stride, pointer);
}

void opengl_es_layer_glWindowRectanglesEXT(GLenum mode, GLsizei count, GLint* box) {
    memset(mDebugMessage, 0, sizeof(mDebugMessage));
    sprintf(mDebugMessage, "%" PRIu64 ": debug_%s(%u, %d, %p)", mCmdIndex++, "glWindowRectanglesEXT", mode, count, box);
    ATRACE_NAME(mDebugMessage);
    logMessage(mDebugMessage);
    auto it = functionMap.find("glWindowRectanglesEXT");
    if (it == functionMap.end()) {
        ALOGE("%s", "Unable to find functionMap entry for glWindowRectanglesEXT");
    }

    typedef void (*PFNGLWINDOWRECTANGLESEXTPROC)(GLenum, GLsizei, GLint*);
    PFNGLWINDOWRECTANGLESEXTPROC next = reinterpret_cast<PFNGLWINDOWRECTANGLESEXTPROC>(it->second);
    return next(mode, count, box);
}

EGLFuncPointer hookFunction(const char* funcName) {
    GETPROCADDR(glCopyBufferSubDataNV)
    GETPROCADDR(glCheckFramebufferStatusOES)
    GETPROCADDR(glBufferStorageMemEXT)
    GETPROCADDR(glEndPerfQueryINTEL)
    GETPROCADDR(glFramebufferTexture3DOES)
    GETPROCADDR(glDrawElementsInstancedBaseInstanceEXT)
    GETPROCADDR(glVertexAttribI4uiv)
    GETPROCADDR(glGetFixedvOES)
    GETPROCADDR(glProgramUniformMatrix2x4fvEXT)
    GETPROCADDR(glClipPlanex)
    GETPROCADDR(glUniform1iv)
    GETPROCADDR(glVertexAttribDivisorANGLE)
    GETPROCADDR(glIsRenderbufferOES)
    GETPROCADDR(glPushDebugGroup)
    GETPROCADDR(eglDestroySync)
    GETPROCADDR(glLineWidth)
    GETPROCADDR(glGetClipPlanexOES)
    GETPROCADDR(glAlphaFuncx)
    GETPROCADDR(glBindRenderbuffer)
    GETPROCADDR(glUniformHandleui64vIMG)
    GETPROCADDR(glAlphaFuncxOES)
    GETPROCADDR(glProgramUniform3uiv)
    GETPROCADDR(glGetCoverageModulationTableNV)
    GETPROCADDR(glTexGeniOES)
    GETPROCADDR(glUniformMatrix4x3fvNV)
    GETPROCADDR(glUseProgramStages)
    GETPROCADDR(glTexBufferRangeEXT)
    GETPROCADDR(glScalexOES)
    GETPROCADDR(glVertexAttribPointer)
    GETPROCADDR(glCoverageMaskNV)
    GETPROCADDR(glProgramUniform1fEXT)
    GETPROCADDR(glGetUnsignedBytei_vEXT)
    GETPROCADDR(glBlendEquationOES)
    GETPROCADDR(glScissorIndexedNV)
    GETPROCADDR(glGenerateMipmapOES)
    GETPROCADDR(glUniform4uiv)
    GETPROCADDR(glShadeModel)
    GETPROCADDR(glProgramUniform1iv)
    GETPROCADDR(eglQueryStringImplementationANDROID)
    GETPROCADDR(glDrawElements)
    GETPROCADDR(eglSurfaceAttrib)
    GETPROCADDR(glGetStringi)
    GETPROCADDR(glSamplerParameterIuivOES)
    GETPROCADDR(glPointParameterfv)
    GETPROCADDR(glCoverFillPathInstancedNV)
    GETPROCADDR(eglWaitGL)
    GETPROCADDR(glBlendFunciEXT)
    GETPROCADDR(eglSwapBuffersWithDamageKHR)
    GETPROCADDR(glCoverageOperationNV)
    GETPROCADDR(glClipControlEXT)
    GETPROCADDR(glGenSemaphoresEXT)
    GETPROCADDR(glClipPlanef)
    GETPROCADDR(eglGetSystemTimeNV)
    GETPROCADDR(glDisableiEXT)
    GETPROCADDR(glBlendFunc)
    GETPROCADDR(glUniformMatrix4x2fvNV)
    GETPROCADDR(glGetPathSpacingNV)
    GETPROCADDR(glFrustumxOES)
    GETPROCADDR(glPointSizexOES)
    GETPROCADDR(glGetFixedv)
    GETPROCADDR(glUniform3iv)
    GETPROCADDR(glClearPixelLocalStorageuiEXT)
    GETPROCADDR(glClipPlanefIMG)
    GETPROCADDR(glGetFragDataIndexEXT)
    GETPROCADDR(glClearTexImageEXT)
    GETPROCADDR(glGenVertexArrays)
    GETPROCADDR(glOrthoxOES)
    GETPROCADDR(glInsertEventMarkerEXT)
    GETPROCADDR(glBindSampler)
    GETPROCADDR(glCompressedTexImage3DOES)
    GETPROCADDR(glCoverFillPathNV)
    GETPROCADDR(glGetQueryObjectui64vEXT)
    GETPROCADDR(glGetObjectPtrLabelKHR)
    GETPROCADDR(glDeleteProgram)
    GETPROCADDR(glEndPerfMonitorAMD)
    GETPROCADDR(glGenFramebuffers)
    GETPROCADDR(glMaterialfv)
    GETPROCADDR(eglQueryAPI)
    GETPROCADDR(glBindFragDataLocationIndexedEXT)
    GETPROCADDR(glGetIntegerv)
    GETPROCADDR(glEGLImageTargetRenderbufferStorageOES)
    GETPROCADDR(glPrimitiveBoundingBoxOES)
    GETPROCADDR(glGetImageHandleNV)
    GETPROCADDR(glGetProgramResourceiv)
    GETPROCADDR(glGenVertexArraysOES)
    GETPROCADDR(glClearColorxOES)
    GETPROCADDR(glMemoryObjectParameterivEXT)
    GETPROCADDR(glMatrixMode)
    GETPROCADDR(glClientActiveTexture)
    GETPROCADDR(glEnableClientState)
    GETPROCADDR(eglWaitSync)
    GETPROCADDR(glIsEnablediNV)
    GETPROCADDR(glIsEnablediEXT)
    GETPROCADDR(glGetFragDataLocation)
    GETPROCADDR(glUniform3i64NV)
    GETPROCADDR(glRenderbufferStorageMultisampleIMG)
    GETPROCADDR(glSignalVkSemaphoreNV)
    GETPROCADDR(glFogfv)
    GETPROCADDR(glReleaseShaderCompiler)
    GETPROCADDR(glGetTexEnviv)
    GETPROCADDR(glCopyImageSubDataEXT)
    GETPROCADDR(glScissorIndexedOES)
    GETPROCADDR(glDeleteVertexArrays)
    GETPROCADDR(glGetVertexAttribIuiv)
    GETPROCADDR(glHint)
    GETPROCADDR(eglMakeCurrent)
    GETPROCADDR(glTexParameterfv)
    GETPROCADDR(glUniformBlockBinding)
    GETPROCADDR(glEnableiNV)
    GETPROCADDR(glCompressedTexSubImage3DOES)
    GETPROCADDR(glDeleteFramebuffers)
    GETPROCADDR(glGetnUniformivKHR)
    GETPROCADDR(glUniform1fv)
    GETPROCADDR(glCheckFramebufferStatus)
    GETPROCADDR(glSamplerParameterIiv)
    GETPROCADDR(glGetShaderiv)
    GETPROCADDR(eglDestroyContext)
    GETPROCADDR(glLoadIdentity)
    GETPROCADDR(glTranslatexOES)
    GETPROCADDR(glDeleteSemaphoresEXT)
    GETPROCADDR(glDrawElementsInstanced)
    GETPROCADDR(glProgramUniform2fEXT)
    GETPROCADDR(glProgramUniformMatrix3x2fvEXT)
    GETPROCADDR(glGetPathCommandsNV)
    GETPROCADDR(glMakeTextureHandleNonResidentNV)
    GETPROCADDR(glGetPerfMonitorGroupStringAMD)
    GETPROCADDR(glGetActiveUniform)
    GETPROCADDR(glResumeTransformFeedback)
    GETPROCADDR(glUniform3i64vNV)
    GETPROCADDR(glGetProgramResourcefvNV)
    GETPROCADDR(glWeightPathsNV)
    GETPROCADDR(glGetProgramBinaryOES)
    GETPROCADDR(glColorMask)
    GETPROCADDR(glReadnPixelsKHR)
    GETPROCADDR(glOrthofOES)
    GETPROCADDR(glBufferStorageEXT)
    GETPROCADDR(glTexEnviv)
    GETPROCADDR(glBindFramebuffer)
    GETPROCADDR(glPathGlyphIndexRangeNV)
    GETPROCADDR(glDrawTransformFeedbackInstancedEXT)
    GETPROCADDR(glDeleteQueries)
    GETPROCADDR(glGetObjectPtrLabel)
    GETPROCADDR(glMultiDrawArraysEXT)
    GETPROCADDR(glUniform2uiv)
    GETPROCADDR(glUniformMatrix3x4fvNV)
    GETPROCADDR(eglGetFrameTimestampsANDROID)
    GETPROCADDR(glGetPathParameterfvNV)
    GETPROCADDR(glVertexAttrib1fv)
    GETPROCADDR(glFenceSyncAPPLE)
    GETPROCADDR(glUniform2i64NV)
    GETPROCADDR(glGetUniformiv)
    GETPROCADDR(eglGetStreamFileDescriptorKHR)
    GETPROCADDR(glTexImage3DOES)
    GETPROCADDR(glBindVertexArray)
    GETPROCADDR(glIsShader)
    GETPROCADDR(glBlendFunci)
    GETPROCADDR(glBeginQuery)
    GETPROCADDR(eglStreamAttribKHR)
    GETPROCADDR(glFrustumfOES)
    GETPROCADDR(glBindTexture)
    GETPROCADDR(glLightModelxvOES)
    GETPROCADDR(glClipPlanexIMG)
    GETPROCADDR(glPolygonOffset)
    GETPROCADDR(glGetShaderInfoLog)
    GETPROCADDR(glDrawBuffersEXT)
    GETPROCADDR(glIsEnabledi)
    GETPROCADDR(glDeleteRenderbuffersOES)
    GETPROCADDR(eglSetSwapRectangleANDROID)
    GETPROCADDR(glGetDebugMessageLog)
    GETPROCADDR(glPointSizex)
    GETPROCADDR(eglGetFrameTimestampSupportedANDROID)
    GETPROCADDR(glBindImageTexture)
    GETPROCADDR(glCreateShaderProgramvEXT)
    GETPROCADDR(glGetnUniformfvKHR)
    GETPROCADDR(glPathGlyphIndexArrayNV)
    GETPROCADDR(glFramebufferTexture)
    GETPROCADDR(glUniform4ui64vNV)
    GETPROCADDR(eglGetNativeClientBufferANDROID)
    GETPROCADDR(glDepthFunc)
    GETPROCADDR(glPointParameterxvOES)
    GETPROCADDR(glGetLightfv)
    GETPROCADDR(glGetClipPlanefOES)
    GETPROCADDR(glUniformMatrix4x3fv)
    GETPROCADDR(glWaitSync)
    GETPROCADDR(glPathCoordsNV)
    GETPROCADDR(eglBindTexImage)
    GETPROCADDR(glGetRenderbufferParameterivOES)
    GETPROCADDR(glViewportIndexedfNV)
    GETPROCADDR(glProgramUniform3ui)
    GETPROCADDR(glTestFenceNV)
    GETPROCADDR(glVertexBindingDivisor)
    GETPROCADDR(glIsPathNV)
    GETPROCADDR(glMinSampleShadingOES)
    GETPROCADDR(glGetMemoryObjectParameterivEXT)
    GETPROCADDR(glMatrixOrthoEXT)
    GETPROCADDR(glProgramUniform3fEXT)
    GETPROCADDR(glExtIsProgramBinaryQCOM)
    GETPROCADDR(glUniform3fv)
    GETPROCADDR(glMultiDrawElementsBaseVertexEXT)
    GETPROCADDR(eglGetRenderBufferANDROID)
    GETPROCADDR(glProgramUniform1uiv)
    GETPROCADDR(glProgramUniformMatrix2x3fvEXT)
    GETPROCADDR(glDebugMessageCallbackKHR)
    GETPROCADDR(glMatrixLoad3x3fNV)
    GETPROCADDR(glProgramUniform4i64vNV)
    GETPROCADDR(glTexEnvfv)
    GETPROCADDR(glGenTransformFeedbacks)
    GETPROCADDR(glDrawRangeElementsBaseVertexEXT)
    GETPROCADDR(glDrawElementsBaseVertexOES)
    GETPROCADDR(glGetObjectLabelEXT)
    GETPROCADDR(eglCreatePbufferFromClientBuffer)
    GETPROCADDR(glEGLImageTargetTextureStorageEXT)
    GETPROCADDR(glImportMemoryFdEXT)
    GETPROCADDR(glStencilMask)
    GETPROCADDR(glVertexAttrib3fv)
    GETPROCADDR(eglGetProcAddress)
    GETPROCADDR(glSignalVkFenceNV)
    GETPROCADDR(glDisableiNV)
    GETPROCADDR(glMatrixMult3x2fNV)
    GETPROCADDR(glBlendEquationSeparate)
    GETPROCADDR(glGetVertexAttribPointerv)
    GETPROCADDR(glGetTextureSamplerHandleIMG)
    GETPROCADDR(glProgramUniform1fvEXT)
    GETPROCADDR(glCoverStrokePathNV)
    GETPROCADDR(glPauseTransformFeedback)
    GETPROCADDR(glGetTextureHandleNV)
    GETPROCADDR(glGetUniformuiv)
    GETPROCADDR(eglTerminate)
    GETPROCADDR(glProgramUniform4fEXT)
    GETPROCADDR(glIsVertexArrayOES)
    GETPROCADDR(glExtGetShadersQCOM)
    GETPROCADDR(glTextureStorageMem3DMultisampleEXT)
    GETPROCADDR(glDrawArraysIndirect)
    GETPROCADDR(glFramebufferTexture2DOES)
    GETPROCADDR(glGetPointerv)
    GETPROCADDR(glCopyTexImage2D)
    GETPROCADDR(glPolygonOffsetx)
    GETPROCADDR(glGetPathMetricsNV)
    GETPROCADDR(glIsPointInFillPathNV)
    GETPROCADDR(glEndTransformFeedback)
    GETPROCADDR(glTexGenxOES)
    GETPROCADDR(glProgramUniformMatrix4x3fv)
    GETPROCADDR(glUniform2i64vNV)
    GETPROCADDR(glActiveShaderProgram)
    GETPROCADDR(glDeleteTextures)
    GETPROCADDR(glUniformMatrix3fv)
    GETPROCADDR(glMultiTexCoord4x)
    GETPROCADDR(glPathGlyphsNV)
    GETPROCADDR(glDrawTexiOES)
    GETPROCADDR(glTexStorage2D)
    GETPROCADDR(glGetUniformIndices)
    GETPROCADDR(glNamedBufferStorageMemEXT)
    GETPROCADDR(glGetSamplerParameterIivEXT)
    GETPROCADDR(glTexGenxvOES)
    GETPROCADDR(glGetUniformfv)
    GETPROCADDR(glIsTransformFeedback)
    GETPROCADDR(glDrawElementsBaseVertex)
    GETPROCADDR(glMultiTexCoord4f)
    GETPROCADDR(glBindProgramPipelineEXT)
    GETPROCADDR(eglPresentationTimeANDROID)
    GETPROCADDR(glDepthRangeIndexedfOES)
    GETPROCADDR(glWaitVkSemaphoreNV)
    GETPROCADDR(glMapBufferRangeEXT)
    GETPROCADDR(glFlushMappedBufferRangeEXT)
    GETPROCADDR(glBlendFuncSeparateiOES)
    GETPROCADDR(glDrawRangeElements)
    GETPROCADDR(glTexStorage3D)
    GETPROCADDR(glProgramUniform1ui)
    GETPROCADDR(glGetSamplerParameterIuivOES)
    GETPROCADDR(glVertexAttribDivisorNV)
    GETPROCADDR(glDiscardFramebufferEXT)
    GETPROCADDR(glGenQueries)
    GETPROCADDR(glIsMemoryObjectEXT)
    GETPROCADDR(glFlush)
    GETPROCADDR(glGetProgramResourceLocationIndexEXT)
    GETPROCADDR(glUniformMatrix2x4fv)
    GETPROCADDR(glDepthRangeIndexedfNV)
    GETPROCADDR(glProgramUniform3ui64vNV)
    GETPROCADDR(glProgramUniformHandleui64NV)
    GETPROCADDR(glGetTranslatedShaderSourceANGLE)
    GETPROCADDR(eglStreamConsumerGLTextureExternalKHR)
    GETPROCADDR(glGetString)
    GETPROCADDR(glFramebufferTexture2DMultisampleIMG)
    GETPROCADDR(glPathCoverDepthFuncNV)
    GETPROCADDR(glUniformMatrix3x2fv)
    GETPROCADDR(glGetSamplerParameterIivOES)
    GETPROCADDR(glLightxv)
    GETPROCADDR(glClipPlanefOES)
    GETPROCADDR(glInvalidateFramebuffer)
    GETPROCADDR(glRenderbufferStorage)
    GETPROCADDR(glWaitSemaphoreEXT)
    GETPROCADDR(glGetMaterialfv)
    GETPROCADDR(eglDestroySyncKHR)
    GETPROCADDR(glGetActiveUniformBlockiv)
    GETPROCADDR(glTextureStorageMem2DEXT)
    GETPROCADDR(glPathStencilFuncNV)
    GETPROCADDR(glProgramUniformMatrix2fv)
    GETPROCADDR(glProgramUniformHandleui64IMG)
    GETPROCADDR(glSampleCoveragex)
    GETPROCADDR(glGetBooleani_v)
    GETPROCADDR(glGetQueryiv)
    GETPROCADDR(glGetPerfQueryInfoINTEL)
    GETPROCADDR(glClearDepthxOES)
    GETPROCADDR(glUseProgramStagesEXT)
    GETPROCADDR(glStencilStrokePathNV)
    GETPROCADDR(glGetInteger64v)
    GETPROCADDR(glSamplerParameterIivOES)
    GETPROCADDR(eglDestroyImageKHR)
    GETPROCADDR(glGetTexParameterIuivEXT)
    GETPROCADDR(glDrawArraysInstancedNV)
    GETPROCADDR(glTexParameterf)
    GETPROCADDR(glAlphaFuncQCOM)
    GETPROCADDR(glGetInteger64vAPPLE)
    GETPROCADDR(glGetSynciv)
    GETPROCADDR(glDeleteMemoryObjectsEXT)
    GETPROCADDR(glIsBuffer)
    GETPROCADDR(glLoadMatrixx)
    GETPROCADDR(eglWaitNative)
    GETPROCADDR(glProgramUniform1ui64NV)
    GETPROCADDR(glExtTexObjectStateOverrideiQCOM)
    GETPROCADDR(eglSetDamageRegionKHR)
    GETPROCADDR(glMinSampleShading)
    GETPROCADDR(glPointParameterxv)
    GETPROCADDR(eglCreatePixmapSurface)
    GETPROCADDR(glViewportPositionWScaleNV)
    GETPROCADDR(eglDupNativeFenceFDANDROID)
    GETPROCADDR(glExtGetProgramBinarySourceQCOM)
    GETPROCADDR(glValidateProgram)
    GETPROCADDR(glImportSemaphoreFdEXT)
    GETPROCADDR(glGenBuffers)
    GETPROCADDR(glTextureStorage3DEXT)
    GETPROCADDR(glGetDriverControlStringQCOM)
    GETPROCADDR(glLoadMatrixf)
    GETPROCADDR(eglCreateSync)
    GETPROCADDR(glFramebufferParameteri)
    GETPROCADDR(glProgramUniform1uiEXT)
    GETPROCADDR(glTextureStorageMem3DEXT)
    GETPROCADDR(glDeleteVertexArraysOES)
    GETPROCADDR(eglCreatePlatformWindowSurfaceEXT)
    GETPROCADDR(glProgramUniformMatrix2x3fv)
    GETPROCADDR(eglCreateNativeClientBufferANDROID)
    GETPROCADDR(glCurrentPaletteMatrixOES)
    GETPROCADDR(glFramebufferTextureOES)
    GETPROCADDR(glGetPerfMonitorCountersAMD)
    GETPROCADDR(glTexStorageMem2DEXT)
    GETPROCADDR(glDrawTransformFeedbackEXT)
    GETPROCADDR(glTexStorage3DMultisampleOES)
    GETPROCADDR(glGetLightxvOES)
    GETPROCADDR(glPolygonOffsetxOES)
    GETPROCADDR(glProgramUniform3i64vNV)
    GETPROCADDR(glCreateShaderProgramv)
    GETPROCADDR(glDrawElementsInstancedBaseVertexBaseInstanceEXT)
    GETPROCADDR(glMultiDrawElementsIndirectEXT)
    GETPROCADDR(glProgramUniformMatrix4fv)
    GETPROCADDR(glFramebufferTextureLayer)
    GETPROCADDR(glGetTransformFeedbackVarying)
    GETPROCADDR(eglCopyBuffers)
    GETPROCADDR(glUniformHandleui64NV)
    GETPROCADDR(glGetTexParameterxv)
    GETPROCADDR(glSubpixelPrecisionBiasNV)
    GETPROCADDR(glSelectPerfMonitorCountersAMD)
    GETPROCADDR(glProgramParameteri)
    GETPROCADDR(glFogxv)
    GETPROCADDR(glProgramUniform2uiEXT)
    GETPROCADDR(glSampleCoveragexOES)
    GETPROCADDR(glUniform1ui)
    GETPROCADDR(glColorPointer)
    GETPROCADDR(glGetTexParameterIivOES)
    GETPROCADDR(glProgramUniform4uivEXT)
    GETPROCADDR(glDeleteFencesNV)
    GETPROCADDR(glPathCommandsNV)
    GETPROCADDR(glViewportArrayvNV)
    GETPROCADDR(glClearBufferuiv)
    GETPROCADDR(glGetSamplerParameterIiv)
    GETPROCADDR(glGetDebugMessageLogKHR)
    GETPROCADDR(glTexEnvxOES)
    GETPROCADDR(glDepthRangeArrayfvOES)
    GETPROCADDR(glTexParameteri)
    GETPROCADDR(glQueryCounterEXT)
    GETPROCADDR(glBindBufferBase)
    GETPROCADDR(glDrawTexfOES)
    GETPROCADDR(glBlendBarrier)
    GETPROCADDR(glTexParameterx)
    GETPROCADDR(glCopyTexSubImage3DOES)
    GETPROCADDR(glWeightPointerOES)
    GETPROCADDR(glUniformMatrix3x2fvNV)
    GETPROCADDR(glProgramUniform1i64vNV)
    GETPROCADDR(glTextureViewOES)
    GETPROCADDR(glGetPathDashArrayNV)
    GETPROCADDR(glCreateProgram)
    GETPROCADDR(glDrawTexfvOES)
    GETPROCADDR(glPathGlyphRangeNV)
    GETPROCADDR(glBlendBarrierKHR)
    GETPROCADDR(glGetBufferPointerv)
    GETPROCADDR(glDrawVkImageNV)
    GETPROCADDR(glPopDebugGroupKHR)
    GETPROCADDR(glTexStorageMem3DEXT)
    GETPROCADDR(glSignalSemaphoreEXT)
    GETPROCADDR(glStencilFillPathNV)
    GETPROCADDR(glProgramBinaryOES)
    GETPROCADDR(glGetError)
    GETPROCADDR(glGetTexGenivOES)
    GETPROCADDR(glProgramUniform3fv)
    GETPROCADDR(glEndConditionalRenderNV)
    GETPROCADDR(glProgramUniform3i64NV)
    GETPROCADDR(eglSwapBuffers)
    GETPROCADDR(glDepthRangex)
    GETPROCADDR(glDrawElementsInstancedBaseVertexOES)
    GETPROCADDR(glPatchParameteri)
    GETPROCADDR(glCullFace)
    GETPROCADDR(glGetGraphicsResetStatus)
    GETPROCADDR(glLightx)
    GETPROCADDR(glTexGenfOES)
    GETPROCADDR(glGetFramebufferAttachmentParameterivOES)
    GETPROCADDR(glDrawTexxOES)
    GETPROCADDR(glBlendBarrierNV)
    GETPROCADDR(eglGetCurrentSurface)
    GETPROCADDR(glBindBufferRange)
    GETPROCADDR(glLightxOES)
    GETPROCADDR(glMultMatrixf)
    GETPROCADDR(glProgramUniform3uivEXT)
    GETPROCADDR(glDepthRangef)
    GETPROCADDR(eglDestroySurface)
    GETPROCADDR(glDisable)
    GETPROCADDR(glLogicOp)
    GETPROCADDR(glUniform3ui)
    GETPROCADDR(glProgramUniformHandleui64vNV)
    GETPROCADDR(glMatrixScaledEXT)
    GETPROCADDR(glMultMatrixx)
    GETPROCADDR(glPathSubCoordsNV)
    GETPROCADDR(glScissor)
    GETPROCADDR(glDrawArraysInstancedEXT)
    GETPROCADDR(glProgramUniform1f)
    GETPROCADDR(glProgramUniform1i)
    GETPROCADDR(glLightf)
    GETPROCADDR(glBlendEquationiEXT)
    GETPROCADDR(eglGetCurrentContext)
    GETPROCADDR(glDebugMessageControlKHR)
    GETPROCADDR(glGetFenceivNV)
    GETPROCADDR(glGetVkProcAddrNV)
    GETPROCADDR(glUniform4f)
    GETPROCADDR(glColor4ub)
    GETPROCADDR(glUniform4i)
    GETPROCADDR(glClientWaitSyncAPPLE)
    GETPROCADDR(glGetBufferParameteri64v)
    GETPROCADDR(glActiveShaderProgramEXT)
    GETPROCADDR(glClientWaitSync)
    GETPROCADDR(glDebugMessageInsert)
    GETPROCADDR(glTexParameterIivEXT)
    GETPROCADDR(glBeginConditionalRenderNV)
    GETPROCADDR(glBlendEquationSeparatei)
    GETPROCADDR(glEnableiEXT)
    GETPROCADDR(glDeleteRenderbuffers)
    GETPROCADDR(eglQueryContext)
    GETPROCADDR(eglCreatePlatformWindowSurface)
    GETPROCADDR(glColor4xOES)
    GETPROCADDR(glProgramUniformMatrix2fvEXT)
    GETPROCADDR(glPushGroupMarkerEXT)
    GETPROCADDR(glFramebufferFetchBarrierQCOM)
    GETPROCADDR(glGenRenderbuffersOES)
    GETPROCADDR(glGetTexEnvfv)
    GETPROCADDR(glPatchParameteriEXT)
    GETPROCADDR(glTexPageCommitmentEXT)
    GETPROCADDR(glTexGenivOES)
    GETPROCADDR(glGetProgramiv)
    GETPROCADDR(glProgramUniform2uivEXT)
    GETPROCADDR(glGetRenderbufferParameteriv)
    GETPROCADDR(glProgramUniform1fv)
    GETPROCADDR(glGetnUniformivEXT)
    GETPROCADDR(glMatrixMultdEXT)
    GETPROCADDR(glDeleteFramebuffersOES)
    GETPROCADDR(glDrawArraysInstancedANGLE)
    GETPROCADDR(glProgramUniform4uiv)
    GETPROCADDR(glTexBufferOES)
    GETPROCADDR(glStencilStrokePathInstancedNV)
    GETPROCADDR(glGenTextures)
    GETPROCADDR(glLabelObjectEXT)
    GETPROCADDR(eglBeginFrame)
    GETPROCADDR(glGetShaderPrecisionFormat)
    GETPROCADDR(glMatrixScalefEXT)
    GETPROCADDR(glAttachShader)
    GETPROCADDR(glPopDebugGroup)
    GETPROCADDR(eglQuerySurface)
    GETPROCADDR(glProgramUniform1uivEXT)
    GETPROCADDR(glMemoryBarrierByRegion)
    GETPROCADDR(glPopGroupMarkerEXT)
    GETPROCADDR(glGenPathsNV)
    GETPROCADDR(glMaterialf)
    GETPROCADDR(glProgramUniform3ui64NV)
    GETPROCADDR(glExtGetBuffersQCOM)
    GETPROCADDR(glMaterialxOES)
    GETPROCADDR(glGetProgramResourceLocation)
    GETPROCADDR(glMaxShaderCompilerThreadsKHR)
    GETPROCADDR(glGetnUniformiv)
    GETPROCADDR(glTexCoordPointer)
    GETPROCADDR(glProgramUniform2fvEXT)
    GETPROCADDR(glDrawTexivOES)
    GETPROCADDR(glColorMaskiEXT)
    GETPROCADDR(glTexParameterIuivOES)
    GETPROCADDR(glBlendFunciOES)
    GETPROCADDR(glGenFencesNV)
    GETPROCADDR(glViewportArrayvOES)
    GETPROCADDR(glMaterialx)
    GETPROCADDR(glProgramUniform4ui64NV)
    GETPROCADDR(glDebugMessageControl)
    GETPROCADDR(glGetFramebufferParameteriv)
    GETPROCADDR(glDeleteProgramPipelines)
    GETPROCADDR(glGetActiveUniformBlockName)
    GETPROCADDR(glRenderbufferStorageMultisampleAPPLE)
    GETPROCADDR(glViewportIndexedfOES)
    GETPROCADDR(glObjectLabelKHR)
    GETPROCADDR(glFogxvOES)
    GETPROCADDR(glDrawRangeElementsBaseVertex)
    GETPROCADDR(glProgramUniform3iv)
    GETPROCADDR(glGetGraphicsResetStatusEXT)
    GETPROCADDR(glIsProgram)
    GETPROCADDR(glBeginTransformFeedback)
    GETPROCADDR(glEndQueryEXT)
    GETPROCADDR(glObjectPtrLabel)
    GETPROCADDR(glTexBufferRange)
    GETPROCADDR(glProgramUniformMatrix4x3fvEXT)
    GETPROCADDR(glGetProgramPipelineInfoLog)
    GETPROCADDR(glLoadMatrixxOES)
    GETPROCADDR(glGetTexParameterIiv)
    GETPROCADDR(glPathStringNV)
    GETPROCADDR(glGetPathCoordsNV)
    GETPROCADDR(glTexParameterIivOES)
    GETPROCADDR(glCopyPathNV)
    GETPROCADDR(glIsQuery)
    GETPROCADDR(glIsVertexArray)
    GETPROCADDR(glApplyFramebufferAttachmentCMAAINTEL)
    GETPROCADDR(glProgramUniform2ui64NV)
    GETPROCADDR(glTexEnvf)
    GETPROCADDR(glIsPointInStrokePathNV)
    GETPROCADDR(glTexEnvi)
    GETPROCADDR(glBlendFuncSeparateOES)
    GETPROCADDR(glFramebufferTexture2DMultisampleEXT)
    GETPROCADDR(glGetnUniformfv)
    GETPROCADDR(glReadBufferIndexedEXT)
    GETPROCADDR(glMatrixLoaddEXT)
    GETPROCADDR(glClearBufferfv)
    GETPROCADDR(glFenceSync)
    GETPROCADDR(glGetSamplerParameterfv)
    GETPROCADDR(glPathParameterfNV)
    GETPROCADDR(glFogx)
    GETPROCADDR(glBindAttribLocation)
    GETPROCADDR(glLightfv)
    GETPROCADDR(glGetProgramPipelineivEXT)
    GETPROCADDR(glNormal3f)
    GETPROCADDR(glProgramUniformMatrix3fvEXT)
    GETPROCADDR(glGetMaterialxv)
    GETPROCADDR(glProgramUniform2ui64vNV)
    GETPROCADDR(glClearBufferfi)
    GETPROCADDR(glGetnUniformfvEXT)
    GETPROCADDR(glFogf)
    GETPROCADDR(glProgramUniformMatrix4x2fvEXT)
    GETPROCADDR(glStartTilingQCOM)
    GETPROCADDR(glNormal3x)
    GETPROCADDR(eglGetCompositorTimingSupportedANDROID)
    GETPROCADDR(glGetTexLevelParameterfv)
    GETPROCADDR(glProgramUniform3iEXT)
    GETPROCADDR(glDrawRangeElementsBaseVertexOES)
    GETPROCADDR(glClearBufferiv)
    GETPROCADDR(glUniformHandleui64vNV)
    GETPROCADDR(eglStreamConsumerAcquireKHR)
    GETPROCADDR(glDeleteTransformFeedbacks)
    GETPROCADDR(glGetTextureHandleIMG)
    GETPROCADDR(glGetProgramResourceIndex)
    GETPROCADDR(glLightxvOES)
    GETPROCADDR(glFramebufferSampleLocationsfvNV)
    GETPROCADDR(glCompressedTexSubImage2D)
    GETPROCADDR(glLightModelf)
    GETPROCADDR(glNamedBufferStorageExternalEXT)
    GETPROCADDR(glSampleMaski)
    GETPROCADDR(glMatrixPushEXT)
    GETPROCADDR(glEGLImageTargetTexStorageEXT)
    GETPROCADDR(glTexEnvx)
    GETPROCADDR(glQueryMatrixxOES)
    GETPROCADDR(glGetUniformLocation)
    GETPROCADDR(glFinishFenceNV)
    GETPROCADDR(glPrimitiveBoundingBox)
    GETPROCADDR(glInvalidateSubFramebuffer)
    GETPROCADDR(glDrawElementsInstancedANGLE)
    GETPROCADDR(glGetTexParameteriv)
    GETPROCADDR(glGetPathMetricRangeNV)
    GETPROCADDR(glDeletePerfMonitorsAMD)
    GETPROCADDR(glGetSamplerParameteriv)
    GETPROCADDR(glLightModelfv)
    GETPROCADDR(glBindProgramPipeline)
    GETPROCADDR(glScissorIndexedvOES)
    GETPROCADDR(glGetUniformi64vNV)
    GETPROCADDR(glBlendParameteriNV)
    GETPROCADDR(glVertexAttribIFormat)
    GETPROCADDR(eglCreateContext)
    GETPROCADDR(glDrawElementsInstancedBaseVertex)
    GETPROCADDR(glUniform2f)
    GETPROCADDR(glGetMultisamplefv)
    GETPROCADDR(glGetInternalformativ)
    GETPROCADDR(glDepthRangeArrayfvNV)
    GETPROCADDR(glUniform2i)
    GETPROCADDR(glBufferSubData)
    GETPROCADDR(glRenderbufferStorageMultisampleNV)
    GETPROCADDR(glGetSyncivAPPLE)
    GETPROCADDR(glProgramUniform4i)
    GETPROCADDR(glEnableDriverControlQCOM)
    GETPROCADDR(eglCreateSyncKHR)
    GETPROCADDR(glProgramUniform4ui)
    GETPROCADDR(glProgramUniform4f)
    GETPROCADDR(glIsEnabled)
    GETPROCADDR(glEnableVertexAttribArray)
    GETPROCADDR(glEGLImageTargetTexture2DOES)
    GETPROCADDR(glUniform3f)
    GETPROCADDR(glUniform2fv)
    GETPROCADDR(glUniform3i)
    GETPROCADDR(glClearDepthf)
    GETPROCADDR(glDisableVertexAttribArray)
    GETPROCADDR(glPatchParameteriOES)
    GETPROCADDR(glDrawElementsInstancedNV)
    GETPROCADDR(glProgramUniform4iEXT)
    GETPROCADDR(glClear)
    GETPROCADDR(glClearDepthx)
    GETPROCADDR(glDeleteSyncAPPLE)
    GETPROCADDR(glProgramUniform3ivEXT)
    GETPROCADDR(glIsQueryEXT)
    GETPROCADDR(glGetFloati_vNV)
    GETPROCADDR(glCompressedTexSubImage3D)
    GETPROCADDR(glCopyBufferSubData)
    GETPROCADDR(glEndTilingQCOM)
    GETPROCADDR(glMatrixMultfEXT)
    GETPROCADDR(glGetFramebufferAttachmentParameteriv)
    GETPROCADDR(glReadBuffer)
    GETPROCADDR(glUniform2iv)
    GETPROCADDR(glProgramUniform4fvEXT)
    GETPROCADDR(glUniform2ui64vNV)
    GETPROCADDR(glProgramUniform2uiv)
    GETPROCADDR(glProgramUniform2ivEXT)
    GETPROCADDR(glDispatchComputeIndirect)
    GETPROCADDR(glProgramUniform2i64vNV)
    GETPROCADDR(glProgramUniform2f)
    GETPROCADDR(glClipPlanexOES)
    GETPROCADDR(glProgramUniform2i)
    GETPROCADDR(glGetTexParameterfv)
    GETPROCADDR(glDrawArraysInstanced)
    GETPROCADDR(glDrawTexxvOES)
    GETPROCADDR(glProgramUniform3uiEXT)
    GETPROCADDR(glStencilThenCoverFillPathNV)
    GETPROCADDR(glGetBooleanv)
    GETPROCADDR(glStencilThenCoverStrokePathInstancedNV)
    GETPROCADDR(glGetQueryObjectuiv)
    GETPROCADDR(glGetTexLevelParameteriv)
    GETPROCADDR(glEndQuery)
    GETPROCADDR(glNamedFramebufferSampleLocationsfvNV)
    GETPROCADDR(glPointParameterxOES)
    GETPROCADDR(glExtGetTexLevelParameterivQCOM)
    GETPROCADDR(glUniform1f)
    GETPROCADDR(glDisablei)
    GETPROCADDR(glBlitFramebuffer)
    GETPROCADDR(glMatrixLoadfEXT)
    GETPROCADDR(glStencilThenCoverFillPathInstancedNV)
    GETPROCADDR(glUniform1i)
    GETPROCADDR(glProgramUniform3f)
    GETPROCADDR(glProgramUniform3i)
    GETPROCADDR(glExtGetBufferPointervQCOM)
    GETPROCADDR(eglCreatePlatformPixmapSurfaceEXT)
    GETPROCADDR(eglWaitClient)
    GETPROCADDR(glGetNextPerfQueryIdINTEL)
    GETPROCADDR(glGenRenderbuffers)
    GETPROCADDR(glIsEnablediOES)
    GETPROCADDR(glClearColorx)
    GETPROCADDR(glCompileShader)
    GETPROCADDR(glTexParameterxv)
    GETPROCADDR(glSamplerParameterIuivEXT)
    GETPROCADDR(glCoverageModulationTableNV)
    GETPROCADDR(glProgramUniformMatrix3x4fvEXT)
    GETPROCADDR(glRenderbufferStorageMultisampleEXT)
    GETPROCADDR(glIsRenderbuffer)
    GETPROCADDR(glBeginPerfQueryINTEL)
    GETPROCADDR(glVertexAttribI4i)
    GETPROCADDR(eglGetPlatformDisplay)
    GETPROCADDR(eglReleaseThread)
    GETPROCADDR(glProgramUniform2ui)
    GETPROCADDR(glTextureStorage2DEXT)
    GETPROCADDR(glBlendEquationSeparateiEXT)
    GETPROCADDR(glMakeImageHandleResidentNV)
    GETPROCADDR(glObjectPtrLabelKHR)
    GETPROCADDR(glResolveMultisampleFramebufferAPPLE)
    GETPROCADDR(glGetSamplerParameterIuivEXT)
    GETPROCADDR(glMatrixMult3x3fNV)
    GETPROCADDR(glGetProgramResourceName)
    GETPROCADDR(glInterpolatePathsNV)
    GETPROCADDR(glGetObjectLabel)
    GETPROCADDR(glUniform4fv)
    GETPROCADDR(glGetPerfQueryIdByNameINTEL)
    GETPROCADDR(glDisableiOES)
    GETPROCADDR(glScissorArrayvNV)
    GETPROCADDR(glViewport)
    GETPROCADDR(glMatrixTranslatedEXT)
    GETPROCADDR(eglGetCurrentDisplay)
    GETPROCADDR(glPathStencilDepthOffsetNV)
    GETPROCADDR(eglCreateStreamProducerSurfaceKHR)
    GETPROCADDR(glGetSemaphoreParameterui64vEXT)
    GETPROCADDR(glMultiDrawArraysIndirectEXT)
    GETPROCADDR(glUniformMatrix2x3fvNV)
    GETPROCADDR(glBlendEquation)
    GETPROCADDR(glGenerateMipmap)
    GETPROCADDR(glMemoryBarrier)
    GETPROCADDR(glUniform1uiv)
    GETPROCADDR(glVertexAttribDivisor)
    GETPROCADDR(glStencilFillPathInstancedNV)
    GETPROCADDR(glTexStorage2DMultisample)
    GETPROCADDR(glUniform4iv)
    GETPROCADDR(eglQueryStreamKHR)
    GETPROCADDR(glClearDepthfOES)
    GETPROCADDR(glVertexAttribDivisorEXT)
    GETPROCADDR(glVertexAttribI4iv)
    GETPROCADDR(glPathParameterivNV)
    GETPROCADDR(glProgramUniform3fvEXT)
    GETPROCADDR(glGetPerfCounterInfoINTEL)
    GETPROCADDR(glMapBufferOES)
    GETPROCADDR(glScissorIndexedvNV)
    GETPROCADDR(glGetProgramPipelineInfoLogEXT)
    GETPROCADDR(glProgramPathFragmentInputGenNV)
    GETPROCADDR(eglWaitSyncKHR)
    GETPROCADDR(glClearColor)
    GETPROCADDR(glGetDriverControlsQCOM)
    GETPROCADDR(glGetTexGenxvOES)
    GETPROCADDR(glSamplerParameterIuiv)
    GETPROCADDR(glLineWidthxOES)
    GETPROCADDR(glStencilFunc)
    GETPROCADDR(glWaitSyncAPPLE)
    GETPROCADDR(glDeleteSync)
    GETPROCADDR(glVertexAttrib2fv)
    GETPROCADDR(glUniformHandleui64IMG)
    GETPROCADDR(glValidateProgramPipelineEXT)
    GETPROCADDR(glGetPathLengthNV)
    GETPROCADDR(glDepthMask)
    GETPROCADDR(glTexSubImage3DOES)
    GETPROCADDR(glBindFramebufferOES)
    GETPROCADDR(glProgramUniform4uiEXT)
    GETPROCADDR(glSamplerParameterIivEXT)
    GETPROCADDR(glTexBufferRangeOES)
    GETPROCADDR(glUseProgram)
    GETPROCADDR(glGetProgramInterfaceiv)
    GETPROCADDR(eglQueryStreamTimeKHR)
    GETPROCADDR(eglBindAPI)
    GETPROCADDR(glFramebufferTexture2DDownsampleIMG)
    GETPROCADDR(glUniformMatrix4fv)
    GETPROCADDR(glExtGetRenderbuffersQCOM)
    GETPROCADDR(glGetPerfMonitorCounterDataAMD)
    GETPROCADDR(glLoadPaletteFromModelViewMatrixOES)
    GETPROCADDR(glDepthRangexOES)
    GETPROCADDR(glSemaphoreParameterui64vEXT)
    GETPROCADDR(glGetTextureSamplerHandleNV)
    GETPROCADDR(glRotatef)
    GETPROCADDR(glTextureStorage1DEXT)
    GETPROCADDR(glUniformMatrix4x2fv)
    GETPROCADDR(glPushMatrix)
    GETPROCADDR(glDeleteSamplers)
    GETPROCADDR(glRotatex)
    GETPROCADDR(eglStreamConsumerReleaseKHR)
    GETPROCADDR(glLineWidthx)
    GETPROCADDR(glGetAttribLocation)
    GETPROCADDR(glCreateShader)
    GETPROCADDR(glCopyTextureLevelsAPPLE)
    GETPROCADDR(glPathDashArrayNV)
    GETPROCADDR(glSampleCoverage)
    GETPROCADDR(glUniformMatrix2x3fv)
    GETPROCADDR(glTexGenfvOES)
    GETPROCADDR(glGetTexGenfvOES)
    GETPROCADDR(glGetTexParameterxvOES)
    GETPROCADDR(glLightModelx)
    GETPROCADDR(glMatrixIndexPointerOES)
    GETPROCADDR(glGetPerfQueryDataINTEL)
    GETPROCADDR(glTexSubImage2D)
    GETPROCADDR(glDeleteShader)
    GETPROCADDR(eglCreateImage)
    GETPROCADDR(glUniform3uiv)
    GETPROCADDR(glGenPerfMonitorsAMD)
    GETPROCADDR(glGetQueryivEXT)
    GETPROCADDR(eglReleaseTexImage)
    GETPROCADDR(glVertexAttrib4fv)
    GETPROCADDR(glMultiTexCoord4xOES)
    GETPROCADDR(glProgramBinary)
    GETPROCADDR(glDrawArrays)
    GETPROCADDR(eglCreateStreamKHR)
    GETPROCADDR(glMatrixLoad3x2fNV)
    GETPROCADDR(glMatrixLoadIdentityEXT)
    GETPROCADDR(glTexSubImage3D)
    GETPROCADDR(glDrawBuffersIndexedEXT)
    GETPROCADDR(glTexParameterxOES)
    GETPROCADDR(eglQueryStreamu64KHR)
    GETPROCADDR(glUniform4i64vNV)
    GETPROCADDR(glSamplerParameteri)
    GETPROCADDR(glDeleteProgramPipelinesEXT)
    GETPROCADDR(glSamplerParameterf)
    GETPROCADDR(glDrawTexsOES)
    GETPROCADDR(glGetActiveAttrib)
    GETPROCADDR(glUnmapBufferOES)
    GETPROCADDR(glProgramUniform2i64NV)
    GETPROCADDR(eglCreatePbufferSurface)
    GETPROCADDR(glFrustumx)
    GETPROCADDR(glBlitFramebufferANGLE)
    GETPROCADDR(eglSignalSyncKHR)
    GETPROCADDR(glGetTexParameterIuivOES)
    GETPROCADDR(glMatrixTranslatefEXT)
    GETPROCADDR(glDrawElementsIndirect)
    GETPROCADDR(glUniformMatrix2fv)
    GETPROCADDR(glPolygonOffsetClampEXT)
    GETPROCADDR(glUniformMatrix2x4fvNV)
    GETPROCADDR(glPrimitiveBoundingBoxEXT)
    GETPROCADDR(glGetVertexAttribIiv)
    GETPROCADDR(glExtGetTexturesQCOM)
    GETPROCADDR(glScissorArrayvOES)
    GETPROCADDR(glPointSize)
    GETPROCADDR(eglClientWaitSync)
    GETPROCADDR(glFrustumf)
    GETPROCADDR(glShaderSource)
    GETPROCADDR(glFramebufferTextureMultisampleMultiviewOVR)
    GETPROCADDR(glFramebufferFoveationParametersQCOM)
    GETPROCADDR(eglClientWaitSyncKHR)
    GETPROCADDR(glTexStorageMem2DMultisampleEXT)
    GETPROCADDR(glBlendFuncSeparatei)
    GETPROCADDR(glBlitFramebufferNV)
    GETPROCADDR(glFogxOES)
    GETPROCADDR(glFramebufferFetchBarrierEXT)
    GETPROCADDR(glLightModelxOES)
    GETPROCADDR(glViewportSwizzleNV)
    GETPROCADDR(glGetObjectLabelKHR)
    GETPROCADDR(glUniform1i64NV)
    GETPROCADDR(glRenderbufferStorageOES)
    GETPROCADDR(glGetQueryObjectuivEXT)
    GETPROCADDR(glVertexAttrib4f)
    GETPROCADDR(glCreateMemoryObjectsEXT)
    GETPROCADDR(glTextureViewEXT)
    GETPROCADDR(glDepthRangefOES)
    GETPROCADDR(glDrawElementsBaseVertexEXT)
    GETPROCADDR(glMatrixRotatefEXT)
    GETPROCADDR(glGetPerfMonitorCounterStringAMD)
    GETPROCADDR(glPathParameterfvNV)
    GETPROCADDR(glRasterSamplesEXT)
    GETPROCADDR(glBindFragDataLocationEXT)
    GETPROCADDR(glProgramUniform4i64NV)
    GETPROCADDR(glVertexAttribI4ui)
    GETPROCADDR(glFlushMappedBufferRange)
    GETPROCADDR(glStencilOp)
    GETPROCADDR(glIsImageHandleResidentNV)
    GETPROCADDR(glIsSyncAPPLE)
    GETPROCADDR(glBindBuffer)
    GETPROCADDR(glFramebufferTextureEXT)
    GETPROCADDR(eglCreatePlatformPixmapSurface)
    GETPROCADDR(glTransformFeedbackVaryings)
    GETPROCADDR(glUniform1i64vNV)
    GETPROCADDR(glUniform3ui64vNV)
    GETPROCADDR(glIsTexture)
    GETPROCADDR(glScalex)
    GETPROCADDR(glProgramUniformHandleui64vIMG)
    GETPROCADDR(glEnableiOES)
    GETPROCADDR(glRenderbufferStorageMultisampleANGLE)
    GETPROCADDR(glBlendColor)
    GETPROCADDR(glProgramUniformMatrix3fv)
    GETPROCADDR(glStencilThenCoverStrokePathNV)
    GETPROCADDR(glDebugMessageInsertKHR)
    GETPROCADDR(glNormalPointer)
    GETPROCADDR(glProgramUniform1ivEXT)
    GETPROCADDR(glProgramUniformMatrix3x4fv)
    GETPROCADDR(glScalef)
    GETPROCADDR(eglInitialize)
    GETPROCADDR(glGetMaterialxvOES)
    GETPROCADDR(glMultMatrixxOES)
    GETPROCADDR(glGetUniformBlockIndex)
    GETPROCADDR(glTexParameterxvOES)
    GETPROCADDR(glProgramUniformMatrix4x2fv)
    GETPROCADDR(eglCreateImageKHR)
    GETPROCADDR(glPolygonModeNV)
    GETPROCADDR(glTextureStorageMem2DMultisampleEXT)
    GETPROCADDR(glTexStorage2DEXT)
    GETPROCADDR(glGetTexParameterIivEXT)
    GETPROCADDR(glFramebufferTexture2D)
    GETPROCADDR(glGetVertexAttribfv)
    GETPROCADDR(glBlendEquationSeparateiOES)
    GETPROCADDR(glEnable)
    GETPROCADDR(glTexParameterIuiv)
    GETPROCADDR(glUniformMatrix3x4fv)
    GETPROCADDR(glGetUnsignedBytevEXT)
    GETPROCADDR(glIsSemaphoreEXT)
    GETPROCADDR(glPointParameterx)
    GETPROCADDR(glTexParameterIuivEXT)
    GETPROCADDR(glGetTexEnvxv)
    GETPROCADDR(eglGetNextFrameIdANDROID)
    GETPROCADDR(glCompressedTexImage3D)
    GETPROCADDR(glMaterialxvOES)
    GETPROCADDR(glUnmapBuffer)
    GETPROCADDR(glDrawArraysInstancedBaseInstanceEXT)
    GETPROCADDR(glTranslatex)
    GETPROCADDR(glBeginQueryEXT)
    GETPROCADDR(glGetQueryObjectivEXT)
    GETPROCADDR(glPointParameterf)
    GETPROCADDR(glGetFloatv)
    GETPROCADDR(glReadPixels)
    GETPROCADDR(glBeginPerfMonitorAMD)
    GETPROCADDR(glBlendFuncSeparateiEXT)
    GETPROCADDR(glReadnPixelsEXT)
    GETPROCADDR(glColor4x)
    GETPROCADDR(glGetLightxv)
    GETPROCADDR(eglGetError)
    GETPROCADDR(glConservativeRasterParameteriNV)
    GETPROCADDR(glMultiDrawElementsBaseVertexOES)
    GETPROCADDR(glGetClipPlanex)
    GETPROCADDR(glDrawElementsInstancedEXT)
    GETPROCADDR(glMakeTextureHandleResidentNV)
    GETPROCADDR(glTextureFoveationParametersQCOM)
    GETPROCADDR(glGenFramebuffersOES)
    GETPROCADDR(eglGetSyncAttrib)
    GETPROCADDR(glTranslatef)
    GETPROCADDR(glCreatePerfQueryINTEL)
    GETPROCADDR(glPopMatrix)
    GETPROCADDR(glGetClipPlanef)
    GETPROCADDR(glLightModelxv)
    GETPROCADDR(glTexStorageMem3DMultisampleEXT)
    GETPROCADDR(glMapBufferRange)
    GETPROCADDR(glIsFramebuffer)
    GETPROCADDR(glMatrixPopEXT)
    GETPROCADDR(glProgramUniformMatrix4fvEXT)
    GETPROCADDR(glMatrixFrustumEXT)
    GETPROCADDR(glFrontFace)
    GETPROCADDR(glProgramUniform4ui64vNV)
    GETPROCADDR(glDispatchCompute)
    GETPROCADDR(glViewportIndexedfvOES)
    GETPROCADDR(glGetShaderSource)
    GETPROCADDR(glProgramUniformMatrix2x4fv)
    GETPROCADDR(glGetTexEnvxvOES)
    GETPROCADDR(glProgramUniformMatrix3x2fv)
    GETPROCADDR(glAlphaFunc)
    GETPROCADDR(glGetVertexAttribiv)
    GETPROCADDR(glStencilOpSeparate)
    GETPROCADDR(glCoverStrokePathInstancedNV)
    GETPROCADDR(glNormal3xOES)
    GETPROCADDR(eglGetDisplay)
    GETPROCADDR(glGetFloati_vOES)
    GETPROCADDR(glExtGetTexSubImageQCOM)
    GETPROCADDR(eglDestroyStreamKHR)
    GETPROCADDR(glTexStorage3DEXT)
    GETPROCADDR(glGetProgramBinary)
    GETPROCADDR(eglQueryString)
    GETPROCADDR(glColor4f)
    GETPROCADDR(glSetFenceNV)
    GETPROCADDR(glCompressedTexImage2D)
    GETPROCADDR(glFramebufferPixelLocalStorageSizeEXT)
    GETPROCADDR(glBindVertexBuffer)
    GETPROCADDR(glIsProgramPipelineEXT)
    GETPROCADDR(glGetTexParameterIuiv)
    GETPROCADDR(glOrthof)
    GETPROCADDR(glVertexAttribBinding)
    GETPROCADDR(glBindTransformFeedback)
    GETPROCADDR(glDeleteBuffers)
    GETPROCADDR(glSamplerParameterfv)
    GETPROCADDR(glColorMaskiOES)
    GETPROCADDR(glGenProgramPipelines)
    GETPROCADDR(glGetPathParameterivNV)
    GETPROCADDR(glOrthox)
    GETPROCADDR(glTexStorage1DEXT)
    GETPROCADDR(glGetPerfMonitorGroupsAMD)
    GETPROCADDR(glCopyTexSubImage3D)
    GETPROCADDR(glTexParameterIiv)
    GETPROCADDR(glGetGraphicsResetStatusKHR)
    GETPROCADDR(glMatrixLoadTransposedEXT)
    GETPROCADDR(glObjectLabel)
    GETPROCADDR(glRenderbufferStorageMultisample)
    GETPROCADDR(glGetPerfMonitorCounterInfoAMD)
    GETPROCADDR(eglGetConfigs)
    GETPROCADDR(glIsSampler)
    GETPROCADDR(glGetFirstPerfQueryIdINTEL)
    GETPROCADDR(glReadBufferNV)
    GETPROCADDR(glSamplerParameteriv)
    GETPROCADDR(glBindVertexArrayOES)
    GETPROCADDR(eglGetCompositorTimingANDROID)
    GETPROCADDR(glTexEnvxv)
    GETPROCADDR(glProgramUniform4iv)
    GETPROCADDR(glFramebufferFoveationConfigQCOM)
    GETPROCADDR(glIsFramebufferOES)
    GETPROCADDR(glDrawTexsvOES)
    GETPROCADDR(glStencilFuncSeparate)
    GETPROCADDR(glFragmentCoverageColorNV)
    GETPROCADDR(glPixelStorei)
    GETPROCADDR(glGetAttachedShaders)
    GETPROCADDR(glGetInteger64i_v)
    GETPROCADDR(glClearStencil)
    GETPROCADDR(glClearTexSubImageEXT)
    GETPROCADDR(glDeletePathsNV)
    GETPROCADDR(glFramebufferTextureLayerDownsampleIMG)
    GETPROCADDR(glProgramUniform1i64NV)
    GETPROCADDR(eglSwapInterval)
    GETPROCADDR(glGetActiveUniformsiv)
    GETPROCADDR(glGenQueriesEXT)
    GETPROCADDR(glGenProgramPipelinesEXT)
    GETPROCADDR(glTexParameteriv)
    GETPROCADDR(glTransformPathNV)
    GETPROCADDR(glRotatexOES)
    GETPROCADDR(glShaderBinary)
    GETPROCADDR(glDisableDriverControlQCOM)
    GETPROCADDR(glProgramUniform4fv)
    GETPROCADDR(glTexImage2D)
    GETPROCADDR(glCoverageModulationNV)
    GETPROCADDR(glDeletePerfQueryINTEL)
    GETPROCADDR(glExtGetProgramsQCOM)
    GETPROCADDR(glTexStorage3DMultisample)
    GETPROCADDR(glTexBufferEXT)
    GETPROCADDR(glMatrixMultTransposefEXT)
    GETPROCADDR(glTexEnvxvOES)
    GETPROCADDR(eglCreateWindowSurface)
    GETPROCADDR(glUniform3ui64NV)
    GETPROCADDR(glViewportIndexedfvNV)
    GETPROCADDR(glGetIntegeri_vEXT)
    GETPROCADDR(glUniform4i64NV)
    GETPROCADDR(glValidateProgramPipeline)
    GETPROCADDR(eglUnlockSurfaceKHR)
    GETPROCADDR(glGetProgramPipelineiv)
    GETPROCADDR(glProgramUniform1iEXT)
    GETPROCADDR(glTexImage3D)
    GETPROCADDR(glCopyTexSubImage2D)
    GETPROCADDR(glGetPointervKHR)
    GETPROCADDR(glProgramUniform1ui64vNV)
    GETPROCADDR(glEnablei)
    GETPROCADDR(glUniform2ui)
    GETPROCADDR(glGetSamplerParameterIuiv)
    GETPROCADDR(glProgramParameteriEXT)
    GETPROCADDR(glPointSizePointerOES)
    GETPROCADDR(glUniform4ui64NV)
    GETPROCADDR(glFramebufferRenderbufferOES)
    GETPROCADDR(glReadnPixels)
    GETPROCADDR(glBlendEquationi)
    GETPROCADDR(glPathParameteriNV)
    GETPROCADDR(glIsProgramPipeline)
    GETPROCADDR(glPathMemoryGlyphIndexArrayNV)
    GETPROCADDR(glMaterialxv)
    GETPROCADDR(glColorMaski)
    GETPROCADDR(glWindowRectanglesEXT)
    GETPROCADDR(glUniform2ui64NV)
    GETPROCADDR(glBlendFuncSeparate)
    GETPROCADDR(eglLockSurfaceKHR)
    GETPROCADDR(glMakeImageHandleNonResidentNV)
    GETPROCADDR(glVertexAttrib1f)
    GETPROCADDR(glBufferData)
    GETPROCADDR(glDeleteQueriesEXT)
    GETPROCADDR(glDetachShader)
    GETPROCADDR(glGetnUniformuiv)
    GETPROCADDR(glTexBuffer)
    GETPROCADDR(glGetIntegeri_v)
    GETPROCADDR(glProgramUniform4ivEXT)
    GETPROCADDR(glCopyImageSubDataOES)
    GETPROCADDR(glBindRenderbufferOES)
    GETPROCADDR(eglGetConfigAttrib)
    GETPROCADDR(glGetFramebufferPixelLocalStorageSizeEXT)
    GETPROCADDR(glProgramUniform2iv)
    GETPROCADDR(glGenSamplers)
    GETPROCADDR(glMatrixMultTransposedEXT)
    GETPROCADDR(glGetBufferParameteriv)
    GETPROCADDR(glIsTextureHandleResidentNV)
    GETPROCADDR(glExtGetFramebuffersQCOM)
    GETPROCADDR(glDrawBuffers)
    GETPROCADDR(glGetProgramInfoLog)
    GETPROCADDR(glMatrixMultTranspose3x3fNV)
    GETPROCADDR(glGetnUniformuivKHR)
    GETPROCADDR(glDebugMessageCallback)
    GETPROCADDR(glGetInternalformatSampleivNV)
    GETPROCADDR(glMatrixLoadTranspose3x3fNV)
    GETPROCADDR(glPointAlongPathNV)
    GETPROCADDR(glGetQueryObjecti64vEXT)
    GETPROCADDR(glVertexAttrib3f)
    GETPROCADDR(glStencilMaskSeparate)
    GETPROCADDR(glProgramUniform2fv)
    GETPROCADDR(glDrawElementsInstancedBaseVertexEXT)
    GETPROCADDR(eglGetSyncAttribKHR)
    GETPROCADDR(glUniform1ui64vNV)
    GETPROCADDR(glMatrixLoadTransposefEXT)
    GETPROCADDR(glProgramUniform2iEXT)
    GETPROCADDR(glResolveDepthValuesNV)
    GETPROCADDR(glFramebufferTextureMultiviewOVR)
    GETPROCADDR(glBufferStorageExternalEXT)
    GETPROCADDR(glGetBufferPointervOES)
    GETPROCADDR(glBlendEquationSeparateOES)
    GETPROCADDR(glDrawBuffersNV)
    GETPROCADDR(eglGetSystemTimeFrequencyNV)
    GETPROCADDR(glPushDebugGroupKHR)
    GETPROCADDR(glBlendEquationiOES)
    GETPROCADDR(glVertexAttrib2f)
    GETPROCADDR(glVertexAttribIPointer)
    GETPROCADDR(eglDestroyImage)
    GETPROCADDR(glUniform4ui)
    GETPROCADDR(glVertexPointer)
    GETPROCADDR(glUniform1ui64NV)
    GETPROCADDR(eglCreateStreamFromFileDescriptorKHR)
    GETPROCADDR(glCopyImageSubData)
    GETPROCADDR(glPathSubCommandsNV)
    GETPROCADDR(glIsSync)
    GETPROCADDR(glFinish)
    GETPROCADDR(glMatrixRotatedEXT)
    GETPROCADDR(glFramebufferRenderbuffer)
    GETPROCADDR(glMultiDrawElementsEXT)
    GETPROCADDR(glActiveTexture)
    GETPROCADDR(glVertexAttribFormat)
    GETPROCADDR(eglChooseConfig)
    GETPROCADDR(glDisableClientState)
    GETPROCADDR(glIsFenceNV)
    GETPROCADDR(glLinkProgram)
    return nullptr;
}
