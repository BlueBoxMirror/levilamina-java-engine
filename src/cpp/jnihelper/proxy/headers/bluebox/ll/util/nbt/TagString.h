// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/StringTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagString: public ::jnihelper::JavaObject{
    public:
        O_TagString(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}set(java.lang.String)void
        void m_set(::jnihelper::proxy::java::lang::O_String value);
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}value[getter]:java.lang.String
        ::jnihelper::proxy::java::lang::O_String f_value();
        //{_tag_}get()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_get();
        //{_tag_}value[setter]:java.lang.String
        void f_value(::jnihelper::proxy::java::lang::O_String value);
    };

    void toNative(O_TagString obj, StringTag* tag);
    
    class C_TagString: public JavaClass<O_TagString>{
    public:
        C_TagString(::jnihelper::Env& env);
        O_TagString formNative(StringTag* tag);
        //{_static_}
        //{_tag_}<init>(java.lang.String)bluebox.ll.util.nbt.TagString
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagString newObj(::jnihelper::proxy::java::lang::O_String value);
    };
    
}