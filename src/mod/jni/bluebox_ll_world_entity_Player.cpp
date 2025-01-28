#include "../header/bluebox_ll_world_entity_Player.h"
#include "../util/util.h"

#include "jni.h"
#include "ll/api/service/Bedrock.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/actor/player/Player.h"

#include "mc/network/packet/TextPacket.h"
#include "mc/world/level/Level.h"

/*
 * Class:     bluebox_ll_block_entity_Player
 * Method:    getRealName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_world_entity_Player_getRealName
  (JNIEnv *env, jobject thisObj){
    Player* player = (Player*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(player->getRealName().c_str());
  }

/*
 * Class:     bluebox_ll_entity_Player
 * Method:    sendMessage
 * Signature: (Ljava/lang/String;Lbluebox/ll/entity/Player/ChatType;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_sendMessage
  (JNIEnv *env, jobject thisObj, jstring jstr_message, jobject jobj_type){
    Player* player=(Player*)lje::getNativePointer(env, thisObj);
    const char* c_message=env->GetStringUTFChars(jstr_message,nullptr);
    TextPacketType type=(TextPacketType)lje::getEnumValue(env, jobj_type);
    TextPacket packet;
    packet.mType=type;
    packet.mMessage.assign(c_message);
    player->sendNetworkPacket(packet);
    env->ReleaseStringUTFChars(jstr_message,c_message);
  }


JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_updateItems
  (JNIEnv *env, jobject thisObj){
    Player* player = (Player*)lje::getNativePointer(env, thisObj);
    player->refreshInventory();
  }

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_entity_Player_getUUID
  (JNIEnv *env, jobject thisObj){
    jclass jcls_UUID = env->FindClass("java/util/UUID");
    jmethodID jmid_UUID=env->GetMethodID(jcls_UUID, "<init>", "(JJ)V");
    Player* player = (Player*)lje::getNativePointer(env, thisObj);
    auto uuid = player->getUuid();
    return env->NewObject(jcls_UUID, jmid_UUID, (jlong)uuid.a, (jlong)uuid.b);
  }


JNIEXPORT jobject JNICALL Java_bluebox_ll_world_entity_Player_getOnline
  (JNIEnv *env, jclass){
    jclass jcls_ArrayList=env->FindClass("Ljava/util/ArrayList;");
    jmethodID jmid_ArrayList=env->GetMethodID(jcls_ArrayList, "<init>", "()V");
    jmethodID jmid_ArrayList_add=env->GetMethodID(jcls_ArrayList, "add", "(Ljava/lang/Object;)Z");

    jobject jobj_list=env->NewObject(jcls_ArrayList, jmid_ArrayList);
    optional_ref<Level> level=ll::service::getLevel();
    if(level.has_value()){
      level.value().forEachPlayer([&](Player& player){
        jobject jobj_player=lje::newJavaPlayer(env, &player);
        env->CallBooleanMethod(jobj_list, jmid_ArrayList_add, jobj_player);
        env->DeleteLocalRef(jobj_player);
        return true;
      });
    }
    return jobj_list;
  }

