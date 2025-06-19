//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/UUID.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_UUID>(){
    return "Ljava/util/UUID;";
}
jnihelper::proxy::java::util::O_UUID::O_UUID(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_UUID::C_UUID(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_UUID>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
