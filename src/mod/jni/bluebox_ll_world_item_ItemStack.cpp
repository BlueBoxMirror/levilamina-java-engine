#include "../header/bluebox_ll_world_item_ItemStack.h"
#include "../util/util.h"
#include "mc/world/item/registry/ItemStack.h"  
/*  
 * Class:     bluebox_ll_world_item_ItemStack  
 * Method:    getCustomName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_world_item_ItemStack_getCustomName
  (JNIEnv *env, jobject thisObj){
    ItemStack* item=(ItemStack*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(item->getCustomName().c_str());
  }

/*
 * Class:     bluebox_ll_world_item_ItemStack
 * Method:    getRawName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_world_item_ItemStack_getRawName
  (JNIEnv *env, jobject thisObj){
    ItemStack* item=(ItemStack*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(item->getRawNameId().c_str());
  }

/*
 * Class:     bluebox_ll_world_item_ItemStack
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_world_item_ItemStack_getName
  (JNIEnv *env, jobject thisObj){
    ItemStack* item=(ItemStack*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(item->getName().c_str());
  }

/*
 * Class:     bluebox_ll_world_item_ItemStack
 * Method:    setCustomName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_world_item_ItemStack_setCustomName
  (JNIEnv *env, jobject thisObj, jstring jstr_name){
    ItemStack* item=(ItemStack*)lje::getNativePointer(env, thisObj);
    const char* name=env->GetStringUTFChars(jstr_name, NULL);
    item->setCustomName(name);
    env->ReleaseStringUTFChars(jstr_name, name);
  }

/*
 * Class:     bluebox_ll_world_item_ItemStack
 * Method:    getCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bluebox_ll_world_item_ItemStack_getCount
  (JNIEnv *env, jobject thisObj){
    ItemStack* item=(ItemStack*)lje::getNativePointer(env, thisObj);
    return item->mCount;
  }

/*
 * Class:     bluebox_ll_world_item_ItemStack
 * Method:    setCount
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_world_item_ItemStack_setCount
  (JNIEnv *env, jobject thisObj, jint jint_count){
    ItemStack* item=(ItemStack*)lje::getNativePointer(env, thisObj);
    item->mCount=jint_count;
  }

/*
 * Class:     bluebox_ll_world_item_ItemStack
 * Method:    getTypeName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_world_item_ItemStack_getTypeName
  (JNIEnv *env, jobject thisObj){
    ItemStack* item=(ItemStack*)lje::getNativePointer(env, thisObj);
    return env->NewStringUTF(item->getTypeName().c_str());
  }


JNIEXPORT void JNICALL Java_bluebox_ll_world_item_ItemStack_setNBT
  (JNIEnv *, jobject, jobject);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_item_ItemStack_match
  (JNIEnv *, jobject, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_item_ItemStack_isEmpty
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_item_ItemStack_set
  (JNIEnv *, jobject, jobject);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_item_ItemStack_clone
  (JNIEnv *, jobject);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_item_ItemStack_getNBT
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_item_ItemStack_delete
  (JNIEnv *, jobject);







