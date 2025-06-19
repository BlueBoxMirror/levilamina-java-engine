//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/FileFilter.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_FileFilter>(){
    return "Ljava/io/FileFilter;";
}
jnihelper::proxy::java::io::O_FileFilter::O_FileFilter(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_FileFilter::C_FileFilter(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_FileFilter>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
