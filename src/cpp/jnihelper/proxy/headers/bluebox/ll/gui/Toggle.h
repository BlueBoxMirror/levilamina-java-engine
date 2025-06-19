//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_Toggle: public ::jnihelper::JavaObject{
    public:
        O_Toggle(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Toggle: public JavaClass<O_Toggle>{
    public:
        C_Toggle(::jnihelper::Env& env);
        //{_static_}
    };
    
}