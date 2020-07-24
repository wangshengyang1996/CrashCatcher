#include <jni.h>
#include <string>

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,"wsy" ,__VA_ARGS__)

void raiseError(int signal) {
    raise(signal);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_wsy_crashcatcher_MainActivity_nativeCrash(JNIEnv *env, jobject thiz) {
    raiseError(SIGABRT);
}