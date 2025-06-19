//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/StringBuffer.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_StringBuffer>(){
    return "Ljava/lang/StringBuffer;";
}
jnihelper::proxy::java::lang::O_StringBuffer::O_StringBuffer(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_StringBuffer::C_StringBuffer(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_StringBuffer>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
