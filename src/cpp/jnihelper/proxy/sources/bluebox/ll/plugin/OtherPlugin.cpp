// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/OtherPlugin.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin>(){
    return "Lbluebox/ll/plugin/OtherPlugin;";
}
jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::O_OtherPlugin(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::plugin::C_OtherPlugin::C_OtherPlugin(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}manifest[setter]:bluebox.ll.plugin.Manifest
void jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::f_manifest(::jnihelper::proxy::bluebox::ll::plugin::O_Manifest value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"manifest","Lbluebox/ll/plugin/Manifest;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}logger[getter]:bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::f_logger(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"logger","Lbluebox/ll/Logger;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/Logger;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}name[setter]:java.lang.String
void jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::f_name(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"name","Ljava/lang/String;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}getLogger()bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::m_getLogger(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getLogger","()Lbluebox/ll/Logger;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/Logger;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}logger[setter]:bluebox.ll.Logger
void jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::f_logger(::jnihelper::proxy::bluebox::ll::O_Logger value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"logger","Lbluebox/ll/Logger;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}manifest[getter]:bluebox.ll.plugin.Manifest
::jnihelper::proxy::bluebox::ll::plugin::O_Manifest jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::f_manifest(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"manifest","Lbluebox/ll/plugin/Manifest;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/plugin/Manifest;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}name[getter]:java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::f_name(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"name","Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}getManifest()bluebox.ll.plugin.Manifest
::jnihelper::proxy::bluebox::ll::plugin::O_Manifest jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::m_getManifest(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getManifest","()Lbluebox/ll/plugin/Manifest;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/plugin/Manifest;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin::m_getName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(java.lang.String,bluebox.ll.Logger)bluebox.ll.plugin.OtherPlugin
::jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin jnihelper::proxy::bluebox::ll::plugin::C_OtherPlugin::newObj(::jnihelper::proxy::java::lang::O_String _name, ::jnihelper::proxy::bluebox::ll::O_Logger _logger){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;Lbluebox/ll/Logger;)V");
    return {impl,env->NewObject(jcls,jmid,_name.get(),_logger.get())};
}
