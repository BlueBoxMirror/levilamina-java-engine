//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::nio::charset {

    class O_Charset: public ::jnihelper::JavaObject{
    public:
        O_Charset(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Charset: public JavaClass<O_Charset>{
    public:
        C_Charset(::jnihelper::Env& env);
        //{_static_}
    };
    
}