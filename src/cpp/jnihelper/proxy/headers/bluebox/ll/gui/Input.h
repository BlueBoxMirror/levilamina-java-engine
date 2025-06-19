//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_Input: public ::jnihelper::JavaObject{
    public:
        O_Input(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Input: public JavaClass<O_Input>{
    public:
        C_Input(::jnihelper::Env& env);
        //{_static_}
    };
    
}