//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::plugin {

    class O_Manifest: public ::jnihelper::JavaObject{
    public:
        O_Manifest(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Manifest: public JavaClass<O_Manifest>{
    public:
        C_Manifest(::jnihelper::Env& env);
        //{_static_}
    };
    
}