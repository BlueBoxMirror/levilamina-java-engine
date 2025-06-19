//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Optional.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_Optional>(){
    return "Ljava/util/Optional;";
}
jnihelper::proxy::java::util::O_Optional::O_Optional(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_Optional::C_Optional(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_Optional>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
