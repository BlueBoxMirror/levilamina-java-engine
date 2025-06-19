//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::block {

    class O_BlockEntity: public ::jnihelper::JavaObject{
    public:
        O_BlockEntity(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_BlockEntity: public JavaClass<O_BlockEntity>{
    public:
        C_BlockEntity(::jnihelper::Env& env);
        //{_static_}
    };
    
}