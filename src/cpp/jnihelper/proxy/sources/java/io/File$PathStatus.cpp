//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/File$PathStatus.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_File$PathStatus>(){
    return "Ljava/io/File$PathStatus;";
}
jnihelper::proxy::java::io::O_File$PathStatus::O_File$PathStatus(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_File$PathStatus::C_File$PathStatus(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_File$PathStatus>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
