// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Collection.h"
#include "jnihelper/proxy/headers/java/util/ListIterator.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/Tag.h"
#include "jnihelper/proxy/headers/java/util/ArrayList.h"
#include "jnihelper/proxy/headers/java/util/function/Predicate.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "jnihelper/proxy/headers/java/util/function/IntFunction.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/util/Comparator.h"
#include "jnihelper/proxy/headers/java/util/function/Consumer.h"
#include "jnihelper/proxy/headers/java/util/function/UnaryOperator.h"
#include "jnihelper/proxy/headers/java/util/Iterator.h"
#include "jnihelper/proxy/headers/java/util/Spliterator.h"
#include "jnihelper/proxy/headers/java/util/stream/Stream.h"
#include "jnihelper/proxy/headers/java/util/List.h"

#include "mc/nbt/EndTag.h"
#include "mc/nbt/ListTag.h"
namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagList: public ::jnihelper::JavaObject{
    public:
        O_TagList(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}replaceAll(java.util.function.UnaryOperator)void
        void m_replaceAll(::jnihelper::proxy::java::util::function::O_UnaryOperator operato);
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}set(int,java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_set(::jint index, ::jnihelper::proxy::java::lang::O_Object element);
        //{_tag_}equals(java.lang.Object)boolean
        ::jboolean m_equals(::jnihelper::proxy::java::lang::O_Object o);
        //{_tag_}isEmpty()boolean
        ::jboolean m_isEmpty();
        //{_tag_}remove(int)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m1_remove(::jint index);
        //{_tag_}stream()java.util.stream.Stream
        ::jnihelper::proxy::java::util::stream::O_Stream m_stream();
        //{_tag_}spliterator()java.util.Spliterator
        ::jnihelper::proxy::java::util::O_Spliterator m_spliterator();
        //{_tag_}retainAll(java.util.Collection)boolean
        ::jboolean m_retainAll(::jnihelper::proxy::java::util::O_Collection c);
        //{_tag_}addAll(int,java.util.Collection)boolean
        ::jboolean m_addAll(::jint index, ::jnihelper::proxy::java::util::O_Collection c);
        //{_tag_}add(bluebox.ll.util.nbt.Tag)boolean
        ::jboolean m_add(::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag tag);
        //{_tag_}get(int)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_get(::jint index);
        //{_tag_}indexOf(java.lang.Object)int
        ::jint m_indexOf(::jnihelper::proxy::java::lang::O_Object o);
        //{_tag_}listIterator()java.util.ListIterator
        ::jnihelper::proxy::java::util::O_ListIterator m_listIterator();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}toArray([Ljava.lang.Object;)[Ljava.lang.Object;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> m_toArray(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> a);
        //{_tag_}containsAll(java.util.Collection)boolean
        ::jboolean m_containsAll(::jnihelper::proxy::java::util::O_Collection c);
        //{_tag_}clear()void
        void m_clear();
        //{_tag_}subList(int,int)java.util.List
        ::jnihelper::proxy::java::util::O_List m_subList(::jint fromIndex, ::jint toIndex);
        //{_tag_}size()int
        ::jint m_size();
        //{_tag_}iterator()java.util.Iterator
        ::jnihelper::proxy::java::util::O_Iterator m_iterator();
        //{_tag_}removeIf(java.util.function.Predicate)boolean
        ::jboolean m_removeIf(::jnihelper::proxy::java::util::function::O_Predicate filter);
        //{_tag_}contains(java.lang.Object)boolean
        ::jboolean m_contains(::jnihelper::proxy::java::lang::O_Object o);
        //{_tag_}parallelStream()java.util.stream.Stream
        ::jnihelper::proxy::java::util::stream::O_Stream m_parallelStream();
        //{_tag_}sort(java.util.Comparator)void
        void m_sort(::jnihelper::proxy::java::util::O_Comparator c);
        //{_tag_}clone()java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_clone();
        //{_tag_}set(int,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_set(::jint index, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag element);
        //{_tag_}removeAll(java.util.Collection)boolean
        ::jboolean m_removeAll(::jnihelper::proxy::java::util::O_Collection c);
        //{_tag_}list[setter]:java.util.ArrayList
        void f_list(::jnihelper::proxy::java::util::O_ArrayList value);
        //{_tag_}listIterator(int)java.util.ListIterator
        ::jnihelper::proxy::java::util::O_ListIterator m_listIterator(::jint index);
        //{_tag_}hashCode()int
        ::jint m_hashCode();
        //{_tag_}add(int,java.lang.Object)void
        void m_add(::jint index, ::jnihelper::proxy::java::lang::O_Object element);
        //{_tag_}toArray()[Ljava.lang.Object;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> m_toArray();
        //{_tag_}toArray(java.util.function.IntFunction)[Ljava.lang.Object;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> m_toArray(::jnihelper::proxy::java::util::function::O_IntFunction generator);
        //{_tag_}lastIndexOf(java.lang.Object)int
        ::jint m_lastIndexOf(::jnihelper::proxy::java::lang::O_Object o);
        //{_tag_}addAll(java.util.Collection)boolean
        ::jboolean m_addAll(::jnihelper::proxy::java::util::O_Collection c);
        //{_tag_}forEach(java.util.function.Consumer)void
        void m_forEach(::jnihelper::proxy::java::util::function::O_Consumer action);
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}remove(java.lang.Object)boolean
        ::jboolean m_remove(::jnihelper::proxy::java::lang::O_Object o);
        //{_tag_}add(int,bluebox.ll.util.nbt.Tag)void
        void m_add(::jint index, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag element);
        //{_tag_}remove(int)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_remove(::jint index);
        //{_tag_}add(java.lang.Object)boolean
        ::jboolean m_add(::jnihelper::proxy::java::lang::O_Object tag);
        //{_tag_}get(int)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m1_get(::jint index);
        //{_tag_}list[getter]:java.util.ArrayList
        ::jnihelper::proxy::java::util::O_ArrayList f_list();
    };

    void toNative(O_TagList obj ,ListTag* tag);
    
    class C_TagList: public JavaClass<O_TagList>{
    public:
        C_TagList(::jnihelper::Env& env);
        O_TagList fromNative(ListTag* tag);
        //{_static_}
        //{_tag_}<init>()bluebox.ll.util.nbt.TagList
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagList newObj();
    };
    
}