//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/BiConsumer.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::function::O_BiConsumer>(){
    return "Ljava/util/function/BiConsumer;";
}
jnihelper::proxy::java::util::function::O_BiConsumer::O_BiConsumer(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::function::C_BiConsumer::C_BiConsumer(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::function::O_BiConsumer>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
