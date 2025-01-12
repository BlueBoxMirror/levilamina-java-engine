#include "java_event.h"
#include "java_event_player.h"


namespace lje::event{

bool publish(JNIEnv *env, jobject event){
    jclass jcls_EventBus = env->FindClass(JCLASS_EventBus);
    jmethodID jmethod_publish = env->GetStaticMethodID(jcls_EventBus, "publish", "(" JCLASS_Event ")V");
    env->CallStaticVoidMethod(jcls_EventBus, jmethod_publish, event);
    if(env->IsInstanceOf(event, env->FindClass(JCLASS_Cancellable))){
        jmethodID jmethod_isCancelled = env->GetMethodID(env->GetObjectClass(event), "isCancelled", "()Z");
        jboolean isCancelled = env->CallBooleanMethod(event, jmethod_isCancelled);
        return isCancelled;
    }
    return false;
}

void registerNatives(){
    player::registerNatives();
}

}