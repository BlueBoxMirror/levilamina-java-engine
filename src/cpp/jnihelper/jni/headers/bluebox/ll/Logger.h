// This file is generated automatically.
// Do not modify it manually.
#pragma once
#include "jnihelper/proxy/headers/bluebox/ll/Logger.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "jnihelper/jnihelper.h"
namespace jnihelper::jni {
    //{_tag_}init(Ljava/lang/String;)V
    void Java_bluebox_ll_Logger_init(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_tag);
    //{_tag_}info(Ljava/lang/String;)V
    void Java_bluebox_ll_Logger_info(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message);
    //{_tag_}error(Ljava/lang/String;)V
    void Java_bluebox_ll_Logger_error(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message);
    //{_tag_}debug(Ljava/lang/String;)V
    void Java_bluebox_ll_Logger_debug(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message);
    //{_tag_}warn(Ljava/lang/String;)V
    void Java_bluebox_ll_Logger_warn(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_message);
    //{_tag_}release(J)V
    void Java_bluebox_ll_Logger_release(::JNIEnv* envPtr, ::jclass , ::jlong n_nativePtr);
}
