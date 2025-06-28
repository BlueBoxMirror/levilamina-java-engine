//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang::invoke {

    class O_SerializedLambda: public ::jnihelper::JavaObject{
    public:
        O_SerializedLambda(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_SerializedLambda: public JavaClass<O_SerializedLambda>{
    public:
        C_SerializedLambda(::jnihelper::Env& env);
        //{_static_}
    };
    
}