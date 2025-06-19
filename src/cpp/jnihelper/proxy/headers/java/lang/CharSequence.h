//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_CharSequence: public ::jnihelper::JavaObject{
    public:
        O_CharSequence(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_CharSequence: public JavaClass<O_CharSequence>{
    public:
        C_CharSequence(::jnihelper::Env& env);
        //{_static_}
    };
    
}