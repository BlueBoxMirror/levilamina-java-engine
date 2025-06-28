// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagFloat.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat>(){
    return "Lbluebox/ll/util/nbt/TagFloat;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::O_TagFloat(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagFloat::C_TagFloat(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat>(env, env->FindClass(getFullName())){}


//{_instance_}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}get()float
::jfloat jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()F");
    return env->CallFloatMethod(jobj,jmid);
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}set(float)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::m_set(::jfloat value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(F)V");
    env->CallVoidMethod(jobj,jmid,value);
}
//{_tag_}value[setter]:float
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::f_value(::jfloat value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","F");
    env->SetFloatField(jobj,jfid,value);
}
//{_tag_}value[getter]:float
::jfloat jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","F");
    return env->GetFloatField(jobj,jfid);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(float)bluebox.ll.util.nbt.TagFloat
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagFloat jnihelper::proxy::bluebox::ll::util::nbt::C_TagFloat::newObj(::jfloat value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(F)V");
    return {impl,env->NewObject(jcls,jmid,value)};
}
