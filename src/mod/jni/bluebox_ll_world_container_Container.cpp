#include "../header/bluebox_ll_world_container_Container.h"



JNIEXPORT void JNICALL Java_bluebox_ll_world_container_Container_setItem
  (JNIEnv *, jobject, jint, jobject);

JNIEXPORT jstring JNICALL Java_bluebox_ll_world_container_Container_getType
  (JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_container_Container_isEmpty
  (JNIEnv *, jobject);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_container_Container_getItem
  (JNIEnv *, jobject, jint);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_container_Container_addItemToFirstEmptySlot
  (JNIEnv *, jobject, jobject);

JNIEXPORT jobjectArray JNICALL Java_bluebox_ll_world_container_Container_getAllItems
  (JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_container_Container_hasRoomFor
  (JNIEnv *, jobject, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_container_Container_clear
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_container_Container_addItem
  (JNIEnv *, jobject, jobject);

JNIEXPORT jint JNICALL Java_bluebox_ll_world_container_Container_getSize
  (JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_container_Container_removeItem
  (JNIEnv *, jobject, jint, jint);







