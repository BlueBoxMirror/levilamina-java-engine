//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/AbstractStringBuilder.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_AbstractStringBuilder>(){
    return "Ljava/lang/AbstractStringBuilder;";
}
jnihelper::proxy::java::lang::O_AbstractStringBuilder::O_AbstractStringBuilder(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_AbstractStringBuilder::C_AbstractStringBuilder(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_AbstractStringBuilder>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
