//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::command {

    class O_CommandOrigin: public ::jnihelper::JavaObject{
    public:
        O_CommandOrigin(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_CommandOrigin: public JavaClass<O_CommandOrigin>{
    public:
        C_CommandOrigin(::jnihelper::Env& env);
        //{_static_}
    };
    
}