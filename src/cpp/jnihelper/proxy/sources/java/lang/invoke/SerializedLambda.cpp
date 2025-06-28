//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/invoke/SerializedLambda.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::invoke::O_SerializedLambda>(){
    return "Ljava/lang/invoke/SerializedLambda;";
}
jnihelper::proxy::java::lang::invoke::O_SerializedLambda::O_SerializedLambda(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::invoke::C_SerializedLambda::C_SerializedLambda(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::invoke::O_SerializedLambda>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
