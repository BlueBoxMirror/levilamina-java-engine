#pragma once
#include <jni.h>
#include "mod/Entry.h"

#define JCLASS_POINTER_SUPPORTER PACK_JAVA_NAME("memory/PointerSupporter")

namespace lje::memory{
    void* getPointer(JNIEnv*env,jobject jobj_pointerSupporter);
}