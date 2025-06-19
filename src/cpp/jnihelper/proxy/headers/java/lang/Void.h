//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_Void: public ::jnihelper::JavaObject{
    public:
        O_Void(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Void: public JavaClass<O_Void>{
    public:
        C_Void(::jnihelper::Env& env);
        //{_static_}
    };
    
}