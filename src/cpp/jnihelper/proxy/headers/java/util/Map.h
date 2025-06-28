//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_Map: public ::jnihelper::JavaObject{
    public:
        O_Map(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Map: public JavaClass<O_Map>{
    public:
        C_Map(::jnihelper::Env& env);
        //{_static_}
    };
    
}