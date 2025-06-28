//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_Spliterator: public ::jnihelper::JavaObject{
    public:
        O_Spliterator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Spliterator: public JavaClass<O_Spliterator>{
    public:
        C_Spliterator(::jnihelper::Env& env);
        //{_static_}
    };
    
}