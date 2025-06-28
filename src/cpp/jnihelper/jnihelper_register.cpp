// This file is generated automatically.
// Do not modify it manually.
#include "jni/headers/bluebox/ll/world/actor/Actor.h"
#include "jni/headers/bluebox/ll/world/actor/player/Player.h"
#include "jni/headers/bluebox/ll/event/player/PlayerEvent.h"
#include "jni/headers/bluebox/ll/Logger.h"
#include "jni/headers/bluebox/ll/util/nbt/TagCompound.h"
#include "jni/headers/bluebox/ll/plugin/LeviLamina.h"
#include "jni/headers/bluebox/ll/util/I18n.h"
#include "jnihelper.h"
void jnihelper::registerNatives(JNIEnv* env){
{
    jclass clazz = env->FindClass("Lbluebox/ll/world/actor/Actor;");
    JNINativeMethod methods[]={
        {(char*)"kill", (char*)"()V", (void*)&jni::Java_bluebox_ll_world_actor_Actor_kill},
    };
    env->RegisterNatives(clazz, methods, 1);
}
{
    jclass clazz = env->FindClass("Lbluebox/ll/world/actor/player/Player;");
    JNINativeMethod methods[]={
        {(char*)"getRealName", (char*)"()Ljava/lang/String;", (void*)&jni::Java_bluebox_ll_world_actor_player_Player_getRealName},
    };
    env->RegisterNatives(clazz, methods, 1);
}
{
    jclass clazz = env->FindClass("Lbluebox/ll/event/player/PlayerEvent;");
    JNINativeMethod methods[]={
        {(char*)"registerInNative", (char*)"()V", (void*)&jni::Java_bluebox_ll_event_player_PlayerEvent_registerInNative},
    };
    env->RegisterNatives(clazz, methods, 1);
}
{
    jclass clazz = env->FindClass("Lbluebox/ll/Logger;");
    JNINativeMethod methods[]={
        {(char*)"init", (char*)"(Ljava/lang/String;)V", (void*)&jni::Java_bluebox_ll_Logger_init},
        {(char*)"log", (char*)"(ILjava/lang/String;)V", (void*)&jni::Java_bluebox_ll_Logger_log},
        {(char*)"getTitle", (char*)"()Ljava/lang/String;", (void*)&jni::Java_bluebox_ll_Logger_getTitle},
        {(char*)"setLevel", (char*)"(I)V", (void*)&jni::Java_bluebox_ll_Logger_setLevel},
        {(char*)"getLevel", (char*)"()I", (void*)&jni::Java_bluebox_ll_Logger_getLevel},
        {(char*)"setFlushLevel", (char*)"(I)V", (void*)&jni::Java_bluebox_ll_Logger_setFlushLevel},
        {(char*)"flush", (char*)"()V", (void*)&jni::Java_bluebox_ll_Logger_flush},
        {(char*)"release", (char*)"(J)V", (void*)&jni::Java_bluebox_ll_Logger_release},
    };
    env->RegisterNatives(clazz, methods, 8);
}
{
    jclass clazz = env->FindClass("Lbluebox/ll/util/nbt/TagCompound;");
    JNINativeMethod methods[]={
        {(char*)"toBinary", (char*)"()[B", (void*)&jni::Java_bluebox_ll_util_nbt_TagCompound_toBinary},
        {(char*)"parse", (char*)"([B)Lbluebox/ll/util/nbt/TagCompound;", (void*)&jni::Java_bluebox_ll_util_nbt_TagCompound_parse},
    };
    env->RegisterNatives(clazz, methods, 2);
}
{
    jclass clazz = env->FindClass("Lbluebox/ll/plugin/LeviLamina;");
    JNINativeMethod methods[]={
        {(char*)"hasPlugin", (char*)"(Ljava/lang/String;)Z", (void*)&jni::Java_bluebox_ll_plugin_LeviLamina_hasPlugin},
        {(char*)"getNativePlugin", (char*)"(Ljava/lang/String;)Lbluebox/ll/plugin/Plugin;", (void*)&jni::Java_bluebox_ll_plugin_LeviLamina_getNativePlugin},
    };
    env->RegisterNatives(clazz, methods, 2);
}
{
    jclass clazz = env->FindClass("Lbluebox/ll/util/I18n;");
    JNINativeMethod methods[]={
        {(char*)"getDefaultLocaleCode", (char*)"()Ljava/lang/String;", (void*)&jni::Java_bluebox_ll_util_I18n_getDefaultLocaleCode},
    };
    env->RegisterNatives(clazz, methods, 1);
}

}