#include "jni.h"
#include "ll/api/Logger.h"
#include "java_Log.h"
#include "mod/Entry.h"

using namespace std;
using namespace ll;

namespace lje::j_Logger{

jobject newLogger(JNIEnv *env, const char* name){
    jclass jclass_Logger=env->FindClass(JCLASS_LOGGER);
    jmethodID jmethod_Logger_init=env->GetMethodID(jclass_Logger, "<init>", "(Ljava/lang/String;)V");
    jstring jstring_name=env->NewStringUTF(name);
    jobject jobj_Logger=env->NewObject(jclass_Logger, jmethod_Logger_init, jstring_name);
    env->DeleteLocalRef(jstring_name);
    return jobj_Logger;
}

jobject newLogger(JNIEnv *env,const ll::Logger* logger){
    jclass jclass_Logger=env->FindClass(JCLASS_LOGGER);
    jmethodID jmethod_Logger_init=env->GetMethodID(jclass_Logger, "<init>", "(J)V");
    jobject jobj_Logger=env->NewObject(jclass_Logger, jmethod_Logger_init, (jlong)logger);
    return jobj_Logger;
}

void init
(JNIEnv *env, jobject thisObj, jstring jstring_tag){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    const char* tag=env->GetStringUTFChars(jstring_tag, nullptr);
    Logger *logger=new Logger(tag);
    env->SetLongField(thisObj, jfield_nativePtr, (jlong)logger);
    env->ReleaseStringUTFChars(jstring_tag, tag);
}

void info
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("Ljava/lang/NullPointerException;"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->info(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void error
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("Ljava/lang/NullPointerException;"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->error(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void debug
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("Ljava/lang/NullPointerException;"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->debug(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void warn
(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    if(logger==nullptr){
        env->ThrowNew(env->FindClass("Ljava/lang/NullPointerException;"), "logger has already been disposed");
        return;
    }
    const char* message=env->GetStringUTFChars(jstring_message, nullptr);
    logger->warn(message);
    env->ReleaseStringUTFChars(jstring_message, message);
}

void dispose
(JNIEnv *env, jobject thisObj){
    jclass jclass_Logger=env->GetObjectClass(thisObj);
    jfieldID jfield_isInStack=env->GetFieldID(jclass_Logger, "isInStack","Z");
    jboolean isInStack=env->GetBooleanField(thisObj, jfield_isInStack);
    if(!isInStack) return;
    jfieldID jfield_nativePtr=env->GetFieldID(jclass_Logger, "nativePtr", "J");
    Logger *logger=(Logger*)env->GetLongField(thisObj, jfield_nativePtr);
    delete logger;
    env->SetLongField(thisObj, jfield_nativePtr, 0);
}

}//namespace lje