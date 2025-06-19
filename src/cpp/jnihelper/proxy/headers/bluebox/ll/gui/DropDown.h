//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_DropDown: public ::jnihelper::JavaObject{
    public:
        O_DropDown(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_DropDown: public JavaClass<O_DropDown>{
    public:
        C_DropDown(::jnihelper::Env& env);
        //{_static_}
    };
    
}