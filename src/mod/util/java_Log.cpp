#include "jni.h"
#include "ll/api/io/Logger.h"
#include "java_Log.h"
#include "util.h"

using namespace std;
using namespace ll;

namespace lje{

jobject newLogger(JNIEnv *env, const char* name){
    jclass jclass_Logger=env->FindClass(JCLASS_Logger);
    jmethodID jmethod_Logger_init=env->GetMethodID(jclass_Logger, "<init>", "(Ljava/lang/String;)V");
    jstring jstring_name=env->NewStringUTF(name);
    jobject jobj_Logger=env->NewObject(jclass_Logger, jmethod_Logger_init, jstring_name);
    env->DeleteLocalRef(jstring_name);
    return jobj_Logger;
}

jobject newLogger(JNIEnv *env,const ll::io::Logger* logger){
    jclass jclass_Logger=env->FindClass(JCLASS_Logger);
    jmethodID jmethod_Logger_init=env->GetMethodID(jclass_Logger, "<init>", "(J)V");
    jobject jobj_Logger=env->NewObject(jclass_Logger, jmethod_Logger_init, (jlong)logger);
    return jobj_Logger;
}

}//namespace lje