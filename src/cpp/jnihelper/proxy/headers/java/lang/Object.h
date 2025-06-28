// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Class.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

namespace jnihelper::proxy::java::lang {

    class O_Object: public ::jnihelper::JavaObject{
    public:
        O_Object(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}wait0(long)void
        void m_wait0(::jlong _arg0);
//{_tag_}wait()void
        void m_wait();
        //{_tag_}wait(long,int)void
        void m_wait(::jlong _arg0, ::jint _arg1);
        //{_tag_}notify()void
        void m_notify();
        //{_tag_}notifyAll()void
        void m_notifyAll();
        //{_tag_}finalize()void
        void m_finalize();
        //{_tag_}equals(java.lang.Object)boolean
        ::jboolean m_equals(::jnihelper::proxy::java::lang::O_Object _arg0);
        //{_tag_}getClass()java.lang.Class
        ::jnihelper::proxy::java::lang::O_Class m_getClass();
        //{_tag_}clone()java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_clone();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}hashCode()int
        ::jint m_hashCode();
        //{_tag_}wait(long)void
        void m_wait(::jlong _arg0);
    };
    
    class C_Object: public JavaClass<O_Object>{
    public:
        C_Object(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}<init>()java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object newObj();
    };
    
}