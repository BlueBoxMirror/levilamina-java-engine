// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/FloatTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagFloat: public ::jnihelper::JavaObject{
    public:
        O_TagFloat(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}get()float
        ::jfloat m_get();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}set(float)void
        void m_set(::jfloat value);
        //{_tag_}value[setter]:float
        void f_value(::jfloat value);
        //{_tag_}value[getter]:float
        ::jfloat f_value();
    };

    inline void toNative(O_TagFloat obj, FloatTag* tag){
        tag->data = obj.f_value();
    }
    
    class C_TagFloat: public JavaClass<O_TagFloat>{
    public:
        C_TagFloat(::jnihelper::Env& env);
        inline O_TagFloat fromNative(FloatTag* tag){
            return newObj(tag->data);
        }
        //{_static_}
        //{_tag_}<init>(float)bluebox.ll.util.nbt.TagFloat
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat newObj(::jfloat value);
    };
    
}