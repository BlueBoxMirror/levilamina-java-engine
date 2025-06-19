//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::function {

    class O_Function: public ::jnihelper::JavaObject{
    public:
        O_Function(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Function: public JavaClass<O_Function>{
    public:
        C_Function(::jnihelper::Env& env);
        //{_static_}
    };
    
}