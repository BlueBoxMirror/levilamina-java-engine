// This file is generated automatically.
#pragma once
#include "jnihelper/jnihelper.h"
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagByte.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagList.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagByteArray.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagCompound.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagDouble.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagFloat.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagInt.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagIntArray.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagLong.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagShort.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagString.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagEnd.h"
#include "mc/nbt/ByteTag.h"
#include "mc/nbt/Int64Tag.h"
#include <memory>

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagList>(){
    return "Lbluebox/ll/util/nbt/TagList;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::O_TagList(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagList::C_TagList(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagList>(env, env->FindClass(getFullName())){}

void jnihelper::proxy::bluebox::ll::util::nbt::toNative(O_TagList obj, ListTag *tag){
    Env& env=obj.getClass().getEnv();
    IMPORT(bluebox::ll::util::nbt, Tag)
    IMPORT(bluebox::ll::util::nbt, TagByte)
    IMPORT(bluebox::ll::util::nbt, TagByteArray)
    IMPORT(bluebox::ll::util::nbt, TagCompound)
    IMPORT(bluebox::ll::util::nbt, TagList)
    IMPORT(bluebox::ll::util::nbt, TagDouble)
    IMPORT(bluebox::ll::util::nbt, TagFloat)
    IMPORT(bluebox::ll::util::nbt, TagInt)
    IMPORT(bluebox::ll::util::nbt, TagIntArray)
    IMPORT(bluebox::ll::util::nbt, TagLong)
    IMPORT(bluebox::ll::util::nbt, TagShort)
    IMPORT(bluebox::ll::util::nbt, TagString)
    tag->clear();
    auto iterator=obj.m_iterator();
    while(iterator.m_hasNext()){
        auto rawTag=iterator.m_next().as(Tag);
        switch(rawTag.m_getId()){
            case (jint)Tag::Byte:{
                auto tempTag=make_unique<ByteTag>(0);
                toNative(rawTag.as(TagByte),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::List:{
                auto tempTag=make_unique<ListTag>();
                toNative(rawTag.as(TagList),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::ByteArray:{
                auto tempTag=make_unique<ByteArrayTag>();
                toNative(rawTag.as(TagByteArray),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::Compound:{
                auto tempTag=make_unique<CompoundTag>();
                toNative(rawTag.as(TagCompound),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::Double:{
                auto tempTag=make_unique<DoubleTag>(0);
                toNative(rawTag.as(TagDouble),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::Float:{
                auto tempTag=make_unique<FloatTag>(0);
                toNative(rawTag.as(TagFloat),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::Int:{
                auto tempTag=make_unique<IntTag>(0);
                toNative(rawTag.as(TagInt),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::IntArray:{
                auto tempTag=make_unique<IntArrayTag>();
                toNative(rawTag.as(TagIntArray),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::Int64:{
                auto tempTag=make_unique<Int64Tag>(0);
                toNative(rawTag.as(TagLong),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::Short:{
                auto tempTag=make_unique<ShortTag>(0);
                toNative(rawTag.as(TagShort),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::String:{
                auto tempTag=make_unique<StringTag>();
                toNative(rawTag.as(TagString),tempTag.get());
                tag->add(std::move(tempTag));
                break;
            }
            case (jint)Tag::End:{
                tag->add(make_unique<EndTag>());
                break;
            }
        }
    }
}

jnihelper::proxy::bluebox::ll::util::nbt::O_TagList jnihelper::proxy::bluebox::ll::util::nbt::C_TagList::fromNative(ListTag* tag){
    Env& env=impl.getEnv();
    IMPORT(bluebox::ll::util::nbt, Tag)
    IMPORT(bluebox::ll::util::nbt, TagByte)
    IMPORT(bluebox::ll::util::nbt, TagByteArray)
    IMPORT(bluebox::ll::util::nbt, TagCompound)
    IMPORT(bluebox::ll::util::nbt, TagList)
    IMPORT(bluebox::ll::util::nbt, TagDouble)
    IMPORT(bluebox::ll::util::nbt, TagFloat)
    IMPORT(bluebox::ll::util::nbt, TagInt)
    IMPORT(bluebox::ll::util::nbt, TagIntArray)
    IMPORT(bluebox::ll::util::nbt, TagLong)
    IMPORT(bluebox::ll::util::nbt, TagShort)
    IMPORT(bluebox::ll::util::nbt, TagString)
    IMPORT(bluebox::ll::util::nbt, TagEnd)
    IMPORT(java::lang, Object)
    auto result=TagList.newObj();
    for(auto& it:*tag){
        auto rawTag=it.get();
        switch(rawTag->getId()){
            case Tag::Byte:{
                result.m_add(TagByte.formNative((ByteTag*)rawTag).as(Object));
                break;
            }
            case Tag::List:{
                result.m_add(TagList.fromNative((ListTag*)rawTag).as(Object));
                break;
            }
            case Tag::ByteArray:{
                result.m_add(TagByteArray.fromNative((ByteArrayTag*)rawTag).as(Object));
                break;
            }
            case Tag::Compound:{
                result.m_add(TagCompound.fromNative((CompoundTag*)rawTag).as(Object));
                break;
            }
            case Tag::Double:{
                result.m_add(TagDouble.fromNative((DoubleTag*)rawTag).as(Object));
                break;
            }
            case Tag::Float:{
                result.m_add(TagFloat.fromNative((FloatTag*)rawTag).as(Object));
                break;
            }
            case Tag::Int:{
                result.m_add(TagInt.fromNative((IntTag*)rawTag).as(Object));
                break;
            }
            case Tag::IntArray:{
                result.m_add(TagIntArray.fromNative((IntArrayTag*)rawTag).as(Object));
                break;
            }
            case Tag::Int64:{
                result.m_add(TagLong.fromNative((Int64Tag*)rawTag).as(Object));
                break;
            }
            case Tag::Short:{
                result.m_add(TagShort.fromNative((ShortTag*)rawTag).as(Object));
                break;
            }
            case Tag::String:{
                result.m_add(TagString.formNative((StringTag*)rawTag).as(Object));
                break;
            }
            case Tag::End:{
                result.m_add(TagEnd.newObj().as(Object));
                break;
            }
        }
    }
    return result;
}

//{_instance_}
//{_tag_}replaceAll(java.util.function.UnaryOperator)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_replaceAll(::jnihelper::proxy::java::util::function::O_UnaryOperator operato){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replaceAll","(Ljava/util/function/UnaryOperator;)V");
    env->CallVoidMethod(jobj,jmid,operato.get());
}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}set(int,java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_set(::jint index, ::jnihelper::proxy::java::lang::O_Object element){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(ILjava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,index,element.get())};
}
//{_tag_}equals(java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_equals(::jnihelper::proxy::java::lang::O_Object o){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"equals","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,o.get());
}
//{_tag_}isEmpty()boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_isEmpty(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isEmpty","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}remove(int)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m1_remove(::jint index){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","(I)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,index)};
}
//{_tag_}stream()java.util.stream.Stream
::jnihelper::proxy::java::util::stream::O_Stream jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_stream(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"stream","()Ljava/util/stream/Stream;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/stream/Stream;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}spliterator()java.util.Spliterator
::jnihelper::proxy::java::util::O_Spliterator jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_spliterator(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"spliterator","()Ljava/util/Spliterator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Spliterator;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}retainAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_retainAll(::jnihelper::proxy::java::util::O_Collection c){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"retainAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,c.get());
}
//{_tag_}addAll(int,java.util.Collection)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_addAll(::jint index, ::jnihelper::proxy::java::util::O_Collection c){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"addAll","(ILjava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,index,c.get());
}
//{_tag_}add(bluebox.ll.util.nbt.Tag)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_add(::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag tag){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"add","(Lbluebox/ll/util/nbt/Tag;)Z");
    return env->CallBooleanMethod(jobj,jmid,tag.get());
}
//{_tag_}get(int)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_get(::jint index){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","(I)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,index)};
}
//{_tag_}indexOf(java.lang.Object)int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_indexOf(::jnihelper::proxy::java::lang::O_Object o){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOf","(Ljava/lang/Object;)I");
    return env->CallIntMethod(jobj,jmid,o.get());
}
//{_tag_}listIterator()java.util.ListIterator
::jnihelper::proxy::java::util::O_ListIterator jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_listIterator(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"listIterator","()Ljava/util/ListIterator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/ListIterator;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toArray([Ljava.lang.Object;)[Ljava.lang.Object;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_toArray(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> a){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toArray","([Ljava/lang/Object;)[Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,a.get())};
}
//{_tag_}containsAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_containsAll(::jnihelper::proxy::java::util::O_Collection c){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"containsAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,c.get());
}
//{_tag_}clear()void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_clear(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"clear","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}subList(int,int)java.util.List
::jnihelper::proxy::java::util::O_List jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_subList(::jint fromIndex, ::jint toIndex){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"subList","(II)Ljava/util/List;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/List;")),env->CallObjectMethod(jobj,jmid,fromIndex,toIndex)};
}
//{_tag_}size()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_size(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"size","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}iterator()java.util.Iterator
::jnihelper::proxy::java::util::O_Iterator jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_iterator(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"iterator","()Ljava/util/Iterator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Iterator;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}removeIf(java.util.function.Predicate)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_removeIf(::jnihelper::proxy::java::util::function::O_Predicate filter){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"removeIf","(Ljava/util/function/Predicate;)Z");
    return env->CallBooleanMethod(jobj,jmid,filter.get());
}
//{_tag_}contains(java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_contains(::jnihelper::proxy::java::lang::O_Object o){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"contains","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,o.get());
}
//{_tag_}parallelStream()java.util.stream.Stream
::jnihelper::proxy::java::util::stream::O_Stream jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_parallelStream(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"parallelStream","()Ljava/util/stream/Stream;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/stream/Stream;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}sort(java.util.Comparator)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_sort(::jnihelper::proxy::java::util::O_Comparator c){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"sort","(Ljava/util/Comparator;)V");
    env->CallVoidMethod(jobj,jmid,c.get());
}
//{_tag_}clone()java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_clone(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"clone","()Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}set(int,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_set(::jint index, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag element){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(ILbluebox/ll/util/nbt/Tag;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,index,element.get())};
}
//{_tag_}removeAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_removeAll(::jnihelper::proxy::java::util::O_Collection c){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"removeAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,c.get());
}
//{_tag_}list[setter]:java.util.ArrayList
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::f_list(::jnihelper::proxy::java::util::O_ArrayList value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"list","Ljava/util/ArrayList;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}listIterator(int)java.util.ListIterator
::jnihelper::proxy::java::util::O_ListIterator jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_listIterator(::jint index){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"listIterator","(I)Ljava/util/ListIterator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/ListIterator;")),env->CallObjectMethod(jobj,jmid,index)};
}
//{_tag_}hashCode()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_hashCode(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"hashCode","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}add(int,java.lang.Object)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_add(::jint index, ::jnihelper::proxy::java::lang::O_Object element){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"add","(ILjava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,index,element.get());
}
//{_tag_}toArray()[Ljava.lang.Object;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_toArray(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toArray","()[Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toArray(java.util.function.IntFunction)[Ljava.lang.Object;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_toArray(::jnihelper::proxy::java::util::function::O_IntFunction generator){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toArray","(Ljava/util/function/IntFunction;)[Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,generator.get())};
}
//{_tag_}lastIndexOf(java.lang.Object)int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_lastIndexOf(::jnihelper::proxy::java::lang::O_Object o){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lastIndexOf","(Ljava/lang/Object;)I");
    return env->CallIntMethod(jobj,jmid,o.get());
}
//{_tag_}addAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_addAll(::jnihelper::proxy::java::util::O_Collection c){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"addAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,c.get());
}
//{_tag_}forEach(java.util.function.Consumer)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_forEach(::jnihelper::proxy::java::util::function::O_Consumer action){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"forEach","(Ljava/util/function/Consumer;)V");
    env->CallVoidMethod(jobj,jmid,action.get());
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}remove(java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_remove(::jnihelper::proxy::java::lang::O_Object o){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,o.get());
}
//{_tag_}add(int,bluebox.ll.util.nbt.Tag)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_add(::jint index, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag element){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"add","(ILbluebox/ll/util/nbt/Tag;)V");
    env->CallVoidMethod(jobj,jmid,index,element.get());
}
//{_tag_}remove(int)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_remove(::jint index){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","(I)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,index)};
}
//{_tag_}add(java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m_add(::jnihelper::proxy::java::lang::O_Object tag){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"add","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,tag.get());
}
//{_tag_}get(int)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::m1_get(::jint index){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","(I)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,index)};
}
//{_tag_}list[getter]:java.util.ArrayList
::jnihelper::proxy::java::util::O_ArrayList jnihelper::proxy::bluebox::ll::util::nbt::O_TagList::f_list(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"list","Ljava/util/ArrayList;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/ArrayList;")),env->GetObjectField(jobj,jfid)};
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>()bluebox.ll.util.nbt.TagList
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagList jnihelper::proxy::bluebox::ll::util::nbt::C_TagList::newObj(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","()V");
    return {impl,env->NewObject(jcls,jmid)};
}
