// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Iterator.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_Iterator>(){
    return "Ljava/util/Iterator;";
}
jnihelper::proxy::java::util::O_Iterator::O_Iterator(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_Iterator::C_Iterator(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_Iterator>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}forEachRemaining(java.util.function.Consumer)void
void jnihelper::proxy::java::util::O_Iterator::m_forEachRemaining(::jnihelper::proxy::java::util::function::O_Consumer arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"forEachRemaining","(Ljava/util/function/Consumer;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}remove()void
void jnihelper::proxy::java::util::O_Iterator::m_remove(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}hasNext()boolean
::jboolean jnihelper::proxy::java::util::O_Iterator::m_hasNext(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"hasNext","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}next()java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::util::O_Iterator::m_next(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"next","()Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_static_}
//{_static_}//{_static_}