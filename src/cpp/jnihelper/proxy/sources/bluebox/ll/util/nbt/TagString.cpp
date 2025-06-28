// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagString.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagString>(){
    return "Lbluebox/ll/util/nbt/TagString;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::O_TagString(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagString::C_TagString(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagString>(env, env->FindClass(getFullName())){}

void jnihelper::proxy::bluebox::ll::util::nbt::toNative(O_TagString obj, StringTag *tag){
    tag->clear();
    tag->append(obj.f_value().getValue());
}

jnihelper::proxy::bluebox::ll::util::nbt::O_TagString jnihelper::proxy::bluebox::ll::util::nbt::C_TagString::formNative(StringTag *tag){
    Env& env=impl.getEnv();
    IMPORT(java::lang,String);
    return newObj(String.newObj(tag->data()));
}

//{_instance_}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}set(java.lang.String)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::m_set(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,value.get());
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[getter]:java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}get()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[setter]:java.lang.String
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagString::f_value(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","Ljava/lang/String;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(java.lang.String)bluebox.ll.util.nbt.TagString
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagString jnihelper::proxy::bluebox::ll::util::nbt::C_TagString::newObj(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,value.get())};
}
