//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::event {

    class O_EventHandler: public ::jnihelper::JavaObject{
    public:
        O_EventHandler(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_EventHandler: public JavaClass<O_EventHandler>{
    public:
        C_EventHandler(::jnihelper::Env& env);
        //{_static_}
    };
    
}