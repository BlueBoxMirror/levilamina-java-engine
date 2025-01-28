#include "java_event_player.h"
#include "java_event.h"
#include "jni.h"
#include "ll/api/event/player/PlayerDisconnectEvent.h"
#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/EventBus.h"
#include "mod/Entry.h"
#include "mod/util/util.h"

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
        eventBus.emplaceListener<PlayerDisconnectEvent>([](PlayerDisconnectEvent& event){
            JNIEnv* env=getEnv();
            Player* player=&event.self();
            jobject jobj_event=newPlayerLeaveEvent(env, player);
            lje::event::publish(env, jobj_event);
            env->DeleteLocalRef(jobj_event);
            detachCurrentThread();
        });
        eventBus.emplaceListener<PlayerAttackEvent>([](PlayerAttackEvent& event){
            JNIEnv* env=getEnv();
            Player* player=&event.self();
            Actor* target=&event.target();
            int cause=(int)event.cause();
            jobject jobj_event=newPlayerAttackEvent(env, player, target, cause);
            bool isCancelled=lje::event::publish(env, jobj_event);
            env->DeleteLocalRef(jobj_event);
            if(isCancelled) event.cancel();
            detachCurrentThread();
        });
    }

    jobject newPlayerJoinEvent(JNIEnv* env, Player* player){
        jclass jcls_PlayerJoinEvent = env->FindClass(JCLASS_PlayerJoinEvent);
        jmethodID jmethod_PlayerJoinEvent_init = env->GetMethodID(jcls_PlayerJoinEvent, "<init>", "(" JCLASS_Player ")V");
        jobject jobj_native_player = lje::newJavaPlayer(env, player);
        jobject jobj_event = env->NewObject(jcls_PlayerJoinEvent, jmethod_PlayerJoinEvent_init, jobj_native_player);
        env->DeleteLocalRef(jobj_native_player);
        return jobj_event;
    }
    jobject newPlayerLeaveEvent(JNIEnv* env, Player* player){
        jclass jcls_PlayerLeaveEvent = env->FindClass(JCLASS_PlayerLeaveEvent);
        jmethodID jmethod_PlayerLeaveEvent_init = env->GetMethodID(jcls_PlayerLeaveEvent, "<init>", "(" JCLASS_Player ")V");
        jobject jobj_native_player = lje::newJavaPlayer(env, player);
        jobject jobj_event = env->NewObject(jcls_PlayerLeaveEvent, jmethod_PlayerLeaveEvent_init, jobj_native_player);
        env->DeleteLocalRef(jobj_native_player);
        return jobj_event;
    }
    jobject newPlayerConnectEvent(JNIEnv* env, Player* player){
        jclass jcls_PlayerConnectEvent = env->FindClass(JCLASS_PlayerConnectEvent);
        jmethodID jmethod_PlayerPreJoinEvent_init = env->GetMethodID(jcls_PlayerConnectEvent, "<init>", "(" JCLASS_Player ")V");
        jobject jobj_native_player = lje::newJavaPlayer(env, player);
        jobject jobj_event = env->NewObject(jcls_PlayerConnectEvent, jmethod_PlayerPreJoinEvent_init, jobj_native_player);
        env->DeleteLocalRef(jobj_native_player);
        return jobj_event;
    }
    jobject newPlayerAttackEvent(JNIEnv* env, Player* player, Actor* target,jint cause){
        jclass jcls_PlayerAttackEvent = env->FindClass(JCLASS_PlayerAttackEvent);
        jmethodID jmethod_PlayerAttackEvent_init = env->GetMethodID(jcls_PlayerAttackEvent, "<init>", "(" JCLASS_Player JCLASS_Entity "I)V");
        jobject jobj_native_player = lje::newJavaPlayer(env, player);
        jobject jobj_native_target = lje::newJavaEntity(env, target);
        jobject jobj_event = env->NewObject(jcls_PlayerAttackEvent, jmethod_PlayerAttackEvent_init, jobj_native_player, jobj_native_target,cause);
        env->DeleteLocalRef(jobj_native_player);
        env->DeleteLocalRef(jobj_native_target);
        return jobj_event;
    }
}