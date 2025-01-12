#pragma once

#include "jni.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/actor/Actor.h"

#define PACK_JAVA_NAME(name) "Lbluebox/ll/" name ";"
#define JCLASS_String "Ljava/lang/String;"
#define JCLASS_LeviLamina PACK_JAVA_NAME("plugin/LeviLamina")
#define JCLASS_Logger PACK_JAVA_NAME("Logger")
#define JCLASS_Player PACK_JAVA_NAME("entity/Player")
#define JCLASS_Entity PACK_JAVA_NAME("entity/Entity")

namespace lje{
    jobject newJavaPlayer(JNIEnv* env, const Player* player);
    jobject newJavaEntity(JNIEnv* env, const Actor* entity);
}