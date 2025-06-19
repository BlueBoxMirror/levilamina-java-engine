//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util::stream {

    class O_Stream: public ::jnihelper::JavaObject{
    public:
        O_Stream(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_Stream: public JavaClass<O_Stream>{
    public:
        C_Stream(::jnihelper::Env& env);
        //{_static_}
    };
    
}