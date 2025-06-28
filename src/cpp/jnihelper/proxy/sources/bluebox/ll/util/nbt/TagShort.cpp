// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagShort.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort>(){
    return "Lbluebox/ll/util/nbt/TagShort;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::O_TagShort(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagShort::C_TagShort(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort>(env, env->FindClass(getFullName())){}


//{_instance_}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[getter]:short
::jshort jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","S");
    return env->GetShortField(jobj,jfid);
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}set(short)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::m_set(::jshort value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(S)V");
    env->CallVoidMethod(jobj,jmid,value);
}
//{_tag_}value[setter]:short
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::f_value(::jshort value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","S");
    env->SetShortField(jobj,jfid,value);
}
//{_tag_}get()short
::jshort jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()S");
    return env->CallShortMethod(jobj,jmid);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(short)bluebox.ll.util.nbt.TagShort
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagShort jnihelper::proxy::bluebox::ll::util::nbt::C_TagShort::newObj(::jshort value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(S)V");
    return {impl,env->NewObject(jcls,jmid,value)};
}
