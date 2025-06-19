//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/entity/Player.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::entity::O_Player>(){
    return "Lbluebox/ll/world/entity/Player;";
}
jnihelper::proxy::bluebox::ll::world::entity::O_Player::O_Player(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::entity::C_Player::C_Player(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::entity::O_Player>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
