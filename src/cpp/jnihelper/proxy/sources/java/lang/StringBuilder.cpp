//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/StringBuilder.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_StringBuilder>(){
    return "Ljava/lang/StringBuilder;";
}
jnihelper::proxy::java::lang::O_StringBuilder::O_StringBuilder(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_StringBuilder::C_StringBuilder(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_StringBuilder>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
