#include "java_OtherPlugin.h"
#include "jni.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "mod/PluginManager.h"
#include "java_LeviLamina.h"
#include "ll/api/mod/ModManager.h"
#include "mod/jni/java_Log.h"

namespace lje::plugin::j_LeviLamina{

void removeModInNative(JNIEnv *env, jclass, jstring jstring_name){
    const char* name = env->GetStringUTFChars(jstring_name, 0);
    lje::LJE_Manager::getInstance().removeMod(name);
    env->ReleaseStringUTFChars(jstring_name, name);
}
jboolean hasPlugin(JNIEnv *env, jclass, jstring jstring_name){
    const char* c_name = env->GetStringUTFChars(jstring_name, 0);
    jboolean jboolean_result = ll::mod::ModManagerRegistry::getInstance().hasMod(c_name);
    env->ReleaseStringUTFChars(jstring_name, c_name);
    return jboolean_result;
}
jobject getNativePlugin(JNIEnv *env, jclass, jstring jstring_name){
    const char* c_name = env->GetStringUTFChars(jstring_name, 0);
    auto mod = ll::mod::ModManagerRegistry::getInstance().getMod(c_name);
    env->ReleaseStringUTFChars(jstring_name, c_name);
    jclass jclass_OtherPlugin=env->FindClass(JCLASS_OTHER_PLUGIN);
    jmethodID jmethod_init=env->GetMethodID(jclass_OtherPlugin, "<init>", "(Ljava/lang/String;" JCLASS_LOGGER ")V");
    jobject jobject_plugin=env->NewObject(jclass_OtherPlugin, jmethod_init, jstring_name, lje::j_Logger::newLogger(env, &mod->getLogger()));
    return jobject_plugin;
}

}