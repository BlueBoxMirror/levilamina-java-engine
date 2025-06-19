//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang::invoke {

    class O_MethodHandles$Lookup: public ::jnihelper::JavaObject{
    public:
        O_MethodHandles$Lookup(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_MethodHandles$Lookup: public JavaClass<O_MethodHandles$Lookup>{
    public:
        C_MethodHandles$Lookup(::jnihelper::Env& env);
        //{_static_}
    };
    
}