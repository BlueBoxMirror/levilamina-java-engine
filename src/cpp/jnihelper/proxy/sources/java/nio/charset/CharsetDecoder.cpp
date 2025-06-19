//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/nio/charset/CharsetDecoder.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::nio::charset::O_CharsetDecoder>(){
    return "Ljava/nio/charset/CharsetDecoder;";
}
jnihelper::proxy::java::nio::charset::O_CharsetDecoder::O_CharsetDecoder(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::nio::charset::C_CharsetDecoder::C_CharsetDecoder(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::nio::charset::O_CharsetDecoder>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
