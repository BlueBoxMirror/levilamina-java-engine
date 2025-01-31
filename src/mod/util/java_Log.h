#pragma once

/* DO NOT EDIT THIS FILE - it is machine generated */
#include "ll/api/io/Logger.h"
#include <jni.h>
#include "util.h"

#define JCLASS_Logger PACK_JAVA_NAME("Logger")

namespace lje{

jobject newLogger(JNIEnv* env, const char* name);
jobject newLogger(JNIEnv* env, const ll::io::Logger* logger);
} // namespace lje

