//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/HashMap.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_HashMap>(){
    return "Ljava/util/HashMap;";
}
jnihelper::proxy::java::util::O_HashMap::O_HashMap(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_HashMap::C_HashMap(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_HashMap>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
