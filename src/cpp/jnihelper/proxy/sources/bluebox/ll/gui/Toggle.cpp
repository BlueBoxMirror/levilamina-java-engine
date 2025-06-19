//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/Toggle.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_Toggle>(){
    return "Lbluebox/ll/gui/Toggle;";
}
jnihelper::proxy::bluebox::ll::gui::O_Toggle::O_Toggle(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_Toggle::C_Toggle(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_Toggle>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
