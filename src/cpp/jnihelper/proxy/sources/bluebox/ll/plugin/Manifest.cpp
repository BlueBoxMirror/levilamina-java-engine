//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/Manifest.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::plugin::O_Manifest>(){
    return "Lbluebox/ll/plugin/Manifest;";
}
jnihelper::proxy::bluebox::ll::plugin::O_Manifest::O_Manifest(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::plugin::C_Manifest::C_Manifest(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::plugin::O_Manifest>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
