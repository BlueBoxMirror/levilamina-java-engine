#include "jni.h"
#include "ll/api/Logger.h"

using namespace std;
using namespace ll;

namespace lje{

void Java_bluebox_levilamina_engine_Log_init
(JNIEnv *env, jobject thisObj){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    jfieldID jfield_tag=env->GetFieldID(env->GetObjectClass(thisObj), "tag", "Ljava/lang/String;");
    jstring jstring_tag=(jstring)env->GetObjectField(thisObj, jfield_tag);
    const char* tag=env->GetStringUTFChars(jstring_tag, nullptr);
    Logger *logger=new Logger(tag);
    env->SetLongField(thisObj, jfield_nativePtr, (jlong)logger);
    env->ReleaseStringUTFChars(jstring_tag, tag);
}

void Java_bluebox_levilamina_engine_Log_info
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("java/lang/NullPointerException"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->info(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void Java_bluebox_levilamina_engine_Log_error
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("java/lang/NullPointerException"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->error(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void Java_bluebox_levilamina_engine_Log_debug
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("java/lang/NullPointerException"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->debug(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void Java_bluebox_levilamina_engine_Log_warn
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("java/lang/NullPointerException"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->warn(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void Java_bluebox_levilamina_engine_Log_dispose
(JNIEnv *env, jobject thisObj){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    delete logger;
    env->SetLongField(thisObj, jfield_nativePtr, 0);
}

}//namespace lje