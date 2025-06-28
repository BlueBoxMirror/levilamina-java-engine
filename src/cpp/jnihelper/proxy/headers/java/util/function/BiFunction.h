//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::function {

    class O_BiFunction: public ::jnihelper::JavaObject{
    public:
        O_BiFunction(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_BiFunction: public JavaClass<O_BiFunction>{
    public:
        C_BiFunction(::jnihelper::Env& env);
        //{_static_}
    };
    
}