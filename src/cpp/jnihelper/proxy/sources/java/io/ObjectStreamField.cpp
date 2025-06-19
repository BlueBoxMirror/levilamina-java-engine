//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/ObjectStreamField.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_ObjectStreamField>(){
    return "Ljava/io/ObjectStreamField;";
}
jnihelper::proxy::java::io::O_ObjectStreamField::O_ObjectStreamField(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_ObjectStreamField::C_ObjectStreamField(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_ObjectStreamField>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
