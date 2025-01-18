#include "java_position.h"
#include "jni.h"

namespace lje {

jobject newVector(JNIEnv* env, const Vec3* vec){
    jclass jcls_Vec3=env->FindClass(JCLASS_VECTOR);
    jmethodID jmid_Vec3_init=env->GetMethodID(jcls_Vec3, "<init>", "(FFF)V");
    return env->NewObject(jcls_Vec3, jmid_Vec3_init, vec->x, vec->y, vec->z);
}
void toNativeVector(JNIEnv* env, jobject jvec3, Vec3* vec){
    jclass jcls_Vec3=env->FindClass(JCLASS_VECTOR);
    jfieldID jfid_x=env->GetFieldID(jcls_Vec3, "x", "F");
    jfieldID jfid_y=env->GetFieldID(jcls_Vec3, "y", "F");
    jfieldID jfid_z=env->GetFieldID(jcls_Vec3, "z", "F");
    vec->x=env->GetFloatField(jvec3, jfid_x);
    vec->y=env->GetFloatField(jvec3, jfid_y);
    vec->z=env->GetFloatField(jvec3, jfid_z);
}

jobject newLocation(JNIEnv* env, const Vec3* pos, int dim){
    jclass jcls_Location=env->FindClass(JCLASS_LOCATION);
    jmethodID jmid_Location_init=env->GetMethodID(jcls_Location, "<init>", "(FFFI)V");
    return env->NewObject(jcls_Location, jmid_Location_init, pos->x, pos->y, pos->z, dim);
}
void toNativeLocation(JNIEnv* env, jobject jloc, Vec3* pos, int* dim){
    jclass jcls_Location=env->FindClass(JCLASS_LOCATION);
    jfieldID jfid_x=env->GetFieldID(jcls_Location, "x", "F");
    jfieldID jfid_y=env->GetFieldID(jcls_Location, "y", "F");
    jfieldID jfid_z=env->GetFieldID(jcls_Location, "z", "F");
    jfieldID jfid_dim=env->GetFieldID(jcls_Location, "dim", "I");
    pos->x=env->GetFloatField(jloc, jfid_x);
    pos->y=env->GetFloatField(jloc, jfid_y);
    pos->z=env->GetFloatField(jloc, jfid_z);
    *dim=env->GetIntField(jloc, jfid_dim);
}

}
