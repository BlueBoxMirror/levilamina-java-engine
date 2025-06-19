//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::container {

    class O_Container: public ::jnihelper::JavaObject{
    public:
        O_Container(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Container: public JavaClass<O_Container>{
    public:
        C_Container(::jnihelper::Env& env);
        //{_static_}
    };
    
}