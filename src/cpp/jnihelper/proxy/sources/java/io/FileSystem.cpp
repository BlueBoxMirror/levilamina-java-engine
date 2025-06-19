//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/FileSystem.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_FileSystem>(){
    return "Ljava/io/FileSystem;";
}
jnihelper::proxy::java::io::O_FileSystem::O_FileSystem(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_FileSystem::C_FileSystem(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_FileSystem>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
