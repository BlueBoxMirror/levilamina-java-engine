//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/FilenameFilter.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_FilenameFilter>(){
    return "Ljava/io/FilenameFilter;";
}
jnihelper::proxy::java::io::O_FilenameFilter::O_FilenameFilter(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_FilenameFilter::C_FilenameFilter(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_FilenameFilter>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
