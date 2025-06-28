// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

#include "mc/nbt/EndTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagEnd: public ::jnihelper::JavaObject{
    public:
        O_TagEnd(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
    };
    
    class C_TagEnd: public JavaClass<O_TagEnd>{
    public:
        C_TagEnd(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}<init>()bluebox.ll.util.nbt.TagEnd
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagEnd newObj();
    };
    
}