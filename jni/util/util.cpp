#include "util.h"
#include "jni.h"


namespace lje{
    void* getNativePointer(JNIEnv* env, jobject obj){
        jclass jcls_PointerSupporter=env->FindClass(JCLASS_PointerSupporter);
        jmethodID jmid_getNativePointer=env->GetMethodID(jcls_PointerSupporter, "getNativePointer", "()J");
        return (void*)env->CallLongMethod(obj, jmid_getNativePointer);        
    }
    jint getEnumValue(JNIEnv* env, jobject obj){
        jclass jcls_enum=env->GetObjectClass(obj);
        jmethodID jmid_ordinal=env->GetMethodID(jcls_enum, "ordinal", "()I");
        return env->CallIntMethod(obj, jmid_ordinal);
    }
}