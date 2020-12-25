#include <jni.h>
#include <string>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

#include <android/log.h>
#include <android/looper.h>
#include <android/sensor.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
jobject /* this */) {
std::string hello = "Hello from C++";
return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_guru(
        JNIEnv* env,
jobject /* this */) {
std::string hello = "Guru: Hello from C++";
__android_log_print(ANDROID_LOG_ERROR, "TRACKERS", "%s", "testing log");

return env->NewStringUTF(hello.c_str());
}