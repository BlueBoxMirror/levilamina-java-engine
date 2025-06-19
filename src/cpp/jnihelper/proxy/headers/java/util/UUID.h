//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_UUID: public ::jnihelper::JavaObject{
    public:
        O_UUID(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_UUID: public JavaClass<O_UUID>{
    public:
        C_UUID(::jnihelper::Env& env);
        //{_static_}
    };
    
}