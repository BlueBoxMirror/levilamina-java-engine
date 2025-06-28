// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/DoubleTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagDouble: public ::jnihelper::JavaObject{
    public:
        O_TagDouble(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}value[setter]:double
        void f_value(::jdouble value);
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}set(double)void
        void m_set(::jdouble value);
        //{_tag_}value[getter]:double
        ::jdouble f_value();
        //{_tag_}get()double
        ::jdouble m_get();
    };

    inline void toNative(O_TagDouble obj, DoubleTag* tag){
        tag->data = obj.f_value();
    }
    
    class C_TagDouble: public JavaClass<O_TagDouble>{
    public:
        C_TagDouble(::jnihelper::Env& env);
        inline O_TagDouble fromNative(DoubleTag* tag){
            return newObj(tag->data);
        }
        //{_static_}
        //{_tag_}<init>(double)bluebox.ll.util.nbt.TagDouble
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble newObj(::jdouble value);
    };
    
}