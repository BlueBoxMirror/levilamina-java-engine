// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/util/Collection.h"
#include "jnihelper/proxy/headers/java/util/Iterator.h"
#include "jnihelper/proxy/headers/java/util/Spliterator.h"
namespace jnihelper::proxy::java::util {

    class O_Set: public ::jnihelper::JavaObject{
    public:
        O_Set(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}iterator()java.util.Iterator
        ::jnihelper::proxy::java::util::O_Iterator m_iterator();
        //{_tag_}contains(java.lang.Object)boolean
        ::jboolean m_contains(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}equals(java.lang.Object)boolean
        ::jboolean m_equals(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}isEmpty()boolean
        ::jboolean m_isEmpty();
        //{_tag_}removeAll(java.util.Collection)boolean
        ::jboolean m_removeAll(::jnihelper::proxy::java::util::O_Collection arg0);
        //{_tag_}hashCode()int
        ::jint m_hashCode();
        //{_tag_}spliterator()java.util.Spliterator
        ::jnihelper::proxy::java::util::O_Spliterator m_spliterator();
        //{_tag_}toArray()[Ljava.lang.Object;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> m_toArray();
        //{_tag_}retainAll(java.util.Collection)boolean
        ::jboolean m_retainAll(::jnihelper::proxy::java::util::O_Collection arg0);
        //{_tag_}addAll(java.util.Collection)boolean
        ::jboolean m_addAll(::jnihelper::proxy::java::util::O_Collection arg0);
        //{_tag_}toArray([Ljava.lang.Object;)[Ljava.lang.Object;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> m_toArray(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> arg0);
        //{_tag_}remove(java.lang.Object)boolean
        ::jboolean m_remove(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}containsAll(java.util.Collection)boolean
        ::jboolean m_containsAll(::jnihelper::proxy::java::util::O_Collection arg0);
        //{_tag_}clear()void
        void m_clear();
        //{_tag_}add(java.lang.Object)boolean
        ::jboolean m_add(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}size()int
        ::jint m_size();
    };
    
    class C_Set: public JavaClass<O_Set>{
    public:
        C_Set(::jnihelper::Env& env);
        //{_static_}
        //{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2);
        //{_tag_}of([Ljava.lang.Object;)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> arg0);
        //{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6);
        //{_tag_}of(java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5);
        //{_tag_}of(java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1);
        //{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3);
        //{_tag_}of()java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of();
        //{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6, ::jnihelper::proxy::java::lang::O_Object arg7, ::jnihelper::proxy::java::lang::O_Object arg8, ::jnihelper::proxy::java::lang::O_Object arg9);
        //{_tag_}copyOf(java.util.Collection)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_copyOf(::jnihelper::proxy::java::util::O_Collection arg0);
        //{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6, ::jnihelper::proxy::java::lang::O_Object arg7, ::jnihelper::proxy::java::lang::O_Object arg8);
        //{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6, ::jnihelper::proxy::java::lang::O_Object arg7);
        //{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4);
    };
    
}