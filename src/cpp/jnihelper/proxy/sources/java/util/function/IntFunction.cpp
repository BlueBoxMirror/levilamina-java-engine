//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/IntFunction.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::function::O_IntFunction>(){
    return "Ljava/util/function/IntFunction;";
}
jnihelper::proxy::java::util::function::O_IntFunction::O_IntFunction(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::function::C_IntFunction::C_IntFunction(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::function::O_IntFunction>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
