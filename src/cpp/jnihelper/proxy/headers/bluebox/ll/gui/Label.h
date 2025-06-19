//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_Label: public ::jnihelper::JavaObject{
    public:
        O_Label(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Label: public JavaClass<O_Label>{
    public:
        C_Label(::jnihelper::Env& env);
        //{_static_}
    };
    
}