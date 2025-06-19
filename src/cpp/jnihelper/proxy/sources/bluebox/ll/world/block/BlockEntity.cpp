//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/block/BlockEntity.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::block::O_BlockEntity>(){
    return "Lbluebox/ll/world/block/BlockEntity;";
}
jnihelper::proxy::bluebox::ll::world::block::O_BlockEntity::O_BlockEntity(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::block::C_BlockEntity::C_BlockEntity(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::block::O_BlockEntity>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
