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
//{_tag_}flush()void
void jnihelper::proxy::bluebox::ll::O_Logger::m_flush(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"flush","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}setLevel(int)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_setLevel(::jint _level){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setLevel","(I)V");
    env->CallVoidMethod(jobj,jmid,_level);
}
//{_tag_}setFlushLevel(int)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_setFlushLevel(::jint _level){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setFlushLevel","(I)V");
    env->CallVoidMethod(jobj,jmid,_level);
}
//{_tag_}log(int,java.lang.String,[Ljava.lang.Object;)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_log(::jint _level, ::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"log","(ILjava/lang/String;[Ljava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,_level,_message.get(),_args.get());
}
//{_tag_}fatal(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_fatal(::jnihelper::proxy::java::lang::O_String _message){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"fatal","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_message.get());
}
//{_tag_}debug(java.lang.String,[Ljava.lang.Object;)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_debug(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"debug","(Ljava/lang/String;[Ljava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,_message.get(),_args.get());
}
//{_tag_}log(int,java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_log(::jint _level, ::jnihelper::proxy::java::lang::O_String _message){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"log","(ILjava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_level,_message.get());
}
//{_tag_}getLevel()int
::jint jnihelper::proxy::bluebox::ll::O_Logger::m_getLevel(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getLevel","()I");
    return env->CallIntMethod(jobj,jmid);
}

//{_tag_}info(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_info(::jnihelper::proxy::java::lang::O_String _message){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"info","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_message.get());
}
//{_tag_}error(java.lang.String,[Ljava.lang.Object;)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_error(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"error","(Ljava/lang/String;[Ljava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,_message.get(),_args.get());
}
//{_tag_}trace(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_trace(::jnihelper::proxy::java::lang::O_String _message){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"trace","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_message.get());
}
//{_tag_}getTitle()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::O_Logger::m_getTitle(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getTitle","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}warn(java.lang.String,[Ljava.lang.Object;)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_warn(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"warn","(Ljava/lang/String;[Ljava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,_message.get(),_args.get());
}
//{_tag_}fatal(java.lang.String,[Ljava.lang.Object;)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_fatal(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"fatal","(Ljava/lang/String;[Ljava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,_message.get(),_args.get());
}
//{_tag_}trace(java.lang.String,[Ljava.lang.Object;)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_trace(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"trace","(Ljava/lang/String;[Ljava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,_message.get(),_args.get());
}

//{_tag_}info(java.lang.String,[Ljava.lang.Object;)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_info(::jnihelper::proxy::java::lang::O_String _message, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"info","(Ljava/lang/String;[Ljava/lang/Object;)V");
    env->CallVoidMethod(jobj,jmid,_message.get(),_args.get());
}
//{_tag_}nativePtr[getter]:long
::jlong jnihelper::proxy::bluebox::ll::O_Logger::f_nativePtr(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"nativePtr","J");
    return env->GetLongField(jobj,jfid);
}
//{_tag_}warn(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_warn(::jnihelper::proxy::java::lang::O_String _message){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"warn","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_message.get());
}
//{_tag_}getNativePointer()long
::jlong jnihelper::proxy::bluebox::ll::O_Logger::m_getNativePointer(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getNativePointer","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}error(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_error(::jnihelper::proxy::java::lang::O_String _message){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"error","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_message.get());
}
//{_tag_}init(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_init(::jnihelper::proxy::java::lang::O_String _tag){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"init","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_tag.get());
}
//{_tag_}debug(java.lang.String)void
void jnihelper::proxy::bluebox::ll::O_Logger::m_debug(::jnihelper::proxy::java::lang::O_String _message){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"debug","(Ljava/lang/String;)V");
    env->CallVoidMethod(jobj,jmid,_message.get());
}
//{_tag_}nativePtr[setter]:long
void jnihelper::proxy::bluebox::ll::O_Logger::f_nativePtr(::jlong value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"nativePtr","J");
    env->SetLongField(jobj,jfid,value);
}
//{_static_}
// //{_tag_}WARN[setter]:int
void jnihelper::proxy::bluebox::ll::C_Logger::f_WARN(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"WARN","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}INFO[setter]:int
void jnihelper::proxy::bluebox::ll::C_Logger::f_INFO(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"INFO","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}FATAL[getter]:int
::jint jnihelper::proxy::bluebox::ll::C_Logger::f_FATAL(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"FATAL","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}OFF[setter]:int
void jnihelper::proxy::bluebox::ll::C_Logger::f_OFF(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"OFF","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}ERROR[getter]:int
::jint jnihelper::proxy::bluebox::ll::C_Logger::f_ERROR(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"ERROR","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}OFF[getter]:int
::jint jnihelper::proxy::bluebox::ll::C_Logger::f_OFF(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"OFF","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}ERROR[setter]:int
void jnihelper::proxy::bluebox::ll::C_Logger::f_ERROR(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"ERROR","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}DEBUG[setter]:int
void jnihelper::proxy::bluebox::ll::C_Logger::f_DEBUG(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"DEBUG","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}FATAL[setter]:int
void jnihelper::proxy::bluebox::ll::C_Logger::f_FATAL(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"FATAL","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}WARN[getter]:int
::jint jnihelper::proxy::bluebox::ll::C_Logger::f_WARN(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"WARN","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}INFO[getter]:int
::jint jnihelper::proxy::bluebox::ll::C_Logger::f_INFO(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"INFO","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}TRACE[setter]:int
void jnihelper::proxy::bluebox::ll::C_Logger::f_TRACE(::jint value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"TRACE","I");
    env->SetStaticIntField(jcls,jfid,value);
}
//{_tag_}DEBUG[getter]:int
::jint jnihelper::proxy::bluebox::ll::C_Logger::f_DEBUG(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"DEBUG","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}TRACE[getter]:int
::jint jnihelper::proxy::bluebox::ll::C_Logger::f_TRACE(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"TRACE","I");
    return env->GetStaticIntField(jcls,jfid);
}
//{_tag_}<init>(long)bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::C_Logger::newObj(::jlong _nativePtr){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(J)V");
    return {impl,env->NewObject(jcls,jmid,_nativePtr)};
}
//{_tag_}<init>(java.lang.String)bluebox.ll.Logger
::jnihelper::proxy::bluebox::ll::O_Logger jnihelper::proxy::bluebox::ll::C_Logger::newObj(::jnihelper::proxy::java::lang::O_String _tag){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,_tag.get())};
}
//{_tag_}release(long)void
void jnihelper::proxy::bluebox::ll::C_Logger::m_release(::jlong _nativePtr){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"release","(J)V");
    env->CallStaticVoidMethod(jcls,jmid,_nativePtr);
}
