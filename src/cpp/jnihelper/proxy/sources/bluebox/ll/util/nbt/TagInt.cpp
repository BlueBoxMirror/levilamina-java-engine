// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagInt.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt>(){
    return "Lbluebox/ll/util/nbt/TagInt;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::O_TagInt(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagInt::C_TagInt(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt>(env, env->FindClass(getFullName())){}


//{_instance_}
//{_tag_}get()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}set(int)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::m_set(::jint value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(I)V");
    env->CallVoidMethod(jobj,jmid,value);
}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}value[setter]:int
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::f_value(::jint value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","I");
    env->SetIntField(jobj,jfid,value);
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[getter]:int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","I");
    return env->GetIntField(jobj,jfid);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(int)bluebox.ll.util.nbt.TagInt
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagInt jnihelper::proxy::bluebox::ll::util::nbt::C_TagInt::newObj(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(I)V");
    return {impl,env->NewObject(jcls,jmid,value)};
}
