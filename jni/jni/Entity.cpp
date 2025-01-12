#include "../header/bluebox_ll_entity_Entity.h"
#include "../util/util.h"
#include "../util/nbt/java_nbt.h"
#include "../util/java_position.h"

#include "mc/dataloadhelper/DefaultDataLoadHelper.h"
#include "mc/math/Vec3.h"
#include "mc/math/Vec2.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/Actor.h"
#include "mc/server/commands/CommandUtils.h"

JNIEXPORT jstring JNICALL Java_bluebox_ll_entity_Entity_getType
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(actor->getTypeName().c_str());
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    getUniqueId
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_bluebox_ll_entity_Entity_getUniqueId
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    return (jlong)actor->getOrCreateUniqueID().id;
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_entity_Entity_getName
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(CommandUtils::getActorName(*actor).c_str());
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    getNameTag
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_entity_Entity_getNameTag
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(actor->getNameTag().c_str());
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    setNameTag
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_entity_Entity_setNameTag
  (JNIEnv *env, jobject thisObj, jstring jstr_name){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    const char* cstr_name = env->GetStringUTFChars(jstr_name, nullptr);
    actor->setNameTag(cstr_name);
    env->ReleaseStringUTFChars(jstr_name, cstr_name);
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    getNbt
 * Signature: ()Lbluebox/ll/util/nbt/TagCompound;
 */
JNIEXPORT jobject JNICALL Java_bluebox_ll_entity_Entity_getNbt
  (JNIEnv *env, jobject jobj){
    Actor* actor = (Actor*)lje::getNativePointer(env, jobj);
    CompoundTag tag;
    actor->save(tag);
    return lje::newTagCompound(env, &tag);
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    setNbt
 * Signature: (Lbluebox/ll/util/nbt/TagCompound;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_entity_Entity_setNbt
  (JNIEnv *env, jobject thisObj, jobject jobj_tag){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    CompoundTag tag;
    lje::toNativeCompound(env, jobj_tag, tag);
    DefaultDataLoadHelper helper;
    actor->load(tag,helper);
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    getLocation
 * Signature: ()Lbluebox/ll/util/Location;
 */
JNIEXPORT jobject JNICALL Java_bluebox_ll_entity_Entity_getLocation
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    return lje::newLocation(env, &actor->getPosition(), actor->getDimensionId());
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    kill
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_entity_Entity_kill
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    actor->kill();
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    getFeetLocation
 * Signature: ()Lbluebox/ll/util/Location;
 */
JNIEXPORT jobject JNICALL Java_bluebox_ll_entity_Entity_getFeetLocation
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    Vec3 pos = actor->getFeetPos();
    return lje::newLocation(env, &pos, actor->getDimensionId());
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    getDimensionId
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bluebox_ll_entity_Entity_getDimensionId
  (JNIEnv *env, jobject thisObj){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    return actor->getDimensionId();
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    teleport
 * Signature: (FFFIFF)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_entity_Entity_teleport__FFFIFF
  (JNIEnv *env, jobject thisObj, jfloat x, jfloat y, jfloat z, jint dimId, jfloat yaw, jfloat pitch){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    actor->teleport({x,y,z},dimId,{yaw,pitch});
  }

/*
 * Class:     bluebox_ll_entity_Entity
 * Method:    teleport
 * Signature: (FFFI)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_entity_Entity_teleport__FFFI
  (JNIEnv *env, jobject thisObj, jfloat x, jfloat y, jfloat z, jint dimId){
    Actor* actor = (Actor*)lje::getNativePointer(env, thisObj);
    actor->teleport({x,y,z},dimId);
  }