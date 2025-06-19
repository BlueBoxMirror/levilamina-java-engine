#include <memory>
#include <string>
#include "Config.h"

#include "Entry.h"
#include "PluginManager.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/RegisterHelper.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/Config.h"

#include "jnihelper/jnihelper.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/LeviLamina.h"
#include "jnihelper/proxy/headers/java/io/File.h"
#include "jnihelper/proxy/headers/bluebox/ll/Logger.h"
#include "jnihelper/proxy/headers/java/lang/String.h"

namespace lje {

//LJE_Manager ljeManage;
std::shared_ptr<LJE_Manager> pluginManager;


LJE& LJE::getInstance() { 
    static LJE instance;
    return instance;
}

LJE_Manager& LJE::getPluginManager() { return *pluginManager; }

bool LJE::load() {
    using namespace std;
    using namespace jnihelper;

    Config config;
    auto const& configPath=getSelf().getConfigDir()/"config.json";
    try{
        ll::config::loadConfig(config,configPath);
    }catch(...){}
    ll::config::saveConfig(config, configPath);

    string fileOption = ("-Djava.class.path=" + getSelf().getModDir().string() + "/LeviLaminaJavaEngine.jar");
    vector<string> optionList={fileOption};
    getSelf().getLogger().info("JVM options: ");
    getSelf().getLogger().info(fileOption);
    for(string option:config.jvmOption){
        optionList.push_back(option);
        getSelf().getLogger().info(option);
    }
    if(config.isDebug) for(string option:config.debugJvmOption){
        optionList.push_back(option);
        getSelf().getLogger().info(option);
    }

    JavaVMOption* options=new JavaVMOption[optionList.size()];
    for(int i=0;i<optionList.size();i++){
        options[i].optionString=(char*) optionList[i].c_str();
    }

    JavaVMInitArgs vm_args;
    vm_args.nOptions=optionList.size();
    vm_args.version = JNI_VERSION_1_8;
    vm_args.options = options;
    vm_args.ignoreUnrecognized = JNI_FALSE;

    auto result=Env::createJvm(&vm_args);
    delete[] options;

    if(result.result!=JNI_OK){
        getSelf().getLogger().error("Failed to create JVM:"+std::to_string(result.result));
        return false;
    }
    getSelf().getLogger().info("JVM created");
    Env env=result.env;

    //尝试加载类
    IMPORT(bluebox::ll::plugin, LeviLamina)
    
    // 注册native事件
    //lje::event::registerNatives();
    

    // 启动 LeviLamina 类
    IMPORT(java::io,File)
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    LeviLamina.m_init(File.newObj(String.newObj(ll::mod::getModsRoot().string())), Logger.newObj((jlong)&getSelf().getLogger()));

    // jclass jclass_File=env->FindClass("Ljava/io/File;");
    // jclass jclass_Logger=env->FindClass(JCLASS_Logger);
    // jfieldID jfield_LeviLamina_modRootDir=env->GetStaticFieldID(jclass_LeviLamina, "modRootDir", "Ljava/io/File;");
    // jfieldID jfield_LeviLamina_logger=env->GetStaticFieldID(jclass_LeviLamina, "logger", JCLASS_Logger);
    // jmethodID jmethod_LeviLamina_init=env->GetStaticMethodID(jclass_LeviLamina, "init", "()V");
    // jmethodID jmethod_LeviLamina_load=env->GetStaticMethodID(jclass_LeviLamina, "load", "()V");
    // jmethodID jmethod_Logger_init=env->GetMethodID(jclass_Logger, "<init>", "(J)V");

    // jstring jstring_native_path=env->NewStringUTF(ll::mod::getModsRoot().string().c_str());
    // jobject jobject_native_modRootDir=env->NewObject(jclass_File, env->GetMethodID(jclass_File, "<init>", "(Ljava/lang/String;)V"), jstring_native_path);
    // jobject jobject_native_logger=env->NewObject(jclass_Logger, jmethod_Logger_init, (jlong)&getSelf().getLogger());
    // env->SetStaticObjectField(jclass_LeviLamina, jfield_LeviLamina_logger, jobject_native_logger);
    // env->SetStaticObjectField(jclass_LeviLamina, jfield_LeviLamina_modRootDir, jobject_native_modRootDir);
    // env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_LeviLamina_init);
    // env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_LeviLamina_load);
    // env->DeleteLocalRef(jstring_native_path);
    // env->DeleteLocalRef(jobject_native_modRootDir);
    // env->DeleteLocalRef(jobject_native_logger);

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
    using namespace jnihelper;
    Env env;

    IMPORT(bluebox::ll::plugin, LeviLamina)
    LeviLamina.m_enable();

    return true;
}

bool LJE::disable() {
    using namespace jnihelper;
    Env env;

    IMPORT(bluebox::ll::plugin, LeviLamina)
    LeviLamina.m_disable();

    getSelf().getLogger().info("destroying JVM:"+std::to_string(Env::destroyJvm()));
    return true;
}

bool LJE::unload(){
    auto& pluginManagerRegistry=ll::mod::ModManagerRegistry::getInstance();
    bool isSuccess=pluginManagerRegistry.eraseManager("jvm");
    if(!isSuccess){
        getSelf().getLogger().error("Failed to unload plugin manager");
        return false;
    }

    return true;
}

} // namespace my_mod

LL_REGISTER_MOD(lje::LJE, lje::LJE::getInstance());

