#include "java_Memory.h"
#include "jni.h"


void* lje::memory::getPointer(JNIEnv *env, jobject jobj_pointerSupporter){
    jclass jclass_PointerSupporter=env->FindClass(JCLASS_POINTER_SUPPORTER);
    jmethodID jmethod_getNativePointer=env->GetMethodID(jclass_PointerSupporter,"getNativePointer","()J");
    return (void*) env->CallLongMethod(jobj_pointerSupporter,jmethod_getNativePointer);
}