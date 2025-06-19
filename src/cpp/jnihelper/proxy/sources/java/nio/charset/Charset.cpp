//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/nio/charset/Charset.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::nio::charset::O_Charset>(){
    return "Ljava/nio/charset/Charset;";
}
jnihelper::proxy::java::nio::charset::O_Charset::O_Charset(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::nio::charset::C_Charset::C_Charset(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::nio::charset::O_Charset>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
