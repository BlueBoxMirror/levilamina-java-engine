//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/ClassLoader.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_ClassLoader>(){
    return "Ljava/lang/ClassLoader;";
}
jnihelper::proxy::java::lang::O_ClassLoader::O_ClassLoader(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_ClassLoader::C_ClassLoader(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_ClassLoader>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
