// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/NbtObject.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_Tag: public ::jnihelper::JavaObject{
    public:
        O_Tag(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}toNbtObject()bluebox.ll.util.nbt.NbtObject
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_NbtObject m_toNbtObject();
    };
    
    class C_Tag: public JavaClass<O_Tag>{
    public:
        C_Tag(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}COMPOUND[setter]:int
        void f_COMPOUND(::jint value);
        //{_tag_}LIST[getter]:int
        ::jint f_LIST();
        //{_tag_}SHORT[setter]:int
        void f_SHORT(::jint value);
        //{_tag_}FLOAT[getter]:int
        ::jint f_FLOAT();
        //{_tag_}INT[setter]:int
        void f_INT(::jint value);
        //{_tag_}DOUBLE[getter]:int
        ::jint f_DOUBLE();
        //{_tag_}INT_ARRAY[getter]:int
        ::jint f_INT_ARRAY();
        //{_tag_}END[getter]:int
        ::jint f_END();
        //{_tag_}END[setter]:int
        void f_END(::jint value);
        //{_tag_}INT[getter]:int
        ::jint f_INT();
        //{_tag_}LIST[setter]:int
        void f_LIST(::jint value);
        //{_tag_}BYTE[getter]:int
        ::jint f_BYTE();
        //{_tag_}BYTE_ARRAY[setter]:int
        void f_BYTE_ARRAY(::jint value);
        //{_tag_}STRING[setter]:int
        void f_STRING(::jint value);
        //{_tag_}SHORT[getter]:int
        ::jint f_SHORT();
        //{_tag_}FLOAT[setter]:int
        void f_FLOAT(::jint value);
        //{_tag_}INT_ARRAY[setter]:int
        void f_INT_ARRAY(::jint value);
        //{_tag_}BYTE[setter]:int
        void f_BYTE(::jint value);
        //{_tag_}LONG[setter]:int
        void f_LONG(::jint value);
        //{_tag_}BYTE_ARRAY[getter]:int
        ::jint f_BYTE_ARRAY();
        //{_tag_}STRING[getter]:int
        ::jint f_STRING();
        //{_tag_}DOUBLE[setter]:int
        void f_DOUBLE(::jint value);
        //{_tag_}LONG[getter]:int
        ::jint f_LONG();
        //{_tag_}COMPOUND[getter]:int
        ::jint f_COMPOUND();
    };
    
}