//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/jdk/internal/misc/Unsafe.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::jdk::internal::misc::O_Unsafe>(){
    return "Ljdk/internal/misc/Unsafe;";
}
jnihelper::proxy::jdk::internal::misc::O_Unsafe::O_Unsafe(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::jdk::internal::misc::C_Unsafe::C_Unsafe(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::jdk::internal::misc::O_Unsafe>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
