// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/IntTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagInt: public ::jnihelper::JavaObject{
    public:
        O_TagInt(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}get()int
        ::jint m_get();
        //{_tag_}set(int)void
        void m_set(::jint value);
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}value[setter]:int
        void f_value(::jint value);
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}value[getter]:int
        ::jint f_value();
    };

    inline void toNative(O_TagInt obj,IntTag* tag){
        tag->data = obj.f_value();
    }
    
    class C_TagInt: public JavaClass<O_TagInt>{
    public:
        C_TagInt(::jnihelper::Env& env);
        inline O_TagInt fromNative(IntTag* tag){
            return newObj(tag->data);
        }
        //{_static_}
        //{_tag_}<init>(int)bluebox.ll.util.nbt.TagInt
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt newObj(::jint value);
    };
    
}