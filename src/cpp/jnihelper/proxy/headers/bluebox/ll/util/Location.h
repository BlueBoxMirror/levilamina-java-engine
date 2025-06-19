//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::util {

    class O_Location: public ::jnihelper::JavaObject{
    public:
        O_Location(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Location: public JavaClass<O_Location>{
    public:
        C_Location(::jnihelper::Env& env);
        //{_static_}
    };
    
}