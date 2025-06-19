// This file is generated automatically.
#include "jnihelper/jni/headers/bluebox/ll/Logger.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"

namespace jnihelper::jni {

//{_tag_}init(Ljava/lang/String;)V
void Java_bluebox_ll_Logger_init(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_tag){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto name=String.package(n_tag);
    auto logger=ll::io::LoggerRegistry::getInstance().getOrCreate(name.getValue());
    thisObj.f_nativePtr((jlong)logger.get());
}
//{_tag_}info(Ljava/lang/String;)V
void Java_bluebox_ll_Logger_info(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto message=String.package(n_message);
    ll::io::Logger* logger=(ll::io::Logger*)thisObj.f_nativePtr();
    logger->info(message.getValue());
}
//{_tag_}error(Ljava/lang/String;)V
void Java_bluebox_ll_Logger_error(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto message=String.package(n_message);
    ll::io::Logger* logger=(ll::io::Logger*)thisObj.f_nativePtr();
    logger->error(message.getValue());
}
//{_tag_}debug(Ljava/lang/String;)V
void Java_bluebox_ll_Logger_debug(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto message=String.package(n_message);
    ll::io::Logger* logger=(ll::io::Logger*)thisObj.f_nativePtr();
    logger->debug(message.getValue());
}
//{_tag_}warn(Ljava/lang/String;)V
void Java_bluebox_ll_Logger_warn(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    auto thisObj=Logger.package(n_thisObj);
    auto message=String.package(n_message);
    ll::io::Logger* logger=(ll::io::Logger*)thisObj.f_nativePtr();
    logger->warn(message.getValue());
}
//{_tag_}release(J)V
void Java_bluebox_ll_Logger_release(::JNIEnv* envPtr, ::jclass , ::jlong n_nativePtr){
    Env env(envPtr);
    IMPORT(bluebox::ll,Logger)
    delete (ll::io::Logger*)n_nativePtr;
}

}