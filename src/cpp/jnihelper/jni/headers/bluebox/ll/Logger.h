// This file is generated automatically.
// Do not modify it manually.
#pragma once
#include "jnihelper/proxy/headers/bluebox/ll/Logger.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "jnihelper/jnihelper.h"
namespace jnihelper::jni {
    //{_tag_}init(Ljava/lang/String;)V
    void Java_bluebox_ll_Logger_init(::JNIEnv* envPtr, ::jobject n_thisObj, ::jobject n_tag);
    //{_tag_}log(ILjava/lang/String;)V
    void Java_bluebox_ll_Logger_log(::JNIEnv* envPtr, ::jobject n_thisObj, ::jint n_level, ::jobject n_message);
    //{_tag_}getTitle()Ljava/lang/String;
    ::jobject Java_bluebox_ll_Logger_getTitle(::JNIEnv* envPtr, ::jobject n_thisObj);
    //{_tag_}setLevel(I)V
    void Java_bluebox_ll_Logger_setLevel(::JNIEnv* envPtr, ::jobject n_thisObj, ::jint n_level);
    //{_tag_}getLevel()I
    ::jint Java_bluebox_ll_Logger_getLevel(::JNIEnv* envPtr, ::jobject n_thisObj);
    //{_tag_}setFlushLevel(I)V
    void Java_bluebox_ll_Logger_setFlushLevel(::JNIEnv* envPtr, ::jobject n_thisObj, ::jint n_level);
    //{_tag_}flush()V
    void Java_bluebox_ll_Logger_flush(::JNIEnv* envPtr, ::jobject n_thisObj);
    //{_tag_}release(J)V
    void Java_bluebox_ll_Logger_release(::JNIEnv* envPtr, ::jclass , ::jlong n_nativePtr);
}
