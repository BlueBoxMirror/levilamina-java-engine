//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_Optional: public ::jnihelper::JavaObject{
    public:
        O_Optional(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Optional: public JavaClass<O_Optional>{
    public:
        C_Optional(::jnihelper::Env& env);
        //{_static_}
    };
    
}