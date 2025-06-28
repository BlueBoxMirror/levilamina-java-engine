// This file is generated automatically.
// Do not modify it manually.
#pragma once
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagCompound.h"
#include "jnihelper/jnihelper.h"
namespace jnihelper::jni {
    //{_tag_}toBinary()[B
    ::jbyteArray Java_bluebox_ll_util_nbt_TagCompound_toBinary(::JNIEnv* envPtr, ::jobject n_thisObj);
    //{_tag_}parse([B)Lbluebox/ll/util/nbt/TagCompound;
    ::jobject Java_bluebox_ll_util_nbt_TagCompound_parse(::JNIEnv* envPtr, ::jclass , ::jbyteArray n_bytes);
}
