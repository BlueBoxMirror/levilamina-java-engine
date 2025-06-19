//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::net {

    class O_URLClassLoader: public ::jnihelper::JavaObject{
    public:
        O_URLClassLoader(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_URLClassLoader: public JavaClass<O_URLClassLoader>{
    public:
        C_URLClassLoader(::jnihelper::Env& env);
        //{_static_}
    };
    
}