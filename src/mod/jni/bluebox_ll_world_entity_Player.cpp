#include "../header/bluebox_ll_world_entity_Player.h"
#include "../util/util.h"

#include "mc/world/actor/player/Player.h"
#include "mc/enums/TextPacketType.h"
#include "mc/network/packet/TextPacket.h"

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
    TextPacket packet=TextPacket();
    packet.mType=type;
    packet.mMessage.assign(c_message);
    player->sendNetworkPacket(packet);
    env->ReleaseStringUTFChars(jstr_message,c_message);
  }


JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_updateItems
  (JNIEnv *, jobject);

JNIEXPORT jobjectArray JNICALL Java_bluebox_ll_world_entity_Player_getOnlinePlayers
  (JNIEnv *, jclass);

JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_setTitle
  (JNIEnv *, jobject, jstring, jobject, jint, jint, jint);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_entity_Player_isOperator
  (JNIEnv *, jobject);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_entity_Player_getOffHand
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_talkAs
  (JNIEnv *, jobject, jstring);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_entity_Player_getHand
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_runCommand
  (JNIEnv *, jobject, jstring);

JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_sendToast
  (JNIEnv *, jobject, jstring, jstring);

JNIEXPORT jstring JNICALL Java_bluebox_ll_world_entity_Player_getXUID
  (JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_entity_Player_kick
  (JNIEnv *, jobject, jstring);

JNIEXPORT jstring JNICALL Java_bluebox_ll_world_entity_Player_getUUID
  (JNIEnv *, jobject);







