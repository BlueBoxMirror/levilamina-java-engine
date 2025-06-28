// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
namespace jnihelper::proxy::bluebox::ll {

    class O_Logger: public ::jnihelper::JavaObject{
    public:
        O_Logger(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}setLevel(int)void
        void m_setLevel(::jint _level);
        //{_tag_}flush()void
        void m_flush();
        //{_tag_}trace(java.lang.String,[Ljava.lang.Object;)void
        void m_trace(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}fatal(java.lang.String,[Ljava.lang.Object;)void
        void m_fatal(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}warn(java.lang.String,[Ljava.lang.Object;)void
        void m_warn(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}getTitle()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getTitle();
        //{_tag_}trace(java.lang.String)void
        void m_trace(::jnihelper::proxy::java::lang::O_String _message);
        //{_tag_}error(java.lang.String,[Ljava.lang.Object;)void
        void m_error(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}info(java.lang.String)void
        void m_info(::jnihelper::proxy::java::lang::O_String _message);
                //{_tag_}getLevel()int
        ::jint m_getLevel();
        //{_tag_}log(int,java.lang.String)void
        void m_log(::jint _level, ::jnihelper::proxy::java::lang::O_String _message);
        //{_tag_}debug(java.lang.String,[Ljava.lang.Object;)void
        void m_debug(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}fatal(java.lang.String)void
        void m_fatal(::jnihelper::proxy::java::lang::O_String _message);
        //{_tag_}log(int,java.lang.String,[Ljava.lang.Object;)void
        void m_log(::jint _level, ::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}setFlushLevel(int)void
        void m_setFlushLevel(::jint _level);
//{_tag_}info(java.lang.String,[Ljava.lang.Object;)void
        void m_info(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}nativePtr[getter]:long
        ::jlong f_nativePtr();
        //{_tag_}warn(java.lang.String)void
        void m_warn(::jnihelper::proxy::java::lang::O_String _message);
        //{_tag_}getNativePointer()long
        ::jlong m_getNativePointer();
        //{_tag_}error(java.lang.String)void
        void m_error(::jnihelper::proxy::java::lang::O_String _message);
        //{_tag_}init(java.lang.String)void
        void m_init(::jnihelper::proxy::java::lang::O_String _tag);
        //{_tag_}debug(java.lang.String)void
        void m_debug(::jnihelper::proxy::java::lang::O_String _message);
        //{_tag_}nativePtr[setter]:long
        void f_nativePtr(::jlong value);
    };
    
    class C_Logger: public JavaClass<O_Logger>{
    public:
        C_Logger(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}TRACE[getter]:int
::jint f_TRACE();
//{_tag_}DEBUG[getter]:int
::jint f_DEBUG();
//{_tag_}TRACE[setter]:int
void f_TRACE(::jint value);
//{_tag_}INFO[getter]:int
::jint f_INFO();
//{_tag_}WARN[getter]:int
::jint f_WARN();
//{_tag_}FATAL[setter]:int
void f_FATAL(::jint value);
//{_tag_}DEBUG[setter]:int
void f_DEBUG(::jint value);
//{_tag_}ERROR[setter]:int
void f_ERROR(::jint value);
//{_tag_}OFF[getter]:int
::jint f_OFF();
//{_tag_}ERROR[getter]:int
::jint f_ERROR();
//{_tag_}OFF[setter]:int
void f_OFF(::jint value);
//{_tag_}FATAL[getter]:int
::jint f_FATAL();
//{_tag_}INFO[setter]:int
void f_INFO(::jint value);
//{_tag_}WARN[setter]:int
void f_WARN(::jint value);
//{_tag_}<init>(long)bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger newObj(::jlong _nativePtr);
        //{_tag_}<init>(java.lang.String)bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger newObj(::jnihelper::proxy::java::lang::O_String _tag);
        //{_tag_}release(long)void
        void m_release(::jlong _nativePtr);
    };
    
}