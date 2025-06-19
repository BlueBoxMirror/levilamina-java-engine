//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_Object: public ::jnihelper::JavaObject{
    public:
        O_Object(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Object: public JavaClass<O_Object>{
    public:
        C_Object(::jnihelper::Env& env);
        //{_static_}
    };
    
}