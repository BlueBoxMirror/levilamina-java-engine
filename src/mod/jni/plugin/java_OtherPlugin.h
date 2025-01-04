#pragma once

#include <jni.h>
#include "mod/Entry.h"

#define JCLASS_OTHER_PLUGIN PACK_JAVA_NAME("plugin/OtherPlugin")
#define JCLASS_PLUGIN PACK_JAVA_NAME("plugin/Plugin")

namespace lje::plugin::j_OtherPlugin{


void disable(JNIEnv* env, jobject thisObj);

}