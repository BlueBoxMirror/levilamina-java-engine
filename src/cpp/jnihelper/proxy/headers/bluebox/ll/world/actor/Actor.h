// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
namespace jnihelper::proxy::bluebox::ll::world::actor {

    class O_Actor: public ::jnihelper::JavaObject{
    public:
        O_Actor(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}kill()void
        void m_kill();
//{_tag_}nativePtr[getter]:long
        ::jlong f_nativePtr();
        //{_tag_}getNativePointer()long
        ::jlong m_getNativePointer();
        //{_tag_}nativePtr[setter]:long
        void f_nativePtr(::jlong value);
    };
    
    class C_Actor: public JavaClass<O_Actor>{
    public:
        C_Actor(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}<init>(long)bluebox.ll.world.actor.Actor
        ::jnihelper::proxy::bluebox::ll::world::actor::O_Actor newObj(::jlong _nativePtr);
    };
    
}