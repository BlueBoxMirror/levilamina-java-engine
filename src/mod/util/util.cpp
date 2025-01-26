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
    jobject newFormEvent(JNIEnv* env,Player* player,jobject jobj_data){
        jclass jcls_FormEvent = env->FindClass(JCLASS_FormEvent);
        jmethodID jmid_FormEvent = env->GetMethodID(jcls_FormEvent, "<init>", "(" JCLASS_Player "Ljava/lang/Object;)V");
        return env->NewObject(jcls_FormEvent, jmid_FormEvent, newJavaPlayer(env, player), jobj_data);
    }
    jobject newFormEvent(JNIEnv* env,Player* player,ModalFormCancelReason cancelReason){
        jclass jcls_FormEvent = env->FindClass(JCLASS_FormEvent);
        jclass jcls_FormCancelReason = env->FindClass(JCLASS_FormCancelReason);
        jmethodID jmid_values = env->GetStaticMethodID(jcls_FormCancelReason, "values", "()[" JCLASS_FormCancelReason );
        jmethodID jmid_FormEvent = env->GetMethodID(jcls_FormEvent, "<init>", "(" JCLASS_Player JCLASS_FormCancelReason ")V");
        jobjectArray jarr_cancelReason = (jobjectArray)env->CallStaticObjectMethod(jcls_FormCancelReason, jmid_values);
        jobject jobj_cancelReason = env->GetObjectArrayElement(jarr_cancelReason,(jint) cancelReason);
        
        return env->NewObject(jcls_FormEvent, jmid_FormEvent, newJavaPlayer(env, player), jobj_cancelReason);
    }

    void Iterable_forEach(JNIEnv* env, jobject jobj_iterable, std::function<void(JNIEnv* env,jobject element)> consumer){
        jclass jcls_Iterable=env->FindClass("Ljava/lang/Iterable;");
        jclass jcls_Iterator=env->FindClass("Ljava/util/Iterator;");
        jmethodID jmid_Iterable_iterator=env->GetMethodID(jcls_Iterable, "iterator", "()Ljava/util/Iterator;");
        jmethodID jmid_Iterator_hasNext=env->GetMethodID(jcls_Iterator, "hasNext", "()Z");
        jmethodID jmid_Iterator_next=env->GetMethodID(jcls_Iterator, "next", "()Ljava/lang/Object;");

        jobject jobj_iterator=env->CallObjectMethod(jobj_iterable, jmid_Iterable_iterator);
        while(env->CallBooleanMethod(jobj_iterator, jmid_Iterator_hasNext)){
            jobject jobj_element=env->CallObjectMethod(jobj_iterator, jmid_Iterator_next);
            consumer(env,jobj_element);
            env->DeleteLocalRef(jobj_element);
        }
        env->DeleteLocalRef(jobj_iterator);
    }
}