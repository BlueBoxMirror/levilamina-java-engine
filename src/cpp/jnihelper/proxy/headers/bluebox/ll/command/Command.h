//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::command {

    class O_Command: public ::jnihelper::JavaObject{
    public:
        O_Command(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Command: public JavaClass<O_Command>{
    public:
        C_Command(::jnihelper::Env& env);
        //{_static_}
    };
    
}