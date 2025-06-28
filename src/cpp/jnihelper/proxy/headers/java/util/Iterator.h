// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/util/function/Consumer.h"
namespace jnihelper::proxy::java::util {

    class O_Iterator: public ::jnihelper::JavaObject{
    public:
        O_Iterator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}forEachRemaining(java.util.function.Consumer)void
        void m_forEachRemaining(::jnihelper::proxy::java::util::function::O_Consumer arg0);
        //{_tag_}remove()void
        void m_remove();
        //{_tag_}hasNext()boolean
        ::jboolean m_hasNext();
        //{_tag_}next()java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_next();
    };
    
    class C_Iterator: public JavaClass<O_Iterator>{
    public:
        C_Iterator(::jnihelper::Env& env);
        //{_static_}
    };
    
}//{_static_}//{_static_}//{_static_}//{_static_}