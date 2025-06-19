//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_Slider: public ::jnihelper::JavaObject{
    public:
        O_Slider(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Slider: public JavaClass<O_Slider>{
    public:
        C_Slider(::jnihelper::Env& env);
        //{_static_}
    };
    
}