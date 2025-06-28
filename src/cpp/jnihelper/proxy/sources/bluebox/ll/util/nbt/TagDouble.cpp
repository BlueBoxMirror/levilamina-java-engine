// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagDouble.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble>(){
    return "Lbluebox/ll/util/nbt/TagDouble;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::O_TagDouble(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagDouble::C_TagDouble(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble>(env, env->FindClass(getFullName())){}


//{_instance_}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[setter]:double
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::f_value(::jdouble value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","D");
    env->SetDoubleField(jobj,jfid,value);
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}set(double)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::m_set(::jdouble value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(D)V");
    env->CallVoidMethod(jobj,jmid,value);
}
//{_tag_}value[getter]:double
::jdouble jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","D");
    return env->GetDoubleField(jobj,jfid);
}
//{_tag_}get()double
::jdouble jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()D");
    return env->CallDoubleMethod(jobj,jmid);
}
//{_static_}
//{_tag_}<init>(double)bluebox.ll.util.nbt.TagDouble
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagDouble jnihelper::proxy::bluebox::ll::util::nbt::C_TagDouble::newObj(::jdouble value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(D)V");
    return {impl,env->NewObject(jcls,jmid,value)};
}
