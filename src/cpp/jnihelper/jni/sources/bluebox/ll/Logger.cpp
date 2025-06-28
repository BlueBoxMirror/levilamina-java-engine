// This file is generated automatically.
#include "jnihelper/jni/headers/bluebox/ll/Logger.h"
#include "ll/api/io/LogLevel.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"

namespace jnihelper::jni {

//{_tag_}setLevel(I)V
void Java_bluebox_ll_Logger_setLevel(::JNIEnv* envPtr, ::jobject n_thisObj, ::jint n_level){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    auto thisObj=Logger.package(n_thisObj);
    auto logger=((ll::io::Logger*)thisObj.f_nativePtr());
    logger->setLevel((ll::io::LogLevel)n_level);
}
//{_tag_}flush()V
void Java_bluebox_ll_Logger_flush(::JNIEnv* envPtr, ::jobject n_thisObj){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    auto thisObj=Logger.package(n_thisObj);
    auto logger=((ll::io::Logger*)thisObj.f_nativePtr());
    logger->flush();
}

//{_tag_}getLevel()I
::jint Java_bluebox_ll_Logger_getLevel(::JNIEnv* envPtr, ::jobject n_thisObj){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    auto thisObj=Logger.package(n_thisObj);
    auto logger=((ll::io::Logger*)thisObj.f_nativePtr());
    return (jint)logger->getLevel();
}
//{_tag_}getTitle()Ljava/lang/String;
::jobject Java_bluebox_ll_Logger_getTitle(::JNIEnv* envPtr, ::jobject n_thisObj){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto logger=((ll::io::Logger*)thisObj.f_nativePtr());
    return String.newObj(logger->getTitle()).release();
}

//{_tag_}setFlushLevel(I)V
void Java_bluebox_ll_Logger_setFlushLevel(::JNIEnv* envPtr, ::jobject n_thisObj, ::jint n_level){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    auto thisObj=Logger.package(n_thisObj);
    auto logger=((ll::io::Logger*)thisObj.f_nativePtr());
    logger->setFlushLevel((ll::io::LogLevel)n_level);
}
//{_tag_}log(ILjava/lang/String;)V
void Java_bluebox_ll_Logger_log(::JNIEnv* envPtr, ::jobject n_thisObj, ::jint n_level, ::jobject n_message){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto message=String.package(n_message);
    auto logger=((ll::io::Logger*)thisObj.f_nativePtr());
    logger->log((ll::io::LogLevel)n_level,message.getValue());
}
//{_tag_}init(Ljava/lang/String;)V
void Java_bluebox_ll_Logger_init(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_tag){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto tag=String.package(n_tag);
    auto logger=ll::io::LoggerRegistry::getInstance().getOrCreate(tag.getValue());
    thisObj.f_nativePtr((jlong)&logger);
}
//{_tag_}release(J)V
void Java_bluebox_ll_Logger_release(::JNIEnv* envPtr, ::jclass , ::jlong n_nativePtr){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    ll::io::LoggerRegistry::getInstance().erase(((ll::io::Logger*)n_nativePtr)->getTitle());
}


}