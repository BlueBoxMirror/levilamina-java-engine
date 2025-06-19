//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/command/Command.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::command::O_Command>(){
    return "Lbluebox/ll/command/Command;";
}
jnihelper::proxy::bluebox::ll::command::O_Command::O_Command(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::command::C_Command::C_Command(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::command::O_Command>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
