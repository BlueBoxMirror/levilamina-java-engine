//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::nio::charset {

    class O_CharsetDecoder: public ::jnihelper::JavaObject{
    public:
        O_CharsetDecoder(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_CharsetDecoder: public JavaClass<O_CharsetDecoder>{
    public:
        C_CharsetDecoder(::jnihelper::Env& env);
        //{_static_}
    };
    
}