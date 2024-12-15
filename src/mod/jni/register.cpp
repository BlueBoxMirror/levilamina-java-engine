#include "register.h"
#include "bluebox_levilamina_engine_Log.h"
#include "mod/Main.h"
#include "worlds/bluebox_levilamina_engine_worlds_Player.h"
#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/EventBus.h"
#include "jni.h"
#include "../Main.h"

using namespace ll::event;

void lje::register_native_methods(JNIEnv *env){
    EventBus& event_bus = EventBus::getInstance();

    // bluebox_levilamina_engine_Log
    JNINativeMethod methods[] = {
        {(char*)"info", (char*)"(Ljava/lang/String;)V", (void*)Java_bluebox_levilamina_engine_Log_info},
        {(char*)"warn", (char*)"(Ljava/lang/String;)V", (void*)Java_bluebox_levilamina_engine_Log_warn},
        {(char*)"error", (char*)"(Ljava/lang/String;)V", (void*)Java_bluebox_levilamina_engine_Log_error},
        {(char*)"debug", (char*)"(Ljava/lang/String;)V", (void*)Java_bluebox_levilamina_engine_Log_debug},
        {(char*)"init", (char*)"()V", (void*)Java_bluebox_levilamina_engine_Log_init},
        {(char*)"dispose", (char*)"()V", (void*)Java_bluebox_levilamina_engine_Log_dispose}
    };
    jclass jclass_Log = env->FindClass("Lbluebox/levilamina/engine/Log;");
    env->RegisterNatives(jclass_Log, methods, 6);

    //bluebox_levilamina_engine_worlds_Player
    JNINativeMethod methods_Player[] = {
        {(char*)"getRealName", (char*)"()Ljava/lang/String;", (void*)Java_bluebox_levilamina_engine_worlds_Player_getRealName},
        {(char*)"tell",(char*)"(Ljava/lang/String;)V", (void*)Java_bluebox_levilamina_engine_worlds_Player_tell}
    };
    jclass jclass_Player = env->FindClass("Lbluebox/levilamina/engine/worlds/Player;");
    env->RegisterNatives(jclass_Player, methods_Player, 2);

    //bluebox_levilamina_engine_events_PlayerJoinEvent
    event_bus.emplaceListener<PlayerJoinEvent>([](PlayerJoinEvent& event){
        JNIEnv *env=getEnv();
        
        jclass jclass_PlayerJoinEvent = env->FindClass("Lbluebox/levilamina/engine/events/PlayerJoinEvent;");
        jmethodID jmethodID_PlayerJoinEvent_execute = env->GetStaticMethodID(jclass_PlayerJoinEvent, "execute", "(Lbluebox/levilamina/engine/worlds/Player;)V");
        jobject jobject_player = newJavaPlayer(env, &event.self());
        env->CallStaticVoidMethod(jclass_PlayerJoinEvent, jmethodID_PlayerJoinEvent_execute, jobject_player);
        env->DeleteLocalRef(jclass_PlayerJoinEvent);
        detachCurrentThread();
        return true;
    });
}