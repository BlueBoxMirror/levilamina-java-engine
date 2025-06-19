//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::net {

    class O_URI: public ::jnihelper::JavaObject{
    public:
        O_URI(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_URI: public JavaClass<O_URI>{
    public:
        C_URI(::jnihelper::Env& env);
        //{_static_}
    };
    
}