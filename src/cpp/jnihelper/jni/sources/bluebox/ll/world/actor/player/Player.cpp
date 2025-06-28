// This file is generated automatically.
#include "mc/world/actor/player/Player.h"
#include "jnihelper/jni/headers/bluebox/ll/world/actor/player/Player.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/actor/Actor.h"

namespace jnihelper::jni {

//{_tag_}getRealName()Ljava/lang/String;
::jobject Java_bluebox_ll_world_actor_player_Player_getRealName(::JNIEnv* envPtr, ::jobject n_thisObj){
    Env env(envPtr);
    IMPORT(bluebox::ll::world::actor::player,Player)
    IMPORT(bluebox::ll::world::actor,Actor)
    IMPORT(java::lang,String)
    auto thisObj=Player.package(n_thisObj);
    auto player= (::Player*) thisObj.as(Actor).f_nativePtr();
    return String.newObj(player->getRealName()).release();
}

}