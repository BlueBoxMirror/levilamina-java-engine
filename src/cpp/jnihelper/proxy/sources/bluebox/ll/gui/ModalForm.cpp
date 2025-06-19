//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/gui/ModalForm.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::gui::O_ModalForm>(){
    return "Lbluebox/ll/gui/ModalForm;";
}
jnihelper::proxy::bluebox::ll::gui::O_ModalForm::O_ModalForm(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::gui::C_ModalForm::C_ModalForm(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::gui::O_ModalForm>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
