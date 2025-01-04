#pragma once

#include <jni.h>
#include "mod/Entry.h"

#define JCLASS_EVENT PACK_JAVA_NAME("event/Event")
#define JCLASS_EVENT_BUS PACK_JAVA_NAME("event/EventBus")
#define JCLASS_CANCELLABLE PACK_JAVA_NAME("event/Cancellable")

namespace lje::event{
    bool publish(JNIEnv* env, jobject event);
}