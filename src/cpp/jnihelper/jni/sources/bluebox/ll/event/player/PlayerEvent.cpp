// This file is generated automatically.
#include "ll/api/event/player/PlayerEvent.h"
#include "jnihelper/jni/headers/bluebox/ll/event/player/PlayerEvent.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/EventBus.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/actor/player/Player.h"
#include "ll/api/event/EventBus.h"

namespace jnihelper::jni {

//{_tag_}registerInNative()V
void Java_bluebox_ll_event_player_PlayerEvent_registerInNative(::JNIEnv* envPtr, ::jclass ){
    // ll::event::EventBus::getInstance().emplaceListener<ll::event::PlayerEvent>([envPtr](ll::event::PlayerEvent& event){
    //     Env env(envPtr);
    //     IMPORT(bluebox::ll::event::player,PlayerEvent)
    //     IMPORT(bluebox::ll::event,NativeEvent)
    //     IMPORT(bluebox::ll::event,EventBus)
    //     IMPORT(bluebox::ll::world::actor::player,Player)
    //     auto player=Player.newObj((jlong)&event.self());
    //     EventBus.m_publish(PlayerEvent.newObj(player).as(NativeEvent));
    // });
}

}