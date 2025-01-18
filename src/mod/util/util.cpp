#include "util.h"
#include "jni.h"


namespace lje{
    void* getNativePointer(JNIEnv* env, jobject obj){
        jclass jcls_PointerSupporter=env->FindClass(JCLASS_PointerSupporter);
        jmethodID jmid_getNativePointer=env->GetMethodID(jcls_PointerSupporter, "getNativePointer", "()J");
        return (void*)env->CallLongMethod(obj, jmid_getNativePointer);        
    }
    jint getEnumValue(JNIEnv* env, jobject obj){
        jclass jcls_enum=env->GetObjectClass(obj);
        jmethodID jmid_ordinal=env->GetMethodID(jcls_enum, "ordinal", "()I");
        return env->CallIntMethod(obj, jmid_ordinal);
    }
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