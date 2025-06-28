// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/actor/player/Player.h"
namespace jnihelper::proxy::bluebox::ll::event::player {

    class O_PlayerEvent: public ::jnihelper::JavaObject{
    public:
        O_PlayerEvent(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}player[getter]:bluebox.ll.world.actor.player.Player
        ::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player f_player();
        //{_tag_}getPlayer()bluebox.ll.world.actor.player.Player
        ::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player m_getPlayer();
                //{_tag_}player[setter]:bluebox.ll.world.actor.player.Player
        void f_player(::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player value);
    };
    
    class C_PlayerEvent: public JavaClass<O_PlayerEvent>{
    public:
        C_PlayerEvent(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}registerInNative()void
        void m_registerInNative();
        //{_tag_}<init>(bluebox.ll.world.actor.player.Player)bluebox.ll.event.player.PlayerEvent
        ::jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent newObj(::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player _player);
    };
    
}