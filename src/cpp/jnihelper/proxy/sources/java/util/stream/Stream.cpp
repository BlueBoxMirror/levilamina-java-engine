//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/stream/Stream.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::stream::O_Stream>(){
    return "Ljava/util/stream/Stream;";
}
jnihelper::proxy::java::util::stream::O_Stream::O_Stream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::stream::C_Stream::C_Stream(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::stream::O_Stream>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
