//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::command {

    class O_CommandOutput: public ::jnihelper::JavaObject{
    public:
        O_CommandOutput(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_CommandOutput: public JavaClass<O_CommandOutput>{
    public:
        C_CommandOutput(::jnihelper::Env& env);
        //{_static_}
    };
    
}