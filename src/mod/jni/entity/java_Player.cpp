#include "java_Player.h"
#include "mc/world/actor/player/Player.h"
#include "jni.h"
#include "../memory/java_Memory.h"
#include "mc/enums/TextPacketType.h"
#include "mc/network/packet/TextPacket.h"

namespace lje::j_Player{
jstring getRealName(JNIEnv *env, jobject thisObj){
    Player* player=(Player*)lje::memory::getPointer(env, thisObj);
    jstring jstring_realName=env->NewStringUTF(player->getRealName().c_str());
    return jstring_realName;
}

jobject newJavaPlayer(JNIEnv *env,Player *player){
    jclass jclass_Player=env->FindClass(JCLASS_PLAYER);
    jmethodID jmethod_Player_init=env->GetMethodID(jclass_Player,"<init>","(J)V");
    return env->NewObject(jclass_Player,jmethod_Player_init,(jlong)player);
}

void sendChat(JNIEnv *env, jobject thisObj, jstring jstr_message){
    Player* player=(Player*)lje::memory::getPointer(env, thisObj);
    const char* c_message=env->GetStringUTFChars(jstr_message,nullptr);
    TextPacketType type=TextPacketType::Raw;
    TextPacket packet=TextPacket();
    packet.mType=type;
    packet.mMessage.assign(c_message);
    player->sendNetworkPacket(packet);
    env->ReleaseStringUTFChars(jstr_message,c_message);
}

}