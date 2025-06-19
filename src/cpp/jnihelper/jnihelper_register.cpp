// This file is generated automatically.
// Do not modify it manually.
#include "jni/headers/bluebox/ll/Logger.h"
#include "jni/headers/bluebox/ll/plugin/LeviLamina.h"
#include "jnihelper.h"
void jnihelper::registerNatives(JNIEnv* env){
{
    jclass clazz = env->FindClass("Lbluebox/ll/Logger;");
    JNINativeMethod methods[]={
        {(char*)"init", (char*)"(Ljava/lang/String;)V", (void*)&jni::Java_bluebox_ll_Logger_init},
        {(char*)"info", (char*)"(Ljava/lang/String;)V", (void*)&jni::Java_bluebox_ll_Logger_info},
        {(char*)"error", (char*)"(Ljava/lang/String;)V", (void*)&jni::Java_bluebox_ll_Logger_error},
        {(char*)"debug", (char*)"(Ljava/lang/String;)V", (void*)&jni::Java_bluebox_ll_Logger_debug},
        {(char*)"warn", (char*)"(Ljava/lang/String;)V", (void*)&jni::Java_bluebox_ll_Logger_warn},
        {(char*)"release", (char*)"(J)V", (void*)&jni::Java_bluebox_ll_Logger_release},
    };
    env->RegisterNatives(clazz, methods, 6);
}
{
    jclass clazz = env->FindClass("Lbluebox/ll/plugin/LeviLamina;");
    JNINativeMethod methods[]={
        {(char*)"hasPlugin", (char*)"(Ljava/lang/String;)Z", (void*)&jni::Java_bluebox_ll_plugin_LeviLamina_hasPlugin},
        {(char*)"getNativePlugin", (char*)"(Ljava/lang/String;)Lbluebox/ll/plugin/Plugin;", (void*)&jni::Java_bluebox_ll_plugin_LeviLamina_getNativePlugin},
    };
    env->RegisterNatives(clazz, methods, 2);
}
}