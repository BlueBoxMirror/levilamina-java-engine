//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/item/ItemStack.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::item::O_ItemStack>(){
    return "Lbluebox/ll/world/item/ItemStack;";
}
jnihelper::proxy::bluebox::ll::world::item::O_ItemStack::O_ItemStack(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::item::C_ItemStack::C_ItemStack(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::item::O_ItemStack>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
