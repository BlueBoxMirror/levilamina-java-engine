//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_StringBuilder: public ::jnihelper::JavaObject{
    public:
        O_StringBuilder(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_StringBuilder: public JavaClass<O_StringBuilder>{
    public:
        C_StringBuilder(::jnihelper::Env& env);
        //{_static_}
    };
    
}