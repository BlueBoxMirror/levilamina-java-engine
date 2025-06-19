//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/net/URLClassLoader.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::net::O_URLClassLoader>(){
    return "Ljava/net/URLClassLoader;";
}
jnihelper::proxy::java::net::O_URLClassLoader::O_URLClassLoader(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::net::C_URLClassLoader::C_URLClassLoader(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::net::O_URLClassLoader>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
