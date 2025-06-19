//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/net/URL.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::net::O_URL>(){
    return "Ljava/net/URL;";
}
jnihelper::proxy::java::net::O_URL::O_URL(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::net::C_URL::C_URL(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::net::O_URL>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
