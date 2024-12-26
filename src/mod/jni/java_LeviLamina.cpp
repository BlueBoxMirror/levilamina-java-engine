#include "mod/PluginManager.h"
#include "java_LeviLamina.h"

void lje::j_LeviLamina::removeModInNative(JNIEnv *env, jclass, jstring jstring_name){
    const char* name = env->GetStringUTFChars(jstring_name, 0);
    lje::LJE_Manager::getInstance().removeMod(name);
    env->ReleaseStringUTFChars(jstring_name, name);
}