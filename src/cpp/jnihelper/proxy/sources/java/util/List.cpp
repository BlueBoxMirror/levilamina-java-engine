//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/List.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_List>(){
    return "Ljava/util/List;";
}
jnihelper::proxy::java::util::O_List::O_List(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_List::C_List(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_List>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
