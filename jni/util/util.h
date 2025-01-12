#pragma once
#include "jni.h"

#define PACK_JAVA_NAME(name) "Lbluebox/ll/" name ";"
#define JCLASS_PointerSupporter PACK_JAVA_NAME("memory/PointerSupporter")
#define JCLASS_String "Ljava/lang/String;"
#define JCLASS_OtherPlugin PACK_JAVA_NAME("plugin/OtherPlugin")


namespace lje{
    void* getNativePointer(JNIEnv* env, jobject obj);
    jint getEnumValue(JNIEnv* env, jobject obj);
}