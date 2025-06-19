//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/stream/IntStream.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::stream::O_IntStream>(){
    return "Ljava/util/stream/IntStream;";
}
jnihelper::proxy::java::util::stream::O_IntStream::O_IntStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::stream::C_IntStream::C_IntStream(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::stream::O_IntStream>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
