//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_ArrayList: public ::jnihelper::JavaObject{
    public:
        O_ArrayList(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ArrayList: public JavaClass<O_ArrayList>{
    public:
        C_ArrayList(::jnihelper::Env& env);
        //{_static_}
    };
    
}