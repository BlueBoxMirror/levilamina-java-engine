//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_LinkedList: public ::jnihelper::JavaObject{
    public:
        O_LinkedList(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_LinkedList: public JavaClass<O_LinkedList>{
    public:
        C_LinkedList(::jnihelper::Env& env);
        //{_static_}
    };
    
}