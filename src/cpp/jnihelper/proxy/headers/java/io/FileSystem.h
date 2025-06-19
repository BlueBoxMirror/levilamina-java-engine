//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::io {

    class O_FileSystem: public ::jnihelper::JavaObject{
    public:
        O_FileSystem(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_FileSystem: public JavaClass<O_FileSystem>{
    public:
        C_FileSystem(::jnihelper::Env& env);
        //{_static_}
    };
    
}