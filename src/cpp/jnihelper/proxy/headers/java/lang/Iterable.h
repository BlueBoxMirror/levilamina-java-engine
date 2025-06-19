//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_Iterable: public ::jnihelper::JavaObject{
    public:
        O_Iterable(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Iterable: public JavaClass<O_Iterable>{
    public:
        C_Iterable(::jnihelper::Env& env);
        //{_static_}
    };
    
}