#include "bluebox_levilamina_engine_worlds_Player.h"
#include "mc/world/actor/player/Player.h"
#include "mc/enums/TextPacketType.h"
#include "mc/network/packet/TextPacket.h"
#include "jni.h"

jstring lje::Java_bluebox_levilamina_engine_worlds_Player_getRealName(JNIEnv *env, jobject thisObj){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Player* player=(Player*)env->GetLongField(thisObj, jfield_nativePtr);
    jstring jstring_realName=env->NewStringUTF(player->getRealName().c_str());
    return jstring_realName;
}

void lje::Java_bluebox_levilamina_engine_worlds_Player_tell(JNIEnv *env, jobject thisObj, jstring jstring_message){
    jfieldID jfield_nativePtr=env->GetFieldID(env->GetObjectClass(thisObj), "nativePtr", "J");
    Player* player=(Player*)env->GetLongField(thisObj, jfield_nativePtr);
    const char* message=env->GetStringUTFChars(jstring_message, 0);
    TextPacketType type=TextPacketType::Raw;
    TextPacket pkt=TextPacket();
    pkt.mType=type;
    pkt.mMessage.assign(message);
    player->sendNetworkPacket(pkt);
    env->ReleaseStringUTFChars(jstring_message, message);
}

jobject lje::newJavaPlayer(JNIEnv *env,Player *player){
    jclass jclass_Player=env->FindClass("Lbluebox/levilamina/engine/worlds/Player;");
    env->ExceptionDescribe();
    jobject jobject_player=env->AllocObject(jclass_Player);
    jfieldID jfield_nativePtr=env->GetFieldID(jclass_Player, "nativePtr", "J");
    env->SetLongField(jobject_player, jfield_nativePtr, (jlong)player);
    return jobject_player;
}