//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::function {

    class O_UnaryOperator: public ::jnihelper::JavaObject{
    public:
        O_UnaryOperator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_UnaryOperator: public JavaClass<O_UnaryOperator>{
    public:
        C_UnaryOperator(::jnihelper::Env& env);
        //{_static_}
    };
    
}