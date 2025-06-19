//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::entity {

    class O_Entity: public ::jnihelper::JavaObject{
    public:
        O_Entity(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Entity: public JavaClass<O_Entity>{
    public:
        C_Entity(::jnihelper::Env& env);
        //{_static_}
    };
    
}