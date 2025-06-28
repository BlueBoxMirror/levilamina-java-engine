// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/Tag.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_Tag>(){
    return "Lbluebox/ll/util/nbt/Tag;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_Tag::O_Tag(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::C_Tag(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_Tag>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_Tag::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_Tag::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}toNbtObject()bluebox.ll.util.nbt.NbtObject
::jnihelper::proxy::bluebox::ll::util::nbt::O_NbtObject jnihelper::proxy::bluebox::ll::util::nbt::O_Tag::m_toNbtObject(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toNbtObject","()Lbluebox/ll/util/nbt/NbtObject;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/nbt/NbtObject;")),env->CallObjectMethod(jobj,jmid)};
}
//{_static_}
//{_tag_}COMPOUND[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_COMPOUND(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"COMPOUND","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}LIST[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_LIST(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"LIST","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}SHORT[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_SHORT(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"SHORT","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}FLOAT[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_FLOAT(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"FLOAT","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}INT[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_INT(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"INT","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}DOUBLE[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_DOUBLE(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"DOUBLE","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}INT_ARRAY[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_INT_ARRAY(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"INT_ARRAY","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}END[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_END(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"END","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}END[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_END(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"END","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}INT[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_INT(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"INT","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}LIST[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_LIST(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"LIST","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}BYTE[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_BYTE(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"BYTE","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}BYTE_ARRAY[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_BYTE_ARRAY(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"BYTE_ARRAY","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}STRING[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_STRING(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"STRING","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}SHORT[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_SHORT(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"SHORT","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}FLOAT[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_FLOAT(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"FLOAT","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}INT_ARRAY[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_INT_ARRAY(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"INT_ARRAY","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}BYTE[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_BYTE(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"BYTE","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}LONG[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_LONG(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"LONG","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}BYTE_ARRAY[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_BYTE_ARRAY(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"BYTE_ARRAY","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}STRING[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_STRING(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"STRING","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}DOUBLE[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_DOUBLE(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"DOUBLE","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}LONG[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_LONG(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"LONG","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}COMPOUND[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::C_Tag::f_COMPOUND(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"COMPOUND","I");
    return env->GetStaticIntField(jcls,jfid);
}
