//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_NbtObject: public ::jnihelper::JavaObject{
    public:
        O_NbtObject(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_NbtObject: public JavaClass<O_NbtObject>{
    public:
        C_NbtObject(::jnihelper::Env& env);
        //{_static_}
    };
    
}