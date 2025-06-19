//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::util {

    class O_Angle: public ::jnihelper::JavaObject{
    public:
        O_Angle(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Angle: public JavaClass<O_Angle>{
    public:
        C_Angle(::jnihelper::Env& env);
        //{_static_}
    };
    
}