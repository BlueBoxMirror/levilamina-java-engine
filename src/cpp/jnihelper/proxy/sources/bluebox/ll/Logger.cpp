// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/Logger.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::O_Logger>(){
    return "Lbluebox/ll/Logger;";
}
jnihelper::proxy::bluebox::ll::O_Logger::O_Logger(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::C_Logger::C_Logger(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::O_Logger>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}info(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_info(::jnihelper::proxy::java::lang::O_String arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"info","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}nativePtr[getter]:long
::jlong jnihelper::proxy::bluebox::ll::O_Logger::f_nativePtr(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"nativePtr","J");
    return env->GetLongField(jobj,jfid);
}
//{_tag_}warn(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_warn(::jnihelper::proxy::java::lang::O_String arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"warn","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}getNativePointer()long
::jlong jnihelper::proxy::bluebox::ll::O_Logger::m_getNativePointer(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getNativePointer","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}error(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_error(::jnihelper::proxy::java::lang::O_String arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"error","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}init(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_init(::jnihelper::proxy::java::lang::O_String arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"init","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}debug(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_debug(::jnihelper::proxy::java::lang::O_String arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"debug","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}nativePtr[setter]:long
void jnihelper::proxy::bluebox::ll::O_Logger::f_nativePtr(::jlong value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"nativePtr","J");
    env->SetLongField(jobj,jfid,value);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>(long)bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::C_Logger::newObj(::jlong arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(J)V");
    return {impl,env->NewObject(jcls,jmid,arg0)};
}
//{_tag_}<init>(java.lang.String)bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::C_Logger::newObj(::jnihelper::proxy::java::lang::O_String arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,arg0.get())};
}
//{_tag_}release(long)void
void jnihelper::proxy::bluebox::ll::C_Logger::m_release(::jlong arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"release","(J)V");
    env->CallStaticVoidMethod(jcls,jmid,arg0);
}
