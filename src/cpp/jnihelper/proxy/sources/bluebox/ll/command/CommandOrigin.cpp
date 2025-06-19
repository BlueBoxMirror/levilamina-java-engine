//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/command/CommandOrigin.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::command::O_CommandOrigin>(){
    return "Lbluebox/ll/command/CommandOrigin;";
}
jnihelper::proxy::bluebox::ll::command::O_CommandOrigin::O_CommandOrigin(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::command::C_CommandOrigin::C_CommandOrigin(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::command::O_CommandOrigin>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
