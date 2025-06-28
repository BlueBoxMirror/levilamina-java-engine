//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/EventHandler.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::event::O_EventHandler>(){
    return "Lbluebox/ll/event/EventHandler;";
}
jnihelper::proxy::bluebox::ll::event::O_EventHandler::O_EventHandler(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::event::C_EventHandler::C_EventHandler(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::event::O_EventHandler>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
