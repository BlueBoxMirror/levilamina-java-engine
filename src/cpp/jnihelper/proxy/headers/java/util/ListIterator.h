//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_ListIterator: public ::jnihelper::JavaObject{
    public:
        O_ListIterator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ListIterator: public JavaClass<O_ListIterator>{
    public:
        C_ListIterator(::jnihelper::Env& env);
        //{_static_}
    };
    
}