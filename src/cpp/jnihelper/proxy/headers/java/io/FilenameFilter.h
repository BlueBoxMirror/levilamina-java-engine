//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::java::io {

    class O_FilenameFilter: public ::jnihelper::JavaObject{
    public:
        O_FilenameFilter(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_FilenameFilter: public JavaClass<O_FilenameFilter>{
    public:
        C_FilenameFilter(::jnihelper::Env& env);
        //{_static_}
    };
    
}