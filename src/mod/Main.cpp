#include "mod/Main.h"

#include <memory>

#include "Main.h"
#include "jni/register.h"
#include "ll/api/Logger.h"
#include "ll/api/mod/RegisterHelper.h"

#include "jni/bluebox_levilamina_engine_Log.h"
#include "jni/worlds/bluebox_levilamina_engine_worlds_Player.h"

#include "jni.h"

namespace lje {

std::unique_ptr<LJE> instance;
JavaVM* jvm=nullptr;
JavaVMInitArgs vm_args;

void detachCurrentThread(){
    jvm->DetachCurrentThread();
}

JavaVM* getJVM() { return jvm; }

JNIEnv* getEnv(){
    JNIEnv* env; // 创建一个新的 JNIEnv 指针

    // 尝试获取当前线程的 JNIEnv
    int getEnvStat = jvm->GetEnv((void**)&env, JNI_VERSION_1_8);
    if (getEnvStat == JNI_EDETACHED) {
        // 如果当前线程没有附加到 JVM，尝试附加   
        JavaVMAttachArgs attachArgs;      
        attachArgs.version = JNI_VERSION_1_8;
        attachArgs.name = nullptr;
        attachArgs.group = nullptr;
        if (jvm->AttachCurrentThread((void**)&env, &attachArgs) != JNI_OK) {
            LJE::getInstance().getSelf().getLogger().error("Failed to attach current thread to JVM");
            return nullptr;
        }       
    } else if (getEnvStat != JNI_OK) {
        LJE::getInstance().getSelf().getLogger().error("GetEnv failed");
        return nullptr;
    }
    return env;
}

LJE& LJE::getInstance() { return *instance; }

bool LJE::load() {
    using namespace std;

    JNIEnv* env=nullptr;
    char option[] = "-Djava.class.path=.\\plugins\\levilamina-java-engine\\LeviLaminaJavaEngine.jar";
    
    JavaVMOption* options =new JavaVMOption[1];
    options[0].optionString = option;
    vm_args.version = JNI_VERSION_1_8;
    vm_args.nOptions = 1;
    vm_args.options = options;
    vm_args.ignoreUnrecognized = JNI_FALSE;

    // 创建 JVM
    long status = JNI_CreateJavaVM(&jvm, (void**)&env, &vm_args);
    delete [] options;

    if(status!=JNI_OK){
        getSelf().getLogger().error("Failed to create JVM");
        return false;
    }
    getSelf().getLogger().info("JVM created");
    
    // 注册native方法
    register_native_methods(env);

    // java类
    jclass jclass_LeviLamina = env->FindClass("Lbluebox/levilamina/engine/LeviLamina;");
    if(jclass_LeviLamina==nullptr){
        getSelf().getLogger().error("Failed to find LeviLamina class");
        jvm->DestroyJavaVM();
        return false;
    }
    jmethodID jmethod_load=env->GetStaticMethodID(jclass_LeviLamina, "load", "()V");
    if(jmethod_load==nullptr){
        getSelf().getLogger().error("Failed to find load method \"load()\" in LeviLamina class");
        jvm->DestroyJavaVM();
        return false;
    }
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_load);

    return true;
}

bool LJE::enable() {
    JNIEnv* env=getEnv();
    if(env==nullptr){
        return false;
    }
    jclass jclass_LeviLamina = env->FindClass("Lbluebox/levilamina/engine/LeviLamina;");
    jmethodID jmethod_enable=env->GetStaticMethodID(jclass_LeviLamina, "enable", "()V");
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_enable);

    detachCurrentThread();

    return true;
}

bool LJE::disable() {
    JNIEnv* env=getEnv();
    if(env==nullptr){
        return false;
    }
    
    jclass jclass_LeviLamina = env->FindClass("Lbluebox/levilamina/engine/LeviLamina;");
    jmethodID jmethod_disable=env->GetStaticMethodID(jclass_LeviLamina, "disable", "()V");
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_disable);

    detachCurrentThread();

    return true;
}

} // namespace my_mod

LL_REGISTER_MOD(lje::LJE, lje::instance);
