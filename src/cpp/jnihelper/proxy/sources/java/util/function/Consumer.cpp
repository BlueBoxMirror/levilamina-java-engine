//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/Consumer.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::function::O_Consumer>(){
    return "Ljava/util/function/Consumer;";
}
jnihelper::proxy::java::util::function::O_Consumer::O_Consumer(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::function::C_Consumer::C_Consumer(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::function::O_Consumer>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
