#include "../header/bluebox_ll_Logger.h"

#include "ll/api/Logger.h"

using ll::Logger;

JNIEXPORT void JNICALL Java_bluebox_ll_Logger_init
  (JNIEnv *env, jobject thisObj, jstring jstr_tag){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    const char* tag=env->GetStringUTFChars(jstr_tag, nullptr);
    Logger *logger=new Logger(tag);
    env->SetLongField(thisObj, jfield_nativePtr, (jlong)logger);
    env->ReleaseStringUTFChars(jstr_tag, tag);
  }

/*
 * Class:     bluebox_ll_Logger
 * Method:    info
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_Logger_info
  (JNIEnv *env, jobject thisObj, jstring jstr_message){
    Logger *logger=(Logger*)env->GetLongField(thisObj, env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J"));
    const char* message=env->GetStringUTFChars(jstr_message, nullptr);
    logger->info(message);
    env->ReleaseStringUTFChars(jstr_message, message);
  }

/*
 * Class:     bluebox_ll_Logger
 * Method:    error
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_Logger_error
  (JNIEnv *env, jobject thisObj, jstring jstr_message){
    Logger *logger=(Logger*)env->GetLongField(thisObj, env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J"));
    const char* message=env->GetStringUTFChars(jstr_message, nullptr);
    logger->error(message);
    env->ReleaseStringUTFChars(jstr_message, message);
  }

/*
 * Class:     bluebox_ll_Logger
 * Method:    debug
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_Logger_debug
  (JNIEnv *env, jobject thisObj, jstring jstr_message){
    Logger *logger=(Logger*)env->GetLongField(thisObj, env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J"));
    const char* message=env->GetStringUTFChars(jstr_message, nullptr);
    logger->debug(message);
    env->ReleaseStringUTFChars(jstr_message, message);
  }

/*
 * Class:     bluebox_ll_Logger
 * Method:    warn
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_Logger_warn
  (JNIEnv *env, jobject thisObj, jstring jstr_message){
    Logger *logger=(Logger*)env->GetLongField(thisObj, env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J"));
    const char* message=env->GetStringUTFChars(jstr_message, nullptr);
    logger->warn(message);
    env->ReleaseStringUTFChars(jstr_message, message);
  }

/*
 * Class:     bluebox_ll_Logger
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_Logger_dispose
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