// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/I18n.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::O_I18n>(){
    return "Lbluebox/ll/util/I18n;";
}
jnihelper::proxy::bluebox::ll::util::O_I18n::O_I18n(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::C_I18n::C_I18n(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::O_I18n>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}translations[getter]:java.util.HashMap
::jnihelper::proxy::java::util::O_HashMap jnihelper::proxy::bluebox::ll::util::O_I18n::f_translations(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"translations","Ljava/util/HashMap;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/HashMap;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}trl(java.lang.String,java.lang.String,[Ljava.lang.Object;)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::O_I18n::m_trl(::jnihelper::proxy::java::lang::O_String _localeCode, ::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"trl","(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_localeCode.get(),_key.get(),_args.get())};
}
//{_tag_}set(java.lang.String,java.lang.String,java.lang.String)void
void jnihelper::proxy::bluebox::ll::util::O_I18n::m_set(::jnihelper::proxy::java::lang::O_String _localeCode, ::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::lang::O_String _value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_localeCode.get(),_key.get(),_value.get());
}
//{_tag_}defaultLocalCode[setter]:java.lang.String
void jnihelper::proxy::bluebox::ll::util::O_I18n::f_defaultLocalCode(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"defaultLocalCode","Ljava/lang/String;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}translations[setter]:java.util.HashMap
void jnihelper::proxy::bluebox::ll::util::O_I18n::f_translations(::jnihelper::proxy::java::util::O_HashMap value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"translations","Ljava/util/HashMap;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}get(java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::O_I18n::m_get(::jnihelper::proxy::java::lang::O_String _key){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","(Ljava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_key.get())};
}
//{_tag_}get(java.lang.String,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::O_I18n::m_get(::jnihelper::proxy::java::lang::O_String _localeCode, ::jnihelper::proxy::java::lang::O_String _key){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_localeCode.get(),_key.get())};
}
//{_tag_}tr(java.lang.String,[Ljava.lang.Object;)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::O_I18n::m_tr(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"tr","(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_key.get(),_args.get())};
}
//{_tag_}defaultLocalCode[getter]:java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::O_I18n::f_defaultLocalCode(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"defaultLocalCode","Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->GetObjectField(jobj,jfid)};
}
//{_static_}
//{_tag_}getDefaultLocaleCode()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::C_I18n::m_getDefaultLocaleCode(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getDefaultLocaleCode","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}load(java.io.File)bluebox.ll.util.I18n
::jnihelper::proxy::bluebox::ll::util::O_I18n jnihelper::proxy::bluebox::ll::util::C_I18n::m_load(::jnihelper::proxy::java::io::O_File _dir){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"load","(Ljava/io/File;)Lbluebox/ll/util/I18n;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/I18n;")),env->CallStaticObjectMethod(jcls,jmid,_dir.get())};
}
//{_tag_}load(java.io.File,java.lang.String)bluebox.ll.util.I18n
::jnihelper::proxy::bluebox::ll::util::O_I18n jnihelper::proxy::bluebox::ll::util::C_I18n::m_load(::jnihelper::proxy::java::io::O_File _dir, ::jnihelper::proxy::java::lang::O_String _defaultLocaleCode){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"load","(Ljava/io/File;Ljava/lang/String;)Lbluebox/ll/util/I18n;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/util/I18n;")),env->CallStaticObjectMethod(jcls,jmid,_dir.get(),_defaultLocaleCode.get())};
}
//{_tag_}gson[setter]:com.google.gson.Gson
void jnihelper::proxy::bluebox::ll::util::C_I18n::f_gson(::jnihelper::proxy::com::google::gson::O_Gson value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"gson","Lcom/google/gson/Gson;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}gson[getter]:com.google.gson.Gson
::jnihelper::proxy::com::google::gson::O_Gson jnihelper::proxy::bluebox::ll::util::C_I18n::f_gson(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"gson","Lcom/google/gson/Gson;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lcom/google/gson/Gson;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}<init>(java.lang.String)bluebox.ll.util.I18n
::jnihelper::proxy::bluebox::ll::util::O_I18n jnihelper::proxy::bluebox::ll::util::C_I18n::newObj(::jnihelper::proxy::java::lang::O_String _defaultLocalCode){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,_defaultLocalCode.get())};
}
