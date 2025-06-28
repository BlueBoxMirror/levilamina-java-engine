//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Spliterator.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_Spliterator>(){
    return "Ljava/util/Spliterator;";
}
jnihelper::proxy::java::util::O_Spliterator::O_Spliterator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_Spliterator::C_Spliterator(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_Spliterator>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
