//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::io {

    class O_ObjectInputStream: public ::jnihelper::JavaObject{
    public:
        O_ObjectInputStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ObjectInputStream: public JavaClass<O_ObjectInputStream>{
    public:
        C_ObjectInputStream(::jnihelper::Env& env);
        //{_static_}
    };
    
}