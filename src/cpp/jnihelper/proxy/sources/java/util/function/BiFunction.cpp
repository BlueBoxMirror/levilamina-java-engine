//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/BiFunction.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::function::O_BiFunction>(){
    return "Ljava/util/function/BiFunction;";
}
jnihelper::proxy::java::util::function::O_BiFunction::O_BiFunction(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::function::C_BiFunction::C_BiFunction(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::function::O_BiFunction>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
