// This file is generated automatically.
// Do not modify it manually.
#pragma once
#include "jnihelper/proxy/headers/bluebox/ll/plugin/Plugin.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/LeviLamina.h"
#include "jnihelper/jnihelper.h"
namespace jnihelper::jni {
    //{_tag_}hasPlugin(Ljava/lang/String;)Z
    ::jboolean Java_bluebox_ll_plugin_LeviLamina_hasPlugin(::JNIEnv* envPtr, ::jclass , ::jobject n_name);
    //{_tag_}getNativePlugin(Ljava/lang/String;)Lbluebox/ll/plugin/Plugin;
    ::jobject Java_bluebox_ll_plugin_LeviLamina_getNativePlugin(::JNIEnv* envPtr, ::jclass , ::jobject n_name);
}
