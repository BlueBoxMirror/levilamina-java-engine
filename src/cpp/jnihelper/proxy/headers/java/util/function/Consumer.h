//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::function {

    class O_Consumer: public ::jnihelper::JavaObject{
    public:
        O_Consumer(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Consumer: public JavaClass<O_Consumer>{
    public:
        C_Consumer(::jnihelper::Env& env);
        //{_static_}
    };
    
}