//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::entity::Player {

    class O_ChatType: public ::jnihelper::JavaObject{
    public:
        O_ChatType(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ChatType: public JavaClass<O_ChatType>{
    public:
        C_ChatType(::jnihelper::Env& env);
        //{_static_}
    };
    
}