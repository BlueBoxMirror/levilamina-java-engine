//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/NbtObject.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_NbtObject>(){
    return "Lbluebox/ll/util/nbt/NbtObject;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_NbtObject::O_NbtObject(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_NbtObject::C_NbtObject(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_NbtObject>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
