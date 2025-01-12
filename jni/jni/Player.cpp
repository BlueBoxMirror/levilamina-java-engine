#include "../header/bluebox_ll_entity_Player.h"
#include "../util/util.h"

#include "mc/world/actor/player/Player.h"
#include "mc/enums/TextPacketType.h"
#include "mc/network/packet/TextPacket.h"

/*
 * Class:     bluebox_ll_entity_Player
 * Method:    getRealName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_entity_Player_getRealName
  (JNIEnv *env, jobject thisObj){
    Player* player = (Player*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(player->getRealName().c_str());
  }

/*
 * Class:     bluebox_ll_entity_Player
 * Method:    sendChat
 * Signature: (Ljava/lang/String;Lbluebox/ll/entity/Player/ChatType;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_entity_Player_sendChat
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