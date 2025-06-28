//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_Class: public ::jnihelper::JavaObject{
    public:
        O_Class(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Class: public JavaClass<O_Class>{
    public:
        C_Class(::jnihelper::Env& env);
        //{_static_}
    };
    
}