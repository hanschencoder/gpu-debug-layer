# gpu-debug-layer

环境设置:

```bash
# 打开调试层
adb shell settings put global enable_gpu_debug_layers 1
# 设置想要调试的目标应用
adb shell settings put global gpu_debug_app com.android.settings

# 安装调试层 apk
adb install layer-debug.apk
# 设置调试层 apk 包名
adb shell settings put global gpu_debug_layer_app site.hanschen.gpu
# 设置调试层 so 名
adb shell settings put global gpu_debug_layers_gles libGLESDebugLayer.so
```

环境恢复:

```bash
adb shell settings delete global enable_gpu_debug_layers
adb shell settings delete global gpu_debug_app
adb shell settings delete global gpu_debug_layers_gles
adb shell settings delete global gpu_debug_layer_app
```