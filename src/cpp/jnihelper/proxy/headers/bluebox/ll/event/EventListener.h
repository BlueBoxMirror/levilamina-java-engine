//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::event {

    class O_EventListener: public ::jnihelper::JavaObject{
    public:
        O_EventListener(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_EventListener: public JavaClass<O_EventListener>{
    public:
        C_EventListener(::jnihelper::Env& env);
        //{_static_}
    };
    
}