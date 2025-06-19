//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_HashMap: public ::jnihelper::JavaObject{
    public:
        O_HashMap(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_HashMap: public JavaClass<O_HashMap>{
    public:
        C_HashMap(::jnihelper::Env& env);
        //{_static_}
    };
    
}