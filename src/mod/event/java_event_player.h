#pragma once

#include "mod/Entry.h"
#include "mc/world/actor/player/Player.h"

#define JCLASS_Player_EVENT PACK_JAVA_NAME("event/player/PlayerEvent")
#define JCLASS_PlayerJoinEvent PACK_JAVA_NAME("event/player/PlayerJoinEvent")
#define JCLASS_PlayerConnectEvent PACK_JAVA_NAME("event/player/PlayerConnectEvent")
#define JCLASS_PlayerLeaveEvent PACK_JAVA_NAME("event/player/PlayerLeaveEvent")
#define JCLASS_PlayerAttackEvent PACK_JAVA_NAME("event/player/PlayerAttackEvent")

namespace lje::event::player{
    void registerNatives();

    jobject newPlayerConnectEvent(JNIEnv* env, Player* player);
    jobject newPlayerJoinEvent(JNIEnv* env, Player* player);
    jobject newPlayerLeaveEvent(JNIEnv* env, Player* player);
    jobject newPlayerAttackEvent(JNIEnv* env, Player* player, Actor* target,jint cause);

}