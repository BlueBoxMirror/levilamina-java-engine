// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/LeviLamina.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::plugin::O_LeviLamina>(){
    return "Lbluebox/ll/plugin/LeviLamina;";
}
jnihelper::proxy::bluebox::ll::plugin::O_LeviLamina::O_LeviLamina(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::C_LeviLamina(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::plugin::O_LeviLamina>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}preloadMods[getter]:java.util.HashMap
::jnihelper::proxy::java::util::O_HashMap jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_preloadMods(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"preloadMods","Ljava/util/HashMap;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/HashMap;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}classLoader[setter]:java.net.URLClassLoader
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_classLoader(::jnihelper::proxy::java::net::O_URLClassLoader value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"classLoader","Ljava/net/URLClassLoader;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}getNativePlugin(java.lang.String)bluebox.ll.plugin.Plugin
::jnihelper::proxy::bluebox::ll::plugin::O_Plugin jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_getNativePlugin(::jnihelper::proxy::java::lang::O_String _name){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getNativePlugin","(Ljava/lang/String;)Lbluebox/ll/plugin/Plugin;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/plugin/Plugin;")),env->CallStaticObjectMethod(jcls,jmid,_name.get())};
}
//{_tag_}addPlugin(java.lang.String)void
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_addPlugin(::jnihelper::proxy::java::lang::O_String _modDirPath){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"addPlugin","(Ljava/lang/String;)V");
    env->CallStaticVoidMethod(jcls,jmid,_modDirPath.get());
}
//{_tag_}mods[getter]:java.util.HashMap
::jnihelper::proxy::java::util::O_HashMap jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_mods(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"mods","Ljava/util/HashMap;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/HashMap;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}<init>()bluebox.ll.plugin.LeviLamina
::jnihelper::proxy::bluebox::ll::plugin::O_LeviLamina jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::newObj(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","()V");
    return {impl,env->NewObject(jcls,jmid)};
}
//{_tag_}modRootDir[getter]:java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_modRootDir(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"modRootDir","Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}gson[setter]:com.google.gson.Gson
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_gson(::jnihelper::proxy::com::google::gson::O_Gson value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"gson","Lcom/google/gson/Gson;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}gson[getter]:com.google.gson.Gson
::jnihelper::proxy::com::google::gson::O_Gson jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_gson(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"gson","Lcom/google/gson/Gson;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lcom/google/gson/Gson;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}preloadMods[setter]:java.util.HashMap
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_preloadMods(::jnihelper::proxy::java::util::O_HashMap value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"preloadMods","Ljava/util/HashMap;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}hasPlugin(java.lang.String)boolean
::jboolean jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_hasPlugin(::jnihelper::proxy::java::lang::O_String _name){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"hasPlugin","(Ljava/lang/String;)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_name.get());
}
//{_tag_}load()void
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_load(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"load","()V");
    env->CallStaticVoidMethod(jcls,jmid);
}
//{_tag_}getErrorStream()java.io.PrintStream
::jnihelper::proxy::java::io::O_PrintStream jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_getErrorStream(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getErrorStream","()Ljava/io/PrintStream;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/PrintStream;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}getLogger()bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_getLogger(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getLogger","()Lbluebox/ll/Logger;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/Logger;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}logger[setter]:bluebox.ll.Logger
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_logger(::jnihelper::proxy::bluebox::ll::O_Logger value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"logger","Lbluebox/ll/Logger;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}getClassLoader()java.lang.ClassLoader
::jnihelper::proxy::java::lang::O_ClassLoader jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_getClassLoader(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getClassLoader","()Ljava/lang/ClassLoader;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/ClassLoader;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}disable()void
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_disable(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"disable","()V");
    env->CallStaticVoidMethod(jcls,jmid);
}
//{_tag_}getOutputStream()java.io.PrintStream
::jnihelper::proxy::java::io::O_PrintStream jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_getOutputStream(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getOutputStream","()Ljava/io/PrintStream;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/PrintStream;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}init(java.io.File,bluebox.ll.Logger)void
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_init(::jnihelper::proxy::java::io::O_File _modRootDir, ::jnihelper::proxy::bluebox::ll::O_Logger _logger){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"init","(Ljava/io/File;Lbluebox/ll/Logger;)V");
    env->CallStaticVoidMethod(jcls,jmid,_modRootDir.get(),_logger.get());
}
//{_tag_}getModRootDir()java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_getModRootDir(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getModRootDir","()Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}classLoader[getter]:java.net.URLClassLoader
::jnihelper::proxy::java::net::O_URLClassLoader jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_classLoader(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"classLoader","Ljava/net/URLClassLoader;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/net/URLClassLoader;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}enable()void
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_enable(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"enable","()V");
    env->CallStaticVoidMethod(jcls,jmid);
}
//{_tag_}unload(java.lang.String)boolean
::jboolean jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_unload(::jnihelper::proxy::java::lang::O_String _name){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"unload","(Ljava/lang/String;)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_name.get());
}
//{_tag_}isPreloaded[getter]:boolean
::jboolean jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_isPreloaded(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"isPreloaded","Z");
    return env->GetStaticBooleanField(jcls,jfid);
}
//{_tag_}logger[getter]:bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_logger(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"logger","Lbluebox/ll/Logger;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/Logger;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}mods[setter]:java.util.HashMap
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_mods(::jnihelper::proxy::java::util::O_HashMap value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"mods","Ljava/util/HashMap;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}modRootDir[setter]:java.io.File
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_modRootDir(::jnihelper::proxy::java::io::O_File value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"modRootDir","Ljava/io/File;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}isPreloaded[setter]:boolean
void jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::f_isPreloaded(::jboolean value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"isPreloaded","Z");
    env->SetStaticBooleanField(jcls,jfid,value);
}
//{_tag_}getPlugin(java.lang.String)bluebox.ll.plugin.Plugin
::jnihelper::proxy::bluebox::ll::plugin::O_Plugin jnihelper::proxy::bluebox::ll::plugin::C_LeviLamina::m_getPlugin(::jnihelper::proxy::java::lang::O_String _name){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getPlugin","(Ljava/lang/String;)Lbluebox/ll/plugin/Plugin;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/plugin/Plugin;")),env->CallStaticObjectMethod(jcls,jmid,_name.get())};
}
