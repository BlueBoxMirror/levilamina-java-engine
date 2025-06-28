//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::event {

    class O_Event: public ::jnihelper::JavaObject{
    public:
        O_Event(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Event: public JavaClass<O_Event>{
    public:
        C_Event(::jnihelper::Env& env);
        //{_static_}
    };
    
}