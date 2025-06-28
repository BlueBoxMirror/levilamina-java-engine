// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/ByteArrayTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagByteArray: public ::jnihelper::JavaObject{
    public:
        O_TagByteArray(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}value[setter]:[B
        void f_value(::jnihelper::ByteArray value);
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}set([B)void
        void m_set(::jnihelper::ByteArray value);
        //{_tag_}get()[B
        ::jnihelper::ByteArray m_get();
        //{_tag_}value[getter]:[B
        ::jnihelper::ByteArray f_value();
    };

    void toNative(O_TagByteArray obj,ByteArrayTag* tag);
    
    class C_TagByteArray: public JavaClass<O_TagByteArray>{
    public:
        C_TagByteArray(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}<init>([B)bluebox.ll.util.nbt.TagByteArray
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray newObj(::jnihelper::ByteArray bytes);
        O_TagByteArray fromNative(ByteArrayTag* tag);
    };
    
}