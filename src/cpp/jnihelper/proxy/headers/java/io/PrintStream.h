//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::io {

    class O_PrintStream: public ::jnihelper::JavaObject{
    public:
        O_PrintStream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_PrintStream: public JavaClass<O_PrintStream>{
    public:
        C_PrintStream(::jnihelper::Env& env);
        //{_static_}
    };
    
}