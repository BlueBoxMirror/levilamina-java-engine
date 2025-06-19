//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/entity/Entity.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::entity::O_Entity>(){
    return "Lbluebox/ll/world/entity/Entity;";
}
jnihelper::proxy::bluebox::ll::world::entity::O_Entity::O_Entity(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::entity::C_Entity::C_Entity(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::entity::O_Entity>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
