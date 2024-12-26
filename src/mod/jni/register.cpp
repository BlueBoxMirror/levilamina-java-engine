#include "register.h"
#include "java_LeviLamina.h"
#include "java_Log.h"
#include "mod/Entry.h"
// #include "worlds/java_Player.h"
// #include "ll/api/event/player/PlayerJoinEvent.h"
// #include "ll/api/event/EventBus.h"
#include "jni.h"

//using namespace ll::event;

void lje::register_native_methods(JNIEnv *env){
    //EventBus& event_bus = EventBus::getInstance();

    // LeviLamina
    JNINativeMethod methods_LeviLamina[] = {
        {(char*)"removeModInNative", (char*)"(Ljava/lang/String;)V", (void*)j_LeviLamina::removeModInNative}
    };
    jclass jclass_LeviLamina = env->FindClass(PACK_JAVA_NAME("LeviLamina"));
    env->RegisterNatives(jclass_LeviLamina, methods_LeviLamina, 1);

    // Log
    JNINativeMethod methods_Logger[] = {
        {(char*)"info", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::info},
        {(char*)"warn", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::warn},
        {(char*)"error", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::error},
        {(char*)"debug", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::debug},
        {(char*)"init", (char*)"(Ljava/lang/String;)V", (void*)j_Logger::init},
        {(char*)"dispose", (char*)"()V", (void*)j_Logger::dispose}
    };
    jclass jclass_Log = env->FindClass(PACK_JAVA_NAME("Logger"));
    env->RegisterNatives(jclass_Log, methods_Logger, 6);

    //bluebox_levilamina_engine_worlds_Player
    // JNINativeMethod methods_Player[] = {
    //     {(char*)"getRealName", (char*)"()Ljava/lang/String;", (void*)j_Player::getRealName},
    //     {(char*)"tell",(char*)"(Ljava/lang/String;)V", (void*)j_Player::tell}
    // };
    // jclass jclass_Player = env->FindClass(PACK_JAVA_NAME("worlds/Player"));
    // env->RegisterNatives(jclass_Player, methods_Player, 2);
}