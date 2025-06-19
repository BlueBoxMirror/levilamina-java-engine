//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Comparator.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_Comparator>(){
    return "Ljava/util/Comparator;";
}
jnihelper::proxy::java::util::O_Comparator::O_Comparator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_Comparator::C_Comparator(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_Comparator>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
