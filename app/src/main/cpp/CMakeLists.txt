cmake_minimum_required(VERSION 3.22.1)

project("gpu-debug-layer")

add_library(GLESDebugLayer SHARED
        opengl_es_debug_layer.cpp)

# Include libraries needed for hello-jni lib
target_link_libraries(GLESDebugLayer
        android
        log)