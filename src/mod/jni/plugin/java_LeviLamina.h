#pragma once
#include <jni.h>
#include "mod/Entry.h"

#define JCLASS_LEVILAMINA PACK_JAVA_NAME("plugin/LeviLamina")

namespace lje::plugin::j_LeviLamina{

void removeModInNative(JNIEnv* , jclass , jstring );

jboolean hasPlugin(JNIEnv* env, jclass, jstring jstring_name);

jobject getNativePlugin(JNIEnv* env, jclass, jstring jstring_name);

}