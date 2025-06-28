//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/foreign/MemorySegment.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::foreign::O_MemorySegment>(){
    return "Ljava/lang/foreign/MemorySegment;";
}
jnihelper::proxy::java::lang::foreign::O_MemorySegment::O_MemorySegment(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::foreign::C_MemorySegment::C_MemorySegment(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::foreign::O_MemorySegment>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
