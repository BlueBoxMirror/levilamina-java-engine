//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::block {

    class O_Block: public ::jnihelper::JavaObject{
    public:
        O_Block(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Block: public JavaClass<O_Block>{
    public:
        C_Block(::jnihelper::Env& env);
        //{_static_}
    };
    
}