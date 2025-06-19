//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/PrintStream.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_PrintStream>(){
    return "Ljava/io/PrintStream;";
}
jnihelper::proxy::java::io::O_PrintStream::O_PrintStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_PrintStream::C_PrintStream(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_PrintStream>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
