#include "java_event_player.h"
#include "../entity/java_Player.h"
#include "java_event.h"
#include "jni.h"
#include "ll/api/event/player/PlayerLeaveEvent.h"
#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/EventBus.h"
#include "mod/Entry.h"

namespace lje::event::player{
    void registerNatives(){
        using namespace ll::event;
        EventBus& eventBus=EventBus::getInstance();
        eventBus.emplaceListener<PlayerJoinEvent>([](PlayerJoinEvent& event){
            JNIEnv* env=getEnv();
            Player* player=&event.self();
            jobject jobj_event=newPlayerJoinEvent(env, player);
            bool isCancelled=lje::event::publish(env, jobj_event);
            env->DeleteLocalRef(jobj_event);
            if(isCancelled) event.cancel();
            detachCurrentThread();
        });
        eventBus.emplaceListener<PlayerConnectEvent>([](PlayerConnectEvent& event){
            JNIEnv* env=getEnv();
            Player* player=&event.self();
            jobject jobj_event=newPlayerConnectEvent(env, player);
            bool isCancelled=lje::event::publish(env, jobj_event);
            env->DeleteLocalRef(jobj_event);
            if(isCancelled) event.cancel();
            detachCurrentThread();
        });
        eventBus.emplaceListener<PlayerLeaveEvent>([](PlayerLeaveEvent& event){
            JNIEnv* env=getEnv();
            Player* player=&event.self();
            jobject jobj_event=newPlayerLeaveEvent(env, player);
            lje::event::publish(env, jobj_event);
            env->DeleteLocalRef(jobj_event);
            detachCurrentThread();
        });
    }

    jobject newPlayerJoinEvent(JNIEnv* env, Player* player){
        jclass jcls_PlayerJoinEvent = env->FindClass(JCLASS_PLAYER_JOIN_EVENT);
        jmethodID jmethod_PlayerJoinEvent_init = env->GetMethodID(jcls_PlayerJoinEvent, "<init>", "(" JCLASS_PLAYER ")V");
        jobject jobj_native_player = lje::j_Player::newJavaPlayer(env, player);
        jobject jobj_PlayerJoinEvent = env->NewObject(jcls_PlayerJoinEvent, jmethod_PlayerJoinEvent_init, jobj_native_player);
        env->DeleteLocalRef(jobj_native_player);
        return jobj_PlayerJoinEvent;
    }
    jobject newPlayerLeaveEvent(JNIEnv* env, Player* player){
        jclass jcls_PlayerLeaveEvent = env->FindClass(JCLASS_PLAYER_LEAVE_EVENT);
        jmethodID jmethod_PlayerLeaveEvent_init = env->GetMethodID(jcls_PlayerLeaveEvent, "<init>", "(" JCLASS_PLAYER ")V");
        jobject jobj_native_player = lje::j_Player::newJavaPlayer(env, player);
        jobject jobj_PlayerLeaveEvent = env->NewObject(jcls_PlayerLeaveEvent, jmethod_PlayerLeaveEvent_init, jobj_native_player);
        env->DeleteLocalRef(jobj_native_player);
        return jobj_PlayerLeaveEvent;
    }
    jobject newPlayerConnectEvent(JNIEnv* env, Player* player){
        jclass jcls_PlayerConnectEvent = env->FindClass(JCLASS_PLAYER_CONNECT_EVENT);
        jmethodID jmethod_PlayerPreJoinEvent_init = env->GetMethodID(jcls_PlayerConnectEvent, "<init>", "(" JCLASS_PLAYER ")V");
        jobject jobj_native_player = lje::j_Player::newJavaPlayer(env, player);
        jobject jobj_PlayerPreJoinEvent = env->NewObject(jcls_PlayerConnectEvent, jmethod_PlayerPreJoinEvent_init, jobj_native_player);
        env->DeleteLocalRef(jobj_native_player);
        return jobj_PlayerPreJoinEvent;
    }
}