// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagLong.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong>(){
    return "Lbluebox/ll/util/nbt/TagLong;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::O_TagLong(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagLong::C_TagLong(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong>(env, env->FindClass(getFullName())){}


//{_instance_}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[setter]:long
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::f_value(::jlong value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","J");
    env->SetLongField(jobj,jfid,value);
}
//{_tag_}get()long
::jlong jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}set(long)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::m_set(::jlong value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(J)V");
    env->CallVoidMethod(jobj,jmid,value);
}
//{_tag_}value[getter]:long
::jlong jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","J");
    return env->GetLongField(jobj,jfid);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(long)bluebox.ll.util.nbt.TagLong
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagLong jnihelper::proxy::bluebox::ll::util::nbt::C_TagLong::newObj(::jlong value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(J)V");
    return {impl,env->NewObject(jcls,jmid,value)};
}
