//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/TextSlider.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_TextSlider>(){
    return "Lbluebox/ll/gui/TextSlider;";
}
jnihelper::proxy::bluebox::ll::gui::O_TextSlider::O_TextSlider(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_TextSlider::C_TextSlider(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_TextSlider>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
