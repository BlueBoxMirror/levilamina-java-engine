// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/util/Comparator.h"
#include "jnihelper/proxy/headers/java/lang/invoke/SerializedLambda.h"
namespace jnihelper::proxy::java::util {

    class O_Map$Entry: public ::jnihelper::JavaObject{
    public:
        O_Map$Entry(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}setValue(java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_setValue(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}equals(java.lang.Object)boolean
        ::jboolean m_equals(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}getValue()java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_getValue();
        //{_tag_}getKey()java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_getKey();
        //{_tag_}hashCode()int
        ::jint m_hashCode();
    };
    
    class C_Map$Entry: public JavaClass<O_Map$Entry>{
    public:
        C_Map$Entry(::jnihelper::Env& env);
        //{_static_}
        //{_static_}//{_static_}//{_static_}//{_tag_}copyOf(java.util.Map$Entry)java.util.Map$Entry
        ::jnihelper::proxy::java::util::O_Map$Entry m_copyOf(::jnihelper::proxy::java::util::O_Map$Entry arg0);
        //{_tag_}lambda$comparingByValue$1065357e$1(java.util.Map$Entry,java.util.Map$Entry)int
        ::jint m_lambda$comparingByValue$1065357e$1(::jnihelper::proxy::java::util::O_Map$Entry arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1);
        //{_tag_}comparingByValue()java.util.Comparator
        ::jnihelper::proxy::java::util::O_Comparator m_comparingByValue();
        //{_tag_}comparingByKey(java.util.Comparator)java.util.Comparator
        ::jnihelper::proxy::java::util::O_Comparator m_comparingByKey(::jnihelper::proxy::java::util::O_Comparator arg0);
        //{_tag_}lambda$comparingByKey$bbdbfea9$1(java.util.Map$Entry,java.util.Map$Entry)int
        ::jint m_lambda$comparingByKey$bbdbfea9$1(::jnihelper::proxy::java::util::O_Map$Entry arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1);
        //{_tag_}comparingByKey()java.util.Comparator
        ::jnihelper::proxy::java::util::O_Comparator m_comparingByKey();
        //{_tag_}$deserializeLambda$(java.lang.invoke.SerializedLambda)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_$deserializeLambda$(::jnihelper::proxy::java::lang::invoke::O_SerializedLambda arg0);
        //{_tag_}lambda$comparingByValue$827a17d5$1(java.util.Comparator,java.util.Map$Entry,java.util.Map$Entry)int
        ::jint m_lambda$comparingByValue$827a17d5$1(::jnihelper::proxy::java::util::O_Comparator arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1, ::jnihelper::proxy::java::util::O_Map$Entry arg2);
        //{_tag_}lambda$comparingByKey$6d558cbf$1(java.util.Comparator,java.util.Map$Entry,java.util.Map$Entry)int
        ::jint m_lambda$comparingByKey$6d558cbf$1(::jnihelper::proxy::java::util::O_Comparator arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1, ::jnihelper::proxy::java::util::O_Map$Entry arg2);
        //{_tag_}comparingByValue(java.util.Comparator)java.util.Comparator
        ::jnihelper::proxy::java::util::O_Comparator m_comparingByValue(::jnihelper::proxy::java::util::O_Comparator arg0);
    };
    
}