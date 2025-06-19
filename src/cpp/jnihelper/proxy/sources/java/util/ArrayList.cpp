//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/ArrayList.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_ArrayList>(){
    return "Ljava/util/ArrayList;";
}
jnihelper::proxy::java::util::O_ArrayList::O_ArrayList(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_ArrayList::C_ArrayList(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_ArrayList>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
