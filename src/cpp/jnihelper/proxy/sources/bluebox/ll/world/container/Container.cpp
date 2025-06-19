//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/container/Container.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::container::O_Container>(){
    return "Lbluebox/ll/world/container/Container;";
}
jnihelper::proxy::bluebox::ll::world::container::O_Container::O_Container(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::container::C_Container::C_Container(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::container::O_Container>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
