//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::com::google::gson {

    class O_Gson: public ::jnihelper::JavaObject{
    public:
        O_Gson(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Gson: public JavaClass<O_Gson>{
    public:
        C_Gson(::jnihelper::Env& env);
        //{_static_}
    };
    
}