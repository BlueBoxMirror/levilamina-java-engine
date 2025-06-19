//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_Object>(){
    return "Ljava/lang/Object;";
}
jnihelper::proxy::java::lang::O_Object::O_Object(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_Object::C_Object(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_Object>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
