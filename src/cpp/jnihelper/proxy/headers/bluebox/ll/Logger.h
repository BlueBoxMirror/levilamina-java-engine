// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
namespace jnihelper::proxy::bluebox::ll {

    class O_Logger: public ::jnihelper::JavaObject{
    public:
        O_Logger(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}info(java.lang.String)void
        void m_info(::jnihelper::proxy::java::lang::O_String arg0);
        //{_tag_}nativePtr[getter]:long
        ::jlong f_nativePtr();
        //{_tag_}warn(java.lang.String)void
        void m_warn(::jnihelper::proxy::java::lang::O_String arg0);
        //{_tag_}getNativePointer()long
        ::jlong m_getNativePointer();
        //{_tag_}error(java.lang.String)void
        void m_error(::jnihelper::proxy::java::lang::O_String arg0);
        //{_tag_}init(java.lang.String)void
        void m_init(::jnihelper::proxy::java::lang::O_String arg0);
        //{_tag_}debug(java.lang.String)void
        void m_debug(::jnihelper::proxy::java::lang::O_String arg0);
        //{_tag_}nativePtr[setter]:long
        void f_nativePtr(::jlong value);
    };
    
    class C_Logger: public JavaClass<O_Logger>{
    public:
        C_Logger(::jnihelper::Env& env);
        //{_static_}
        //{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(long)bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger newObj(::jlong arg0);
        //{_tag_}<init>(java.lang.String)bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger newObj(::jnihelper::proxy::java::lang::O_String arg0);
        //{_tag_}release(long)void
        void m_release(::jlong arg0);
    };
    
}