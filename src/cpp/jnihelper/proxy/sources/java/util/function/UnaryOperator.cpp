//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/UnaryOperator.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::function::O_UnaryOperator>(){
    return "Ljava/util/function/UnaryOperator;";
}
jnihelper::proxy::java::util::function::O_UnaryOperator::O_UnaryOperator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::function::C_UnaryOperator::C_UnaryOperator(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::function::O_UnaryOperator>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
