//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/CharSequence.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_CharSequence>(){
    return "Ljava/lang/CharSequence;";
}
jnihelper::proxy::java::lang::O_CharSequence::O_CharSequence(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_CharSequence::C_CharSequence(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_CharSequence>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
