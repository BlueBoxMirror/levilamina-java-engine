/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bluebox_ll_world_entity_Player */

#ifndef _Included_bluebox_ll_world_entity_Player
#define _Included_bluebox_ll_world_entity_Player
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bluebox_ll_world_entity_Player
 * Method:    getRealName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bluebox_ll_world_entity_Player_getRealName
  (JNIEnv *, jobject);

/*
 * Class:     bluebox_ll_world_entity_Player
 * Method:    getUUID
 * Signature: ()Ljava/util/UUID;
 */
JNIEXPORT jobject JNICALL Java_bluebox_ll_world_entity_Player_getUUID
  (JNIEnv *, jobject);

/*
 * Class:     bluebox_ll_world_entity_Player
 * Method:    sendMessage
 * Signature: (Ljava/lang/String;Lbluebox/ll/world/entity/Player/ChatType;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_sendMessage
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     bluebox_ll_world_entity_Player
 * Method:    updateItems
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_world_entity_Player_updateItems
  (JNIEnv *, jobject);

/*
 * Class:     bluebox_ll_world_entity_Player
 * Method:    getOnline
 * Signature: ()Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_bluebox_ll_world_entity_Player_getOnline
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
