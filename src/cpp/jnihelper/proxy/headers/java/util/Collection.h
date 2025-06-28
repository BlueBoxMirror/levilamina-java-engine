//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_Collection: public ::jnihelper::JavaObject{
    public:
        O_Collection(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Collection: public JavaClass<O_Collection>{
    public:
        C_Collection(::jnihelper::Env& env);
        //{_static_}
    };
    
}