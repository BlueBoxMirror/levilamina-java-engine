//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::net {

    class O_URL: public ::jnihelper::JavaObject{
    public:
        O_URL(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_URL: public JavaClass<O_URL>{
    public:
        C_URL(::jnihelper::Env& env);
        //{_static_}
    };
    
}