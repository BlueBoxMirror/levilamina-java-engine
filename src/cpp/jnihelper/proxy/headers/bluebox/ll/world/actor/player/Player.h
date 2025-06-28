// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

namespace jnihelper::proxy::bluebox::ll::world::actor::player {

    class O_Player: public ::jnihelper::JavaObject{
    public:
        O_Player(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getRealName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getRealName();
    };
    
    class C_Player: public JavaClass<O_Player>{
    public:
        C_Player(::jnihelper::Env& env);
//{_static_}
        //{_tag_}<init>(long)bluebox.ll.world.actor.player.Player
        ::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player newObj(::jlong _nativePtr);
    };
    
}