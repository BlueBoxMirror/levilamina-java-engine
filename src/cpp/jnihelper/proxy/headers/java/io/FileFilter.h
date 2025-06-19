//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::io {

    class O_FileFilter: public ::jnihelper::JavaObject{
    public:
        O_FileFilter(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_FileFilter: public JavaClass<O_FileFilter>{
    public:
        C_FileFilter(::jnihelper::Env& env);
        //{_static_}
    };
    
}