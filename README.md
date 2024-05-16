# gpu-debug-layer


```bash
adb shell settings put global enable_gpu_debug_layers 1
adb shell settings put global gpu_debug_app com.android.settings
adb shell settings put global gpu_debug_layer_app site.hanschen.gpu
adb shell settings put global gpu_debug_layers_gles libGLESDebugLayer.so
```