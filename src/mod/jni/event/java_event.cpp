#include "java_event.h"

bool lje::event::publish(JNIEnv *env, jobject event){
    jclass jcls_EventBus = env->FindClass(JCLASS_EVENT_BUS);
    jmethodID jmethod_publish = env->GetStaticMethodID(jcls_EventBus, "publish", "(" JCLASS_EVENT ")V");
    env->CallStaticVoidMethod(jcls_EventBus, jmethod_publish, event);
    if(env->IsInstanceOf(event, env->FindClass(JCLASS_CANCELLABLE))){
        jmethodID jmethod_isCancelled = env->GetMethodID(env->GetObjectClass(event), "isCancelled", "()Z");
        jboolean isCancelled = env->CallBooleanMethod(event, jmethod_isCancelled);
        return isCancelled;
    }
    return false;
}