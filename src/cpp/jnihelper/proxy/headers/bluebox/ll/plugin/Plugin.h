//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::plugin {

    class O_Plugin: public ::jnihelper::JavaObject{
    public:
        O_Plugin(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Plugin: public JavaClass<O_Plugin>{
    public:
        C_Plugin(::jnihelper::Env& env);
        //{_static_}
    };
    
}