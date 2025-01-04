#include <memory>
#include <string>

#include "Entry.h"
#include "PluginManager.h"
#include "jni/plugin/java_LeviLamina.h"
#include "jni/java_Log.h"
#include "jni/register.h"
#include "ll/api/Expected.h"
#include "ll/api/Logger.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/RegisterHelper.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "jni/java_Log.h"

#include "jni.h"
#include "ll/api/utils/StringUtils.h"

namespace lje {

LJE_Manager ljeManage;
std::shared_ptr<LJE_Manager> pluginManager;
std::unique_ptr<LJE> instance;
JavaVM* jvm=nullptr;
JavaVMInitArgs vm_args;

void detachCurrentThread(){
    jvm->DetachCurrentThread();
}

JavaVM* getJVM() { return jvm; }

JNIEnv* getEnv(){
    JNIEnv* env;
    jvm->GetEnv((void**)&env, JNI_VERSION_1_8);
    jvm->AttachCurrentThread((void**)&env, nullptr);
    return env;
}



LJE& LJE::getInstance() { return *instance; }

LJE_Manager& LJE::getPluginManager() { return *pluginManager; }

bool LJE::load() {
    using namespace std;

    //create java vm
    JNIEnv* env=nullptr;
    std::string option = ("-Djava.class.path=" + getSelf().getModDir().string() + "/LeviLaminaJavaEngine.jar");
    option=ll::string_utils::replaceAll(option,"/","\\");
    getSelf().getLogger().info("JVM option: " + option);
    
    JavaVMOption options[1];
    options[0].optionString = (char*) option.c_str();
    vm_args.version = JNI_VERSION_1_8;
    vm_args.nOptions = 1;
    vm_args.options = options;
    vm_args.ignoreUnrecognized = JNI_FALSE;

    auto status = JNI_CreateJavaVM(&jvm, (void**)&env, &vm_args);
    if(status!=JNI_OK){
        getSelf().getLogger().error("Failed to create JVM");
        return false;
    }
    getSelf().getLogger().info("JVM created");

    //尝试加载类
    jclass jclass_LeviLamina = env->FindClass(JCLASS_LEVILAMINA);
    if(jclass_LeviLamina==nullptr){
        getSelf().getLogger().error("Failed to load LeviLamina class");
        env->ExceptionDescribe();
        jvm->DestroyJavaVM();
        return false;
    }

    
    // 注册native方法
    register_native_methods(env);

    // 启动 LeviLamina 类
    jclass jclass_File=env->FindClass("Ljava/io/File;");
    jfieldID jfield_LeviLamina_modRootDir=env->GetStaticFieldID(jclass_LeviLamina, "modRootDir", "Ljava/io/File;");
    jfieldID jfield_LeviLamina_logger=env->GetStaticFieldID(jclass_LeviLamina, "logger", JCLASS_LOGGER);
    jmethodID jfield_LeviLamina_init=env->GetStaticMethodID(jclass_LeviLamina, "init", "()V");

    jstring jstring_native_path=env->NewStringUTF(ll::mod::getModsRoot().string().c_str());
    jobject jobject_native_modRootDir=env->NewObject(jclass_File, env->GetMethodID(jclass_File, "<init>", "(Ljava/lang/String;)V"), jstring_native_path);
    jobject jobject_native_logger=lje::j_Logger::newLogger(env,&getSelf().getLogger());
    env->SetStaticObjectField(jclass_LeviLamina, jfield_LeviLamina_logger, jobject_native_logger);
    env->CallStaticVoidMethod(jclass_LeviLamina, jfield_LeviLamina_init);

    env->DeleteLocalRef(jstring_native_path);
    env->SetStaticObjectField(jclass_LeviLamina, jfield_LeviLamina_modRootDir, jobject_native_modRootDir);
    env->DeleteLocalRef(jobject_native_modRootDir);
    env->DeleteLocalRef(jobject_native_logger);

    // 注册插件管理器
    pluginManager=std::make_shared<LJE_Manager>();
    auto& pluginManagerRegistry=ll::mod::ModManagerRegistry::getInstance();
    bool isSuccess=pluginManagerRegistry.addManager(pluginManager);
    if(!isSuccess){
        getSelf().getLogger().error("Failed to register plugin manager");
        return false;
    }

    return true;
}

bool LJE::enable() {
    JNIEnv* env=getEnv();
    if(env==nullptr){
        return false;
    }
    jclass jclass_LeviLamina = env->FindClass(JCLASS_LEVILAMINA);
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
    
    jclass jclass_LeviLamina = env->FindClass(JCLASS_LEVILAMINA);
    jmethodID jmethod_disable=env->GetStaticMethodID(jclass_LeviLamina, "disable", "()V");
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_disable);

    detachCurrentThread();

    return true;
}

} // namespace my_mod

LL_REGISTER_MOD(lje::LJE, lje::instance);

