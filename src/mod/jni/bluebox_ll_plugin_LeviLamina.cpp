#include "../header/bluebox_ll_plugin_LeviLamina.h"
#include "../util/util.h"
#include "../util/java_Log.h"

#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/mod/ModManager.h"

JNIEXPORT jboolean JNICALL Java_bluebox_ll_plugin_LeviLamina_hasPlugin
  (JNIEnv *env, jclass , jstring jstr_name){
    const char* c_name = env->GetStringUTFChars(jstr_name, 0);
    jboolean jboolean_result = ll::mod::ModManagerRegistry::getInstance().hasMod(c_name);
    env->ReleaseStringUTFChars(jstr_name, c_name);
    return jboolean_result;
  }

/*
 * Class:     bluebox_ll_plugin_LeviLamina
 * Method:    getNativePlugin
 * Signature: (Ljava/lang/String;)Lbluebox/ll/plugin/Plugin;
 */
JNIEXPORT jobject JNICALL Java_bluebox_ll_plugin_LeviLamina_getNativePlugin
  (JNIEnv *env, jclass, jstring jstr_name){
    const char* c_name = env->GetStringUTFChars(jstr_name, 0);
    auto mod = ll::mod::ModManagerRegistry::getInstance().getMod(c_name);
    env->ReleaseStringUTFChars(jstr_name, c_name);
    jclass jclass_OtherPlugin=env->FindClass(JCLASS_OtherPlugin);
    jmethodID jmethod_init=env->GetMethodID(jclass_OtherPlugin, "<init>", "(Ljava/lang/String;" JCLASS_Logger ")V");
    jobject jobject_plugin=env->NewObject(jclass_OtherPlugin, jmethod_init, jstr_name, lje::newLogger(env, &mod->getLogger()));
    return jobject_plugin;
  }













