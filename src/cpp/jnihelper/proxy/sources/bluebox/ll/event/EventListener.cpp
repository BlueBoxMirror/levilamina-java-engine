//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/EventListener.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::event::O_EventListener>(){
    return "Lbluebox/ll/event/EventListener;";
}
jnihelper::proxy::bluebox::ll::event::O_EventListener::O_EventListener(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::event::C_EventListener::C_EventListener(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::event::O_EventListener>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
