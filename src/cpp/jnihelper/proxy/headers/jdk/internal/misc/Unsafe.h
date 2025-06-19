//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::jdk::internal::misc {

    class O_Unsafe: public ::jnihelper::JavaObject{
    public:
        O_Unsafe(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Unsafe: public JavaClass<O_Unsafe>{
    public:
        C_Unsafe(::jnihelper::Env& env);
        //{_static_}
    };
    
}