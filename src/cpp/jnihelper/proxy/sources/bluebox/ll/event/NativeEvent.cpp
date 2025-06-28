//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/NativeEvent.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::event::O_NativeEvent>(){
    return "Lbluebox/ll/event/NativeEvent;";
}
jnihelper::proxy::bluebox::ll::event::O_NativeEvent::O_NativeEvent(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::event::C_NativeEvent::C_NativeEvent(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::event::O_NativeEvent>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
