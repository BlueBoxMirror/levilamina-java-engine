// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/Int64Tag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagLong: public ::jnihelper::JavaObject{
    public:
        O_TagLong(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}value[setter]:long
        void f_value(::jlong value);
        //{_tag_}get()long
        ::jlong m_get();
        //{_tag_}set(long)void
        void m_set(::jlong value);
        //{_tag_}value[getter]:long
        ::jlong f_value();
    };

    inline void toNative(O_TagLong obj, Int64Tag* tag){
        tag->data = obj.f_value();
    }
    
    class C_TagLong: public JavaClass<O_TagLong>{
    public:
        C_TagLong(::jnihelper::Env& env);
        inline O_TagLong fromNative(Int64Tag* tag){
            return newObj(tag->data);
        }
        //{_static_}
        //{_tag_}<init>(long)bluebox.ll.util.nbt.TagLong
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong newObj(::jlong value);
    };
    
}