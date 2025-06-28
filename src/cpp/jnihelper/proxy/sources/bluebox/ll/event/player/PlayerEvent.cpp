// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/event/player/PlayerEvent.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent>(){
    return "Lbluebox/ll/event/player/PlayerEvent;";
}
jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent::O_PlayerEvent(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::event::player::C_PlayerEvent::C_PlayerEvent(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}player[getter]:bluebox.ll.world.actor.player.Player
::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent::f_player(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"player","Lbluebox/ll/world/actor/player/Player;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/world/actor/player/Player;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}getPlayer()bluebox.ll.world.actor.player.Player
::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent::m_getPlayer(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getPlayer","()Lbluebox/ll/world/actor/player/Player;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Lbluebox/ll/world/actor/player/Player;")),env->CallObjectMethod(jobj,jmid)};
}

//{_tag_}player[setter]:bluebox.ll.world.actor.player.Player
void jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent::f_player(::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"player","Lbluebox/ll/world/actor/player/Player;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_static_}
//{_tag_}registerInNative()void
void jnihelper::proxy::bluebox::ll::event::player::C_PlayerEvent::m_registerInNative(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"registerInNative","()V");
    env->CallStaticVoidMethod(jcls,jmid);
}
//{_tag_}<init>(bluebox.ll.world.actor.player.Player)bluebox.ll.event.player.PlayerEvent
::jnihelper::proxy::bluebox::ll::event::player::O_PlayerEvent jnihelper::proxy::bluebox::ll::event::player::C_PlayerEvent::newObj(::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player _player){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Lbluebox/ll/world/actor/player/Player;)V");
    return {impl,env->NewObject(jcls,jmid,_player.get())};
}
