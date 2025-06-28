// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagByte.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte>(){
    return "Lbluebox/ll/util/nbt/TagByte;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::O_TagByte(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagByte::C_TagByte(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}toBoolean()boolean
::jboolean jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::m_toBoolean(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toBoolean","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[getter]:byte
::jbyte jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","B");
    return env->GetByteField(jobj,jfid);
}
//{_tag_}set(boolean)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::m_set(::jboolean value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(Z)V");
    env->CallVoidMethod(jobj,jmid,value);
}
//{_tag_}get()byte
::jbyte jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()B");
    return env->CallByteMethod(jobj,jmid);
}
//{_tag_}set(byte)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::m_set(::jbyte value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(B)V");
    env->CallVoidMethod(jobj,jmid,value);
}
//{_tag_}value[setter]:byte
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte::f_value(::jbyte value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","B");
    env->SetByteField(jobj,jfid,value);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(byte)bluebox.ll.util.nbt.TagByte
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte jnihelper::proxy::bluebox::ll::util::nbt::C_TagByte::newObj(::jbyte value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(B)V");
    return {impl,env->NewObject(jcls,jmid,value)};
}
//{_tag_}<init>(boolean)bluebox.ll.util.nbt.TagByte
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagByte jnihelper::proxy::bluebox::ll::util::nbt::C_TagByte::newObj(::jboolean value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Z)V");
    return {impl,env->NewObject(jcls,jmid,value)};
}
