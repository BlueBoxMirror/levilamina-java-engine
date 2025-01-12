#pragma once

#include <jni.h>
#include "mod/util.h"

#define JCLASS_Event PACK_JAVA_NAME("event/Event")
#define JCLASS_EventBus PACK_JAVA_NAME("event/EventBus")
#define JCLASS_Cancellable PACK_JAVA_NAME("event/Cancellable")

namespace lje::event{
    bool publish(JNIEnv* env, jobject event);
    void registerNatives();
}