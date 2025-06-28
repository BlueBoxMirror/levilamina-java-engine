//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::function {

    class O_BiConsumer: public ::jnihelper::JavaObject{
    public:
        O_BiConsumer(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_BiConsumer: public JavaClass<O_BiConsumer>{
    public:
        C_BiConsumer(::jnihelper::Env& env);
        //{_static_}
    };
    
}