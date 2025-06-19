//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::stream {

    class O_IntStream: public ::jnihelper::JavaObject{
    public:
        O_IntStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_IntStream: public JavaClass<O_IntStream>{
    public:
        C_IntStream(::jnihelper::Env& env);
        //{_static_}
    };
    
}