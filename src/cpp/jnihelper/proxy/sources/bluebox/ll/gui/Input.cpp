//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/Input.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_Input>(){
    return "Lbluebox/ll/gui/Input;";
}
jnihelper::proxy::bluebox::ll::gui::O_Input::O_Input(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_Input::C_Input(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_Input>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
