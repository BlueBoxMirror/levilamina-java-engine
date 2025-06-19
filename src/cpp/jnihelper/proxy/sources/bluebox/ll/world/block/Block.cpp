//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/block/Block.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::block::O_Block>(){
    return "Lbluebox/ll/world/block/Block;";
}
jnihelper::proxy::bluebox::ll::world::block::O_Block::O_Block(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::block::C_Block::C_Block(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::block::O_Block>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
