// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_Object>(){
    return "Ljava/lang/Object;";
}
jnihelper::proxy::java::lang::O_Object::O_Object(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_Object::C_Object(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_Object>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}wait0(long)void
void jnihelper::proxy::java::lang::O_Object::m_wait0(::jlong _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"wait0","(J)V");
    env->CallVoidMethod(jobj,jmid,_arg0);
}
//{_tag_}wait()void
void jnihelper::proxy::java::lang::O_Object::m_wait(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"wait","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}wait(long,int)void
void jnihelper::proxy::java::lang::O_Object::m_wait(::jlong _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"wait","(JI)V");
    env->CallVoidMethod(jobj,jmid,_arg0,_arg1);
}
//{_tag_}notify()void
void jnihelper::proxy::java::lang::O_Object::m_notify(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"notify","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}notifyAll()void
void jnihelper::proxy::java::lang::O_Object::m_notifyAll(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"notifyAll","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}finalize()void
void jnihelper::proxy::java::lang::O_Object::m_finalize(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"finalize","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}equals(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::lang::O_Object::m_equals(::jnihelper::proxy::java::lang::O_Object _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"equals","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}getClass()java.lang.Class
::jnihelper::proxy::java::lang::O_Class jnihelper::proxy::java::lang::O_Object::m_getClass(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getClass","()Ljava/lang/Class;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Class;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}clone()java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::lang::O_Object::m_clone(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"clone","()Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_Object::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}hashCode()int
::jint jnihelper::proxy::java::lang::O_Object::m_hashCode(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"hashCode","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}wait(long)void
void jnihelper::proxy::java::lang::O_Object::m_wait(::jlong _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"wait","(J)V");
    env->CallVoidMethod(jobj,jmid,_arg0);
}
//{_static_}
//{_tag_}<init>()java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::lang::C_Object::newObj(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","()V");
    return {impl,env->NewObject(jcls,jmid)};
}
