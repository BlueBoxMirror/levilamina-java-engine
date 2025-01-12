#include "util.h"

namespace lje{
    jobject newJavaPlayer(JNIEnv* env, const Player* player){
        jclass jcls_Player = env->FindClass(JCLASS_Player);
        jmethodID jmid_Init = env->GetMethodID(jcls_Player, "<init>", "(J)V");
        jobject jobj_player = env->NewObject(jcls_Player, jmid_Init,(jlong)player);
        return jobj_player;
    }
    jobject newJavaEntity(JNIEnv* env, const Actor* entity){
        jclass jcls_Entity = env->FindClass(JCLASS_Entity);
        jmethodID jmid_Init = env->GetMethodID(jcls_Entity, "<init>", "(J)V");
        jobject jobj_entity = env->NewObject(jcls_Entity, jmid_Init,(jlong)entity);
        return jobj_entity;
    }
}