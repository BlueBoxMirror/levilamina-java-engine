//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::event {

    class O_NativeEvent: public ::jnihelper::JavaObject{
    public:
        O_NativeEvent(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_NativeEvent: public JavaClass<O_NativeEvent>{
    public:
        C_NativeEvent(::jnihelper::Env& env);
        //{_static_}
    };
    
}