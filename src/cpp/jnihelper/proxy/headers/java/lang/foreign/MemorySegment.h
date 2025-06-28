//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang::foreign {

    class O_MemorySegment: public ::jnihelper::JavaObject{
    public:
        O_MemorySegment(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_MemorySegment: public JavaClass<O_MemorySegment>{
    public:
        C_MemorySegment(::jnihelper::Env& env);
        //{_static_}
    };
    
}