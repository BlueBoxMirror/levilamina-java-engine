//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_ClassLoader: public ::jnihelper::JavaObject{
    public:
        O_ClassLoader(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ClassLoader: public JavaClass<O_ClassLoader>{
    public:
        C_ClassLoader(::jnihelper::Env& env);
        //{_static_}
    };
    
}