//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/Label.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_Label>(){
    return "Lbluebox/ll/gui/Label;";
}
jnihelper::proxy::bluebox::ll::gui::O_Label::O_Label(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_Label::C_Label(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_Label>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
