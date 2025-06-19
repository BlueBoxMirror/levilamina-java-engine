//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::io {

    class O_ObjectStreamField: public ::jnihelper::JavaObject{
    public:
        O_ObjectStreamField(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ObjectStreamField: public JavaClass<O_ObjectStreamField>{
    public:
        C_ObjectStreamField(::jnihelper::Env& env);
        //{_static_}
    };
    
}