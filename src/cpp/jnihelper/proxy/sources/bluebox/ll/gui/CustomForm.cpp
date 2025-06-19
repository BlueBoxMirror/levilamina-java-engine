//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/CustomForm.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_CustomForm>(){
    return "Lbluebox/ll/gui/CustomForm;";
}
jnihelper::proxy::bluebox::ll::gui::O_CustomForm::O_CustomForm(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_CustomForm::C_CustomForm(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_CustomForm>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
