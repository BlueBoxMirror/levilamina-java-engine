//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/Predicate.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::function::O_Predicate>(){
    return "Ljava/util/function/Predicate;";
}
jnihelper::proxy::java::util::function::O_Predicate::O_Predicate(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::function::C_Predicate::C_Predicate(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::function::O_Predicate>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
