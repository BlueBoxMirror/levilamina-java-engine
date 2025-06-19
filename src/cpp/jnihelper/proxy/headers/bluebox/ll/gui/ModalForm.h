//{_simpleSpawn_}
// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::gui {

    class O_ModalForm: public ::jnihelper::JavaObject{
    public:
        O_ModalForm(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_ModalForm: public JavaClass<O_ModalForm>{
    public:
        C_ModalForm(::jnihelper::Env& env);
        //{_static_}
    };
    
}