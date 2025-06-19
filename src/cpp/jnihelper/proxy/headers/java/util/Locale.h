//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_Locale: public ::jnihelper::JavaObject{
    public:
        O_Locale(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Locale: public JavaClass<O_Locale>{
    public:
        C_Locale(::jnihelper::Env& env);
        //{_static_}
    };
    
}