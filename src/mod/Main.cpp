#include "mod/Main.h"

#include <memory>

#include "ll/api/mod/RegisterHelper.h"

#include "jni.h"

namespace lje {

static std::unique_ptr<LJE> instance;
static JavaVM* jvm=nullptr;
static JavaVMInitArgs vm_args;

LJE& LJE::getInstance() { return *instance; }

bool LJE::load() {
    using std::string;

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
    JNIEnv* env; // 创建一个新的 JNIEnv 指针

    // 尝试获取当前线程的 JNIEnv
    int getEnvStat = jvm->GetEnv((void**)&env, JNI_VERSION_1_8);
    if (getEnvStat == JNI_EDETACHED) {
        // 如果当前线程没有附加到 JVM，尝试附加
        JavaVMAttachArgs attachArgs;
        attachArgs.version = JNI_VERSION_1_8;

        if (jvm->AttachCurrentThread((void**)&env, &attachArgs) != JNI_OK) {
            getSelf().getLogger().error("Failed to attach current thread to JVM");
            return false;
        }
    } else if (getEnvStat != JNI_OK) {
        getSelf().getLogger().error("GetEnv failed");
        return false;
    }
    
    jclass jclass_LeviLamina = env->FindClass("Lbluebox/levilamina/engine/LeviLamina;");
    jmethodID jmethod_enable=env->GetStaticMethodID(jclass_LeviLamina, "enable", "()V");
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_enable);

    if (getEnvStat == JNI_EDETACHED) {
        jvm->DetachCurrentThread();
    }

    return true;
}

bool LJE::disable() {
    JNIEnv* env; // 创建一个新的 JNIEnv 指针

    // 尝试获取当前线程的 JNIEnv
    int getEnvStat = jvm->GetEnv((void**)&env, JNI_VERSION_1_8);
    if (getEnvStat == JNI_EDETACHED) {
        // 如果当前线程没有附加到 JVM，尝试附加
        JavaVMAttachArgs attachArgs;
        attachArgs.version = JNI_VERSION_1_8;

        if (jvm->AttachCurrentThread((void**)&env, &attachArgs) != JNI_OK) {
            getSelf().getLogger().error("Failed to attach current thread to JVM");
            return false;
        }
    } else if (getEnvStat != JNI_OK) {
        getSelf().getLogger().error("GetEnv failed");
        return false;
    }
    
    jclass jclass_LeviLamina = env->FindClass("Lbluebox/levilamina/engine/LeviLamina;");
    jmethodID jmethod_disable=env->GetStaticMethodID(jclass_LeviLamina, "disable", "()V");
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_disable);

    if (getEnvStat == JNI_EDETACHED) {
        jvm->DetachCurrentThread();
    }

    return true;
}

} // namespace my_mod

LL_REGISTER_MOD(lje::LJE, lje::instance);
