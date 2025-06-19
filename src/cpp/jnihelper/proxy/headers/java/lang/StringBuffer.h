//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_StringBuffer: public ::jnihelper::JavaObject{
    public:
        O_StringBuffer(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_StringBuffer: public JavaClass<O_StringBuffer>{
    public:
        C_StringBuffer(::jnihelper::Env& env);
        //{_static_}
    };
    
}