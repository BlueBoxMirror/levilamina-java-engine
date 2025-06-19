//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/nio/file/Path.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::nio::file::O_Path>(){
    return "Ljava/nio/file/Path;";
}
jnihelper::proxy::java::nio::file::O_Path::O_Path(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::nio::file::C_Path::C_Path(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::nio::file::O_Path>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
