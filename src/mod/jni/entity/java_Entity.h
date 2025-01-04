#pragma once

#include <jni.h>
#include "mc/world/actor/Actor.h"

#define JCLASS_ENTITY PACK_JAVA_NAME("entity/Entity")

namespace lje::j_Entity{

jobject newJavaEntity(JNIEnv *,Actor *);

jobject getNbt(JNIEnv *, jobject);

void setNbt(JNIEnv *, jobject, jobject);

}