//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/Location.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::O_Location>(){
    return "Lbluebox/ll/util/Location;";
}
jnihelper::proxy::bluebox::ll::util::O_Location::O_Location(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::C_Location::C_Location(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::O_Location>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
