// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/ShortTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagShort: public ::jnihelper::JavaObject{
    public:
        O_TagShort(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}value[getter]:short
        ::jshort f_value();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}set(short)void
        void m_set(::jshort value);
        //{_tag_}value[setter]:short
        void f_value(::jshort value);
        //{_tag_}get()short
        ::jshort m_get();
    };

    inline void toNative(O_TagShort obj, ShortTag* tag){
        tag->data = obj.f_value();
    }
    
    class C_TagShort: public JavaClass<O_TagShort>{
    public:
        C_TagShort(::jnihelper::Env& env);
        inline O_TagShort fromNative(ShortTag* tag){
            return newObj(tag->data);
        }
        //{_static_}
        //{_tag_}<init>(short)bluebox.ll.util.nbt.TagShort
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort newObj(::jshort value);
    };
    
}