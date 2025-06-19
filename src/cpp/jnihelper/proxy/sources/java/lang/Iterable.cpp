//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Iterable.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_Iterable>(){
    return "Ljava/lang/Iterable;";
}
jnihelper::proxy::java::lang::O_Iterable::O_Iterable(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_Iterable::C_Iterable(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_Iterable>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
