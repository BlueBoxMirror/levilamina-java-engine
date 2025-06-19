//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Void.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_Void>(){
    return "Ljava/lang/Void;";
}
jnihelper::proxy::java::lang::O_Void::O_Void(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_Void::C_Void(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_Void>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
