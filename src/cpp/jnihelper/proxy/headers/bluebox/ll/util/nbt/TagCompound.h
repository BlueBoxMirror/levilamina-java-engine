//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagCompound: public ::jnihelper::JavaObject{
    public:
        O_TagCompound(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_TagCompound: public JavaClass<O_TagCompound>{
    public:
        C_TagCompound(::jnihelper::Env& env);
        //{_static_}
    };
    
}