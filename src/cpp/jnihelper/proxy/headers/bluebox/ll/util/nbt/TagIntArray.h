// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/IntArrayTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagIntArray: public ::jnihelper::JavaObject{
    public:
        O_TagIntArray(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}set([I)void
        void m_set(::jnihelper::IntArray value);
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}get()[I
        ::jnihelper::IntArray m_get();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}value[getter]:[I
        ::jnihelper::IntArray f_value();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}value[setter]:[I
        void f_value(::jnihelper::IntArray value);
    };

    void toNative(O_TagIntArray obj, IntArrayTag* tag);
    
    class C_TagIntArray: public JavaClass<O_TagIntArray>{
    public:
        C_TagIntArray(::jnihelper::Env& env);
        O_TagIntArray fromNative(IntArrayTag* tag);
        //{_static_}
        //{_tag_}<init>([I)bluebox.ll.util.nbt.TagIntArray
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray newObj(::jnihelper::IntArray value);
    };
    
}