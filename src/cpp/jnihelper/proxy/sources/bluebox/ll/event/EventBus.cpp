// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/EventBus.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::event::O_EventBus>(){
    return "Lbluebox/ll/event/EventBus;";
}
jnihelper::proxy::bluebox::ll::event::O_EventBus::O_EventBus(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::event::C_EventBus::C_EventBus(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::event::O_EventBus>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_static_}
//{_tag_}unregister(bluebox.ll.event.EventHandler)void
void jnihelper::proxy::bluebox::ll::event::C_EventBus::m_unregister(::jnihelper::proxy::bluebox::ll::event::O_EventHandler _handler){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"unregister","(Lbluebox/ll/event/EventHandler;)V");
    env->CallStaticVoidMethod(jcls,jmid,_handler.get());
}
//{_tag_}register(bluebox.ll.event.EventHandler)void
void jnihelper::proxy::bluebox::ll::event::C_EventBus::m_register(::jnihelper::proxy::bluebox::ll::event::O_EventHandler _handler){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"register","(Lbluebox/ll/event/EventHandler;)V");
    env->CallStaticVoidMethod(jcls,jmid,_handler.get());
}
//{_tag_}listenerMap[getter]:java.util.HashMap
::jnihelper::proxy::java::util::O_HashMap jnihelper::proxy::bluebox::ll::event::C_EventBus::f_listenerMap(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"listenerMap","Ljava/util/HashMap;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/HashMap;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}rootListeners[getter]:java.util.LinkedList
::jnihelper::proxy::java::util::O_LinkedList jnihelper::proxy::bluebox::ll::event::C_EventBus::f_rootListeners(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"rootListeners","Ljava/util/LinkedList;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/LinkedList;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}listenerMap[setter]:java.util.HashMap
void jnihelper::proxy::bluebox::ll::event::C_EventBus::f_listenerMap(::jnihelper::proxy::java::util::O_HashMap value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"listenerMap","Ljava/util/HashMap;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}publish(bluebox.ll.event.Event)void
void jnihelper::proxy::bluebox::ll::event::C_EventBus::m_publish(::jnihelper::proxy::bluebox::ll::event::O_Event _event){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"publish","(Lbluebox/ll/event/Event;)V");
    env->CallStaticVoidMethod(jcls,jmid,_event.get());
}
//{_tag_}publish(bluebox.ll.event.NativeEvent)void
void jnihelper::proxy::bluebox::ll::event::C_EventBus::m_publish(::jnihelper::proxy::bluebox::ll::event::O_NativeEvent _event){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"publish","(Lbluebox/ll/event/NativeEvent;)V");
    env->CallStaticVoidMethod(jcls,jmid,_event.get());
}
//{_tag_}rootListeners[setter]:java.util.LinkedList
void jnihelper::proxy::bluebox::ll::event::C_EventBus::f_rootListeners(::jnihelper::proxy::java::util::O_LinkedList value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"rootListeners","Ljava/util/LinkedList;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}<init>()bluebox.ll.event.EventBus
::jnihelper::proxy::bluebox::ll::event::O_EventBus jnihelper::proxy::bluebox::ll::event::C_EventBus::newObj(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","()V");
    return {impl,env->NewObject(jcls,jmid)};
}
//{_tag_}emplaceListener(java.lang.Class,bluebox.ll.event.EventListener)bluebox.ll.event.EventHandler
::jnihelper::proxy::bluebox::ll::event::O_EventHandler jnihelper::proxy::bluebox::ll::event::C_EventBus::m_emplaceListener(::jnihelper::proxy::java::lang::O_Class _eventType, ::jnihelper::proxy::bluebox::ll::event::O_EventListener _listener){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"emplaceListener","(Ljava/lang/Class;Lbluebox/ll/event/EventListener;)Lbluebox/ll/event/EventHandler;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/event/EventHandler;")),env->CallStaticObjectMethod(jcls,jmid,_eventType.get(),_listener.get())};
}
