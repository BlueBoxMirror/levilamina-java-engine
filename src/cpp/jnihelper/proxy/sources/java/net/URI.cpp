//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/net/URI.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::net::O_URI>(){
    return "Ljava/net/URI;";
}
jnihelper::proxy::java::net::O_URI::O_URI(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::net::C_URI::C_URI(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::net::O_URI>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
