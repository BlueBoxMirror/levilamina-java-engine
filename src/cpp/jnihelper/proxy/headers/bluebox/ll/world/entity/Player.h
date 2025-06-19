//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::entity {

    class O_Player: public ::jnihelper::JavaObject{
    public:
        O_Player(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Player: public JavaClass<O_Player>{
    public:
        C_Player(::jnihelper::Env& env);
        //{_static_}
    };
    
}