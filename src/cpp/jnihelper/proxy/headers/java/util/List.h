//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::util {

    class O_List: public ::jnihelper::JavaObject{
    public:
        O_List(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_List: public JavaClass<O_List>{
    public:
        C_List(::jnihelper::Env& env);
        //{_static_}
    };
    
}