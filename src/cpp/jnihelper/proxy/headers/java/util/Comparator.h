//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_Comparator: public ::jnihelper::JavaObject{
    public:
        O_Comparator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Comparator: public JavaClass<O_Comparator>{
    public:
        C_Comparator(::jnihelper::Env& env);
        //{_static_}
    };
    
}