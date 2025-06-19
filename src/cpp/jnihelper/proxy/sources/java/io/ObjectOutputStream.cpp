//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/ObjectOutputStream.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_ObjectOutputStream>(){
    return "Ljava/io/ObjectOutputStream;";
}
jnihelper::proxy::java::io::O_ObjectOutputStream::O_ObjectOutputStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_ObjectOutputStream::C_ObjectOutputStream(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_ObjectOutputStream>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
