//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/ListIterator.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_ListIterator>(){
    return "Ljava/util/ListIterator;";
}
jnihelper::proxy::java::util::O_ListIterator::O_ListIterator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_ListIterator::C_ListIterator(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_ListIterator>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
