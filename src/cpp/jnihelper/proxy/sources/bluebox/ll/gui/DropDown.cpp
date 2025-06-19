//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/DropDown.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_DropDown>(){
    return "Lbluebox/ll/gui/DropDown;";
}
jnihelper::proxy::bluebox::ll::gui::O_DropDown::O_DropDown(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_DropDown::C_DropDown(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_DropDown>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
