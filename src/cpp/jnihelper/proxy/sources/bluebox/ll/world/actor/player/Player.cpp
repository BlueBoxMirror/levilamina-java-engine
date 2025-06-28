// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/actor/player/Player.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::actor::player::O_Player>(){
    return "Lbluebox/ll/world/actor/player/Player;";
}
jnihelper::proxy::bluebox::ll::world::actor::player::O_Player::O_Player(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::actor::player::C_Player::C_Player(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::actor::player::O_Player>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}getRealName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::world::actor::player::O_Player::m_getRealName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getRealName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_static_}
//{_tag_}<init>(long)bluebox.ll.world.actor.player.Player
::jnihelper::proxy::bluebox::ll::world::actor::player::O_Player jnihelper::proxy::bluebox::ll::world::actor::player::C_Player::newObj(::jlong _nativePtr){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(J)V");
    return {impl,env->NewObject(jcls,jmid,_nativePtr)};
}
