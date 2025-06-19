//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/LinkedList.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_LinkedList>(){
    return "Ljava/util/LinkedList;";
}
jnihelper::proxy::java::util::O_LinkedList::O_LinkedList(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_LinkedList::C_LinkedList(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_LinkedList>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
