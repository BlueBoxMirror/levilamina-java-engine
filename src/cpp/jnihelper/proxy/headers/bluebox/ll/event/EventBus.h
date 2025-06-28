// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/LinkedList.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/Event.h"
#include "jnihelper/proxy/headers/java/util/HashMap.h"
#include "jnihelper/proxy/headers/java/lang/Class.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/EventListener.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/EventHandler.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/NativeEvent.h"
namespace jnihelper::proxy::bluebox::ll::event {

    class O_EventBus: public ::jnihelper::JavaObject{
    public:
        O_EventBus(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_EventBus: public JavaClass<O_EventBus>{
    public:
        C_EventBus(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}unregister(bluebox.ll.event.EventHandler)void
        void m_unregister(::jnihelper::proxy::bluebox::ll::event::O_EventHandler _handler);
        //{_tag_}register(bluebox.ll.event.EventHandler)void
        void m_register(::jnihelper::proxy::bluebox::ll::event::O_EventHandler _handler);
        //{_tag_}listenerMap[getter]:java.util.HashMap
        ::jnihelper::proxy::java::util::O_HashMap f_listenerMap();
        //{_tag_}rootListeners[getter]:java.util.LinkedList
        ::jnihelper::proxy::java::util::O_LinkedList f_rootListeners();
        //{_tag_}listenerMap[setter]:java.util.HashMap
        void f_listenerMap(::jnihelper::proxy::java::util::O_HashMap value);
        //{_tag_}publish(bluebox.ll.event.Event)void
        void m_publish(::jnihelper::proxy::bluebox::ll::event::O_Event _event);
        //{_tag_}publish(bluebox.ll.event.NativeEvent)void
        void m_publish(::jnihelper::proxy::bluebox::ll::event::O_NativeEvent _event);
        //{_tag_}rootListeners[setter]:java.util.LinkedList
        void f_rootListeners(::jnihelper::proxy::java::util::O_LinkedList value);
        //{_tag_}<init>()bluebox.ll.event.EventBus
        ::jnihelper::proxy::bluebox::ll::event::O_EventBus newObj();
        //{_tag_}emplaceListener(java.lang.Class,bluebox.ll.event.EventListener)bluebox.ll.event.EventHandler
        ::jnihelper::proxy::bluebox::ll::event::O_EventHandler m_emplaceListener(::jnihelper::proxy::java::lang::O_Class _eventType, ::jnihelper::proxy::bluebox::ll::event::O_EventListener _listener);
    };
    
}