//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/command/CommandOutput.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::command::O_CommandOutput>(){
    return "Lbluebox/ll/command/CommandOutput;";
}
jnihelper::proxy::bluebox::ll::command::O_CommandOutput::O_CommandOutput(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::command::C_CommandOutput::C_CommandOutput(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::command::O_CommandOutput>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
