#include <memory>
#include <stdlib.h>
#include <string>
//#include <Windows.h>
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
//#include "ll/api/utils/SystemUtils.h"

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
    //读取配置
    Config config;
    auto const& configPath=getSelf().getConfigDir()/"config.json";
    try{
        ll::config::loadConfig(config,configPath);
    }catch(...){}
    ll::config::saveConfig(config, configPath);
    // //查找jvm.dll
    // std::string finalPath;
    // if(config.javaHome.empty()){
    //     char* javaHome=nullptr;
    //     size_t len=0;
    //     _dupenv_s(&javaHome, &len, "JAVA_HOME");
    //     if(javaHome && len>0){
    //         //JAVA_HOME环境变量
    //         finalPath=javaHome;
    //     }
    //     else{
    //         //注册表查找
    //         HKEY hKey;
    //         LPCSTR subKey="SOFTWARE\\JavaSoft\\JDK";
    //         if(RegOpenKeyExA(HKEY_LOCAL_MACHINE, subKey, 0, KEY_READ, &hKey) == ERROR_SUCCESS){
    //             goto end;
    //         }
    //         char path[1024];
    //         DWORD pathSize = sizeof(path);
    //         char version[256];
    //         DWORD versionSize = sizeof(version);
    //         if (RegQueryValueExA(hKey, "CurrentVersion", NULL, NULL, (LPBYTE)version, &versionSize) != ERROR_SUCCESS) {
    //             RegCloseKey(hKey);
    //             goto end;
    //         }
    //         HKEY hSubKey;
    //         std::string versionKey = std::string(subKey) + "\\" + version;
    //         if (RegOpenKeyExA(HKEY_LOCAL_MACHINE, versionKey.c_str(), 0, KEY_READ, &hSubKey) != ERROR_SUCCESS) {
    //             RegCloseKey(hKey);
    //             goto end;
    //         }
    //         if (RegQueryValueExA(hSubKey, "JavaHome", NULL, NULL, (LPBYTE)path, &pathSize) != ERROR_SUCCESS) {
    //             RegCloseKey(hSubKey);
    //             RegCloseKey(hKey);
    //             goto end;
    //         }
    //         RegCloseKey(hSubKey);
    //         RegCloseKey(hKey);
    //         finalPath=path;
    //     }
    //     free(javaHome);
    // }
    // else{
    //     //配置文件指定
    //     finalPath=config.javaHome;
    // }
    // //添加jvm.dll到Path环境变量
    // if(finalPath.ends_with("/") || finalPath.ends_with("\\")){
    //     finalPath.pop_back();
    // }
    // finalPath+="/bin/server";
    // ll::sys_utils::addOrSetEnvironmentVariable("Path", finalPath);

    // end:
    //创建JVM
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
    for(size_t i=0;i<optionList.size();i++){
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
    IMPORT(java::io,File)
    IMPORT(bluebox::ll,Logger)
    IMPORT(java::lang,String)
    LeviLamina.m_init(File.newObj(String.newObj(ll::mod::getModsRoot().string())), Logger.newObj((jlong)&getSelf().getLogger()));

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

