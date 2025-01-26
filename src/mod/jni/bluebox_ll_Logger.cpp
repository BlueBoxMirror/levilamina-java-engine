#include "../header/bluebox_ll_Logger.h"
#include "../util/util.h"

#include "jni.h"
#include "ll/api/service/Bedrock.h"
#include "mc/world/level/Level.h"
#include "ll/api/Logger.h"
#include <filesystem>

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
JNIEXPORT void JNICALL Java_bluebox_ll_Logger_release
  (JNIEnv *, jclass, jlong nativePtr){
    delete (Logger*)nativePtr;
  }



JNIEXPORT void JNICALL Java_bluebox_ll_Logger_setPlayer
  (JNIEnv *env, jobject thisObj, jstring jstr_playerName){
    Logger *logger=(Logger*) lje::getNativePointer(env, thisObj);
    const char* playerUUID=env->GetStringUTFChars(jstr_playerName, nullptr);
    logger->setPlayerOutputFunc([playerUUID](std::string_view message){
      ll::service::getLevel()->getPlayer(playerUUID)->sendMessage(message);
    });
    
    env->ReleaseStringUTFChars(jstr_playerName, playerUUID);
  }

JNIEXPORT void JNICALL Java_bluebox_ll_Logger_setFile
  (JNIEnv *env, jobject thisObj, jobject jobj_file){
    jclass jcls_File=env->FindClass("Ljava/io/File;");
    jmethodID jmid_getAbsolutePath=env->GetMethodID(jcls_File, "getAbsolutePath", "()Ljava/lang/String;");
    
    jstring jstrN_path=(jstring)env->CallObjectMethod(jobj_file, jmid_getAbsolutePath);
    const char* path=env->GetStringUTFChars(jstrN_path, nullptr);
    Logger *logger=(Logger*) lje::getNativePointer(env, thisObj);
    logger->setFile(std::filesystem::path(path));

    env->ReleaseStringUTFChars(jstrN_path, path);
    env->DeleteLocalRef(jstrN_path);
  }











