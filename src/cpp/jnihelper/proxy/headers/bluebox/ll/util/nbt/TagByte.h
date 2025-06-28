// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/ByteTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagByte: public ::jnihelper::JavaObject{
    public:
        O_TagByte(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}toBoolean()boolean
        ::jboolean m_toBoolean();
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}value[getter]:byte
        ::jbyte f_value();
        //{_tag_}set(boolean)void
        void m_set(::jboolean value);
        //{_tag_}get()byte
        ::jbyte m_get();
        //{_tag_}set(byte)void
        void m_set(::jbyte value);
        //{_tag_}value[setter]:byte
        void f_value(::jbyte value);
    };

    inline void toNative(O_TagByte obj,ByteTag* tag){
        tag->data = obj.f_value();
    }
    
    class C_TagByte: public JavaClass<O_TagByte>{
    public:
        C_TagByte(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}<init>(byte)bluebox.ll.util.nbt.TagByte
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte newObj(::jbyte value);
        //{_tag_}<init>(boolean)bluebox.ll.util.nbt.TagByte
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte newObj(::jboolean value);
        inline O_TagByte formNative(ByteTag* tag){
            return newObj(tag->data);
        }
    };
    
}