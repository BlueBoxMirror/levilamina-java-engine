//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::lang {

    class O_AbstractStringBuilder: public ::jnihelper::JavaObject{
    public:
        O_AbstractStringBuilder(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_AbstractStringBuilder: public JavaClass<O_AbstractStringBuilder>{
    public:
        C_AbstractStringBuilder(::jnihelper::Env& env);
        //{_static_}
    };
    
}