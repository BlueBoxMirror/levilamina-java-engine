#include "java_OtherPlugin.h"
#include "jni.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/ModManagerRegistry.h"

void lje::plugin::j_OtherPlugin::disable(JNIEnv* env, jobject thisObj){
    jclass class_OtherPlugin = env->GetObjectClass(thisObj);
    jfieldID jfield_name=env->GetFieldID(class_OtherPlugin,"name","Ljava/lang/String;");
    const char* c_name=env->GetStringUTFChars((jstring)env->GetObjectField(thisObj,jfield_name),0);
    ll::mod::ModManagerRegistry::getInstance().getMod(c_name)->onDisable({});
    env->ReleaseStringUTFChars((jstring)env->GetObjectField(thisObj,jfield_name),c_name);
}