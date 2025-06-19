//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/ObjectInputStream.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_ObjectInputStream>(){
    return "Ljava/io/ObjectInputStream;";
}
jnihelper::proxy::java::io::O_ObjectInputStream::O_ObjectInputStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_ObjectInputStream::C_ObjectInputStream(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_ObjectInputStream>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
