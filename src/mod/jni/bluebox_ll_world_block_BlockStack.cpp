#include "../header/bluebox_ll_world_block_BlockStack.h"


JNIEXPORT jobject JNICALL Java_bluebox_ll_world_block_BlockStack_get
  (JNIEnv *, jclass, jobject);

JNIEXPORT jstring JNICALL Java_bluebox_ll_world_block_BlockStack_getName
  (JNIEnv *, jobject);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_block_BlockStack_cloneTo
  (JNIEnv *, jobject, jobject);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_block_BlockStack_getNBT
  (JNIEnv *, jobject);

JNIEXPORT jint JNICALL Java_bluebox_ll_world_block_BlockStack_getId
  (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_bluebox_ll_world_block_BlockStack_setNBT
  (JNIEnv *, jobject, jobject);

JNIEXPORT jstring JNICALL Java_bluebox_ll_world_block_BlockStack_getType
  (JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_bluebox_ll_world_block_BlockStack_destroy
  (JNIEnv *, jobject, jboolean);

JNIEXPORT jobject JNICALL Java_bluebox_ll_world_block_BlockStack_getLocation
  (JNIEnv *, jobject);







