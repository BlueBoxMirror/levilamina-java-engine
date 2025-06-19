//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/entity/Player/ChatType.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::entity::Player::O_ChatType>(){
    return "Lbluebox/ll/world/entity/Player/ChatType;";
}
jnihelper::proxy::bluebox::ll::world::entity::Player::O_ChatType::O_ChatType(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::entity::Player::C_ChatType::C_ChatType(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::entity::Player::O_ChatType>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
