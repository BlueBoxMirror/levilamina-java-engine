#include "register.h"
#include "plugin/java_LeviLamina.h"
#include "java_Log.h"
#include "util/nbt/java_nbt.h"
#include "event/java_event_player.h"
#include "plugin/java_OtherPlugin.h"
#include "entity/java_Entity.h"
#include "entity/java_Player.h"
#include "util/nbt/java_nbt.h"
#include "jni.h"

//using namespace ll::event;

void lje::register_native_methods(JNIEnv *env){
    //event
    event::player::registerNatives();

    // LeviLamina
    JNINativeMethod methods_LeviLamina[] = {
        {(char*)"removeModInNative", (char*)"(Ljava/lang/String;)V", (void*)plugin::j_LeviLamina::removeModInNative},
        {(char*)"hasPlugin", (char*)"(Ljava/lang/String;)Z", (void*)plugin::j_LeviLamina::hasPlugin},
        {(char*)"getNativePlugin", (char*)"(Ljava/lang/String;)" JCLASS_PLUGIN , (void*)plugin::j_LeviLamina::getNativePlugin}
    };
    jclass jclass_LeviLamina = env->FindClass(JCLASS_LEVILAMINA);
    env->RegisterNatives(jclass_LeviLamina, methods_LeviLamina, 3);

    //OtherPlugin
    JNINativeMethod methods_OtherPlugin[] = {
        {(char*)"disable", (char*)"()V", (void*)plugin::j_OtherPlugin::disable},
    };
    env->RegisterNatives(env->FindClass(JCLASS_OTHER_PLUGIN), methods_OtherPlugin, 1);

    // Log
    JNINativeMethod methods_Logger[] = {
        {(char*)"info", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::info},
        {(char*)"warn", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::warn},
        {(char*)"error", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::error},
        {(char*)"debug", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::debug},
        {(char*)"init", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::init},
        {(char*)"dispose", (char*)"()V", (void*)j_Logger::dispose}
    };
    jclass jclass_Log = env->FindClass(JCLASS_LOGGER);
    env->RegisterNatives(jclass_Log, methods_Logger, 6);

    // TagCompound
    JNINativeMethod methods_NBT[] = {
        {(char*)"toBinary", (char*)"()[B", (void*)util::nbt::toBinary},
        {(char*)"parse",(char*) "([B)" JCLASS_COMPOUND_TAG , (void*)util::nbt::parseBinary}
    };
    jclass jclass_TagCompound = env->FindClass(JCLASS_COMPOUND_TAG);
    env->RegisterNatives(jclass_TagCompound, methods_NBT, 2);

    //Entity
    JNINativeMethod methods_Entity[] = {
        {(char*)"getNbt",(char*)"()" JCLASS_COMPOUND_TAG , (void*)lje::j_Entity::getNbt},
        {(char*)"setNbt",(char*)"(" JCLASS_COMPOUND_TAG  ")V", (void*)lje::j_Entity::setNbt}
    };
    jclass jclass_Entity = env->FindClass(JCLASS_ENTITY);
    env->RegisterNatives(jclass_Entity, methods_Entity, 2);

    //Player
    JNINativeMethod methods_Player[] = {
        {(char*)"getRealName",(char*)"()" JCLASS_STRING , (void*)lje::j_Player::getRealName},
        {(char*)"sendChat",(char*)"(Ljava/lang/String;)V", (void*)lje::j_Player::sendChat}
    };
    jclass jclass_Player = env->FindClass(JCLASS_PLAYER);
    env->RegisterNatives(jclass_Player, methods_Player, 2);
}
