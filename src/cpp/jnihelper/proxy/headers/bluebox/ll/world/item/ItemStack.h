//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::item {

    class O_ItemStack: public ::jnihelper::JavaObject{
    public:
        O_ItemStack(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ItemStack: public JavaClass<O_ItemStack>{
    public:
        C_ItemStack(::jnihelper::Env& env);
        //{_static_}
    };
    
}