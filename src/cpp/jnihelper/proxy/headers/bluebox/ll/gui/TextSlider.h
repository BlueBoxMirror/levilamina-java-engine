//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_TextSlider: public ::jnihelper::JavaObject{
    public:
        O_TextSlider(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_TextSlider: public JavaClass<O_TextSlider>{
    public:
        C_TextSlider(::jnihelper::Env& env);
        //{_static_}
    };
    
}