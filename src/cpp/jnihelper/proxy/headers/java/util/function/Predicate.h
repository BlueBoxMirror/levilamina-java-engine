//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::function {

    class O_Predicate: public ::jnihelper::JavaObject{
    public:
        O_Predicate(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Predicate: public JavaClass<O_Predicate>{
    public:
        C_Predicate(::jnihelper::Env& env);
        //{_static_}
    };
    
}