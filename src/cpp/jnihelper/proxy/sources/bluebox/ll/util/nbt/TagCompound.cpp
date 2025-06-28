// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "mc/nbt/ByteArrayTag.h"
#include "mc/nbt/ByteTag.h"
#include "mc/nbt/CompoundTag.h"
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
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/util/Map$Entry.h"
#include <iostream>

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound>(){
    return "Lbluebox/ll/util/nbt/TagCompound;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::O_TagCompound(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagCompound::C_TagCompound(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound>(env, env->FindClass(getFullName())){}

void jnihelper::proxy::bluebox::ll::util::nbt::toNative(O_TagCompound obj,CompoundTag* tag){
    Env& env=obj.getClass().getEnv();
    IMPORT(java::util, Map$Entry)
    IMPORT(java::lang, String)
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
    tag->mTags.clear();
    auto iterator=obj.m_entrySet().m_iterator();
    while(iterator.m_hasNext()){
        auto entry=iterator.m_next().as(Map$Entry);
        auto key=entry.m_getKey().as(String);
        auto value=entry.m_getValue().as(Tag);
        switch(value.m_getId()){
            case (jint)Tag::Byte:{
                auto tempTag=ByteTag(0);
                toNative(value.as(TagByte),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::ByteArray:{
                auto tempTag=ByteArrayTag();
                toNative(value.as(TagByteArray),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::Compound:{
                auto tempTag=CompoundTag();
                toNative(value.as(TagCompound),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::List:{
                auto tempTag=ListTag();
                toNative(value.as(TagList),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::Double:{
                auto tempTag=DoubleTag(0);
                toNative(value.as(TagDouble),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::Float:{
                auto tempTag=FloatTag(0);
                toNative(value.as(TagFloat),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::Int:{
                auto tempTag=IntTag(0);
                toNative(value.as(TagInt),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::IntArray:{
                auto tempTag=IntArrayTag();
                toNative(value.as(TagIntArray),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::Int64:{
                auto tempTag=Int64Tag(0);
                toNative(value.as(TagLong),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::Short:{
                auto tempTag=ShortTag(0);
                toNative(value.as(TagShort),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::String:{
                auto tempTag=StringTag();
                toNative(value.as(TagString),&tempTag);
                tag->at(key.getValue())=tempTag;
                break;
            }
            case (jint)Tag::End:{
                tag->at(key.getValue())=EndTag();
                break;
            }
        }
    }
}

::jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound jnihelper::proxy::bluebox::ll::util::nbt::C_TagCompound::fromNative(CompoundTag* tag){
    Env& env=impl.getEnv();
    IMPORT(java::lang, String)
    IMPORT(java::lang, Object)
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
    auto result=newObj();
    for(auto it=tag->begin();it!=tag->end();++it){
        auto key=it->first;
        auto value=it->second;
        switch(value.getId()){
            case Tag::Byte:{
                result.m_put(String.newObj(key).as(Object),TagByte.formNative((ByteTag*)&value.get()).as(Object));
                break;
            }
            case Tag::ByteArray:{
                result.m_put(String.newObj(key).as(Object),TagByteArray.fromNative((ByteArrayTag*)&value.get()).as(Object));
                break;
            }
            case Tag::Compound:{
                result.m_put(String.newObj(key).as(Object),TagCompound.fromNative((CompoundTag*)&value.get()).as(Object));
                break;
            }
            case Tag::List:{
                result.m_put(String.newObj(key).as(Object),TagList.fromNative((ListTag*)&value.get()).as(Object));
                break;
            }
            case Tag::Double:{
                result.m_put(String.newObj(key).as(Object),TagDouble.fromNative((DoubleTag*)&value.get()).as(Object));
                break;
            }
            case Tag::Float:{
                result.m_put(String.newObj(key).as(Object),TagFloat.fromNative((FloatTag*)&value.get()).as(Object));
                break;
            }
            case Tag::Int:{
                result.m_put(String.newObj(key).as(Object),TagInt.fromNative((IntTag*)&value.get()).as(Object));
                break;
            }
            case Tag::IntArray:{
                result.m_put(String.newObj(key).as(Object),TagIntArray.fromNative((IntArrayTag*)&value.get()).as(Object));
                break;
            }
            case Tag::Int64:{
                result.m_put(String.newObj(key).as(Object),TagLong.fromNative((Int64Tag*)&value.get()).as(Object));
                break;
            }
            case Tag::Short:{
                result.m_put(String.newObj(key).as(Object),TagShort.fromNative((ShortTag*)&value.get()).as(Object));
                break;
            }
            case Tag::String:{
                result.m_put(String.newObj(key).as(Object),TagString.formNative((StringTag*)&value.get()).as(Object));
                break;
            }
            case Tag::End:{
                result.m_put(String.newObj(key).as(Object),TagEnd.newObj().as(Object));
                break;
            }
        }
    }
    return result;
}

//{_instance_}
//{_tag_}getOrDefault(java.lang.Object,java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_getOrDefault(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _defaultValue){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getOrDefault","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_defaultValue.get())};
}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}map[setter]:java.util.HashMap
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::f_map(::jnihelper::proxy::java::util::O_HashMap value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"map","Ljava/util/HashMap;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}putAll(java.util.Map)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_putAll(::jnihelper::proxy::java::util::O_Map _m){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"putAll","(Ljava/util/Map;)V");
    env->CallVoidMethod(jobj,jmid,_m.get());
}
//{_tag_}entrySet()java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_entrySet(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"entrySet","()Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}merge(java.lang.Object,java.lang.Object,java.util.function.BiFunction)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_merge(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"merge","(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get(),_remappingFunction.get())};
}
//{_tag_}remove(java.lang.Object)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_remove(::jnihelper::proxy::java::lang::O_Object _key){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","(Ljava/lang/Object;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get())};
}
//{_tag_}replaceAll(java.util.function.BiFunction)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_replaceAll(::jnihelper::proxy::java::util::function::O_BiFunction _function){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replaceAll","(Ljava/util/function/BiFunction;)V");
    env->CallVoidMethod(jobj,jmid,_function.get());
}
//{_tag_}isEmpty()boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_isEmpty(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isEmpty","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}computeIfPresent(java.lang.Object,java.util.function.BiFunction)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_computeIfPresent(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"computeIfPresent","(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_remappingFunction.get())};
}
//{_tag_}get(java.lang.Object)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m1_get(::jnihelper::proxy::java::lang::O_Object _key){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","(Ljava/lang/Object;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get())};
}
//{_tag_}put(java.lang.Object,java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_put(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get())};
}
//{_tag_}containsValue(java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_containsValue(::jnihelper::proxy::java::lang::O_Object _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"containsValue","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,_value.get());
}
//{_tag_}map[getter]:java.util.HashMap
::jnihelper::proxy::java::util::O_HashMap jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::f_map(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"map","Ljava/util/HashMap;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/HashMap;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}merge(java.lang.String,bluebox.ll.util.nbt.Tag,java.util.function.BiFunction)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_merge(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"merge","(Ljava/lang/String;Lbluebox/ll/util/nbt/Tag;Ljava/util/function/BiFunction;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get(),_remappingFunction.get())};
}
//{_tag_}keySet()java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_keySet(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"keySet","()Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toBinary()[B
::jnihelper::ByteArray jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_toBinary(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toBinary","()[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}putIfAbsent(java.lang.Object,java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_putIfAbsent(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"putIfAbsent","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get())};
}
//{_tag_}computeIfAbsent(java.lang.String,java.util.function.Function)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_computeIfAbsent(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::util::function::O_Function _mappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"computeIfAbsent","(Ljava/lang/String;Ljava/util/function/Function;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_mappingFunction.get())};
}
//{_tag_}values()java.util.Collection
::jnihelper::proxy::java::util::O_Collection jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_values(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"values","()Ljava/util/Collection;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Collection;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}remove(java.lang.Object,java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_remove(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","(Ljava/lang/Object;Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,_key.get(),_value.get());
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}containsKey(java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_containsKey(::jnihelper::proxy::java::lang::O_Object _key){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"containsKey","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,_key.get());
}
//{_tag_}compute(java.lang.Object,java.util.function.BiFunction)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_compute(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"compute","(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_remappingFunction.get())};
}
//{_tag_}compute(java.lang.String,java.util.function.BiFunction)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_compute(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"compute","(Ljava/lang/String;Ljava/util/function/BiFunction;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_remappingFunction.get())};
}
//{_tag_}putIfAbsent(java.lang.String,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_putIfAbsent(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"putIfAbsent","(Ljava/lang/String;Lbluebox/ll/util/nbt/Tag;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get())};
}
//{_tag_}clear()void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_clear(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"clear","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}size()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_size(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"size","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}replace(java.lang.String,bluebox.ll.util.nbt.Tag,bluebox.ll.util.nbt.Tag)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_replace(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _oldValue, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _newValue){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replace","(Ljava/lang/String;Lbluebox/ll/util/nbt/Tag;Lbluebox/ll/util/nbt/Tag;)Z");
    return env->CallBooleanMethod(jobj,jmid,_key.get(),_oldValue.get(),_newValue.get());
}
//{_tag_}remove(java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m1_remove(::jnihelper::proxy::java::lang::O_Object _key){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","(Ljava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get())};
}
//{_tag_}clone()java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_clone(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"clone","()Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}get(java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_get(::jnihelper::proxy::java::lang::O_Object _key){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","(Ljava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get())};
}
//{_tag_}forEach(java.util.function.BiConsumer)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_forEach(::jnihelper::proxy::java::util::function::O_BiConsumer _action){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"forEach","(Ljava/util/function/BiConsumer;)V");
    env->CallVoidMethod(jobj,jmid,_action.get());
}
//{_tag_}replace(java.lang.Object,java.lang.Object,java.lang.Object)boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_replace(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _oldValue, ::jnihelper::proxy::java::lang::O_Object _newValue){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replace","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,_key.get(),_oldValue.get(),_newValue.get());
}
//{_tag_}replace(java.lang.Object,java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_replace(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replace","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get())};
}
//{_tag_}put(java.lang.String,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_put(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"put","(Ljava/lang/String;Lbluebox/ll/util/nbt/Tag;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get())};
}
//{_tag_}computeIfAbsent(java.lang.Object,java.util.function.Function)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_computeIfAbsent(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::util::function::O_Function _mappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"computeIfAbsent","(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_key.get(),_mappingFunction.get())};
}
//{_tag_}computeIfPresent(java.lang.String,java.util.function.BiFunction)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_computeIfPresent(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"computeIfPresent","(Ljava/lang/String;Ljava/util/function/BiFunction;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_remappingFunction.get())};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}getOrDefault(java.lang.Object,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_getOrDefault(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _defaultValue){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getOrDefault","(Ljava/lang/Object;Lbluebox/ll/util/nbt/Tag;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_defaultValue.get())};
}
//{_tag_}replace(java.lang.String,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound::m_replace(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replace","(Ljava/lang/String;Lbluebox/ll/util/nbt/Tag;)Lbluebox/ll/util/nbt/Tag;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/Tag;")),env->CallObjectMethod(jobj,jmid,_key.get(),_value.get())};
}
//{_static_}
//{_static_}//{_tag_}parse([B)bluebox.ll.util.nbt.TagCompound
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound jnihelper::proxy::bluebox::ll::util::nbt::C_TagCompound::m_parse(::jnihelper::ByteArray _bytes){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"parse","([B)Lbluebox/ll/util/nbt/TagCompound;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/TagCompound;")),env->CallStaticObjectMethod(jcls,jmid,_bytes.get())};
}
//{_tag_}<init>()bluebox.ll.util.nbt.TagCompound
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound jnihelper::proxy::bluebox::ll::util::nbt::C_TagCompound::newObj(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","()V");
    return {impl,env->NewObject(jcls,jmid)};
}
