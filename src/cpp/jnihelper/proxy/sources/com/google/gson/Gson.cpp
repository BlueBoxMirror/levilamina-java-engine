//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/com/google/gson/Gson.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::com::google::gson::O_Gson>(){
    return "Lcom/google/gson/Gson;";
}
jnihelper::proxy::com::google::gson::O_Gson::O_Gson(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::com::google::gson::C_Gson::C_Gson(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::com::google::gson::O_Gson>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
