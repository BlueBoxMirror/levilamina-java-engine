//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_CustomForm: public ::jnihelper::JavaObject{
    public:
        O_CustomForm(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_CustomForm: public JavaClass<O_CustomForm>{
    public:
        C_CustomForm(::jnihelper::Env& env);
        //{_static_}
    };
    
}