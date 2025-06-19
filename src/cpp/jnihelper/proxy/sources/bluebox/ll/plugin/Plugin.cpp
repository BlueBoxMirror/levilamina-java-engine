//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/Plugin.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::plugin::O_Plugin>(){
    return "Lbluebox/ll/plugin/Plugin;";
}
jnihelper::proxy::bluebox::ll::plugin::O_Plugin::O_Plugin(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::plugin::C_Plugin::C_Plugin(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::plugin::O_Plugin>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
