//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/Angle.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::O_Angle>(){
    return "Lbluebox/ll/util/Angle;";
}
jnihelper::proxy::bluebox::ll::util::O_Angle::O_Angle(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::C_Angle::C_Angle(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::O_Angle>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
