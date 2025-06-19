//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/Function.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::function::O_Function>(){
    return "Ljava/util/function/Function;";
}
jnihelper::proxy::java::util::function::O_Function::O_Function(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::function::C_Function::C_Function(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::function::O_Function>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
