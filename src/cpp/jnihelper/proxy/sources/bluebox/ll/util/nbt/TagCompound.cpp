//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagCompound.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound>(){
    return "Lbluebox/ll/util/nbt/TagCompound;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::O_TagCompound(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagCompound::C_TagCompound(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
