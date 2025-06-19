//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/invoke/MethodHandles$Lookup.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::invoke::O_MethodHandles$Lookup>(){
    return "Ljava/lang/invoke/MethodHandles$Lookup;";
}
jnihelper::proxy::java::lang::invoke::O_MethodHandles$Lookup::O_MethodHandles$Lookup(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::invoke::C_MethodHandles$Lookup::C_MethodHandles$Lookup(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::invoke::O_MethodHandles$Lookup>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
