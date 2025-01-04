#pragma once

#include "mod/Entry.h"
#include "mc/world/actor/player/Player.h"

#define JCLASS_PLAYER_EVENT PACK_JAVA_NAME("event/player/PlayerEvent")
#define JCLASS_PLAYER_JOIN_EVENT PACK_JAVA_NAME("event/player/PlayerJoinEvent")
#define JCLASS_PLAYER_CONNECT_EVENT PACK_JAVA_NAME("event/player/PlayerConnectEvent")
#define JCLASS_PLAYER_LEAVE_EVENT PACK_JAVA_NAME("event/player/PlayerLeaveEvent")

namespace lje::event::player{
    void registerNatives();

    jobject newPlayerConnectEvent(JNIEnv* env, Player* player);
    jobject newPlayerJoinEvent(JNIEnv* env, Player* player);
    jobject newPlayerLeaveEvent(JNIEnv* env, Player* player);
}