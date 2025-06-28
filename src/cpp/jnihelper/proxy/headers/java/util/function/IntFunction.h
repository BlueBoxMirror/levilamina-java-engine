//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::function {

    class O_IntFunction: public ::jnihelper::JavaObject{
    public:
        O_IntFunction(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_IntFunction: public JavaClass<O_IntFunction>{
    public:
        C_IntFunction(::jnihelper::Env& env);
        //{_static_}
    };
    
}