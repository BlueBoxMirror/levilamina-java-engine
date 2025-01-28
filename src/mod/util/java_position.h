#pragma once

#include <jni.h>
#include "mc/deps/core/math/Vec3.h"
#include "util.h"

#define JCLASS_VECTOR PACK_JAVA_NAME("util/Vector")
#define JCLASS_LOCATION PACK_JAVA_NAME("util/Location")

namespace lje{
    jobject newVector(JNIEnv* env, const Vec3* vec);
    void toNativeVector(JNIEnv* env, jobject jvec3, Vec3* vec);

    jobject newLocation(JNIEnv* env, const Vec3* pos, int dim);
    void toNativeLocation(JNIEnv* env, jobject jloc, Vec3* pos, int* dim);

}