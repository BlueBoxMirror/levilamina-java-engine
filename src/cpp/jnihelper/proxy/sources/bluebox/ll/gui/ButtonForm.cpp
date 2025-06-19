//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/ButtonForm.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_ButtonForm>(){
    return "Lbluebox/ll/gui/ButtonForm;";
}
jnihelper::proxy::bluebox::ll::gui::O_ButtonForm::O_ButtonForm(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_ButtonForm::C_ButtonForm(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_ButtonForm>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
