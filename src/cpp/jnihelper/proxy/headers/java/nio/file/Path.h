//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::nio::file {

    class O_Path: public ::jnihelper::JavaObject{
    public:
        O_Path(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Path: public JavaClass<O_Path>{
    public:
        C_Path(::jnihelper::Env& env);
        //{_static_}
    };
    
}