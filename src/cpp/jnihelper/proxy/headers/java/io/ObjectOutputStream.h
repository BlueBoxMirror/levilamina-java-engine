//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::io {

    class O_ObjectOutputStream: public ::jnihelper::JavaObject{
    public:
        O_ObjectOutputStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ObjectOutputStream: public JavaClass<O_ObjectOutputStream>{
    public:
        C_ObjectOutputStream(::jnihelper::Env& env);
        //{_static_}
    };
    
}