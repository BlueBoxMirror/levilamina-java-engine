#include "PluginManager.h"
#include "jnihelper/jnihelper.h"
#include <jni.h>
#include "ll/api/Expected.h"
#include "ll/api/mod/Mod.h"
#include <memory>

#include "jnihelper/proxy/headers/bluebox/ll/plugin/LeviLamina.h"

namespace lje{

LJE_Manager* lje_manager_instance;

bool LJE_Manager::loadPlugin(const std::string& modDirPath){
    using namespace jnihelper;
    Env env;
    IMPORT(bluebox::ll::plugin, LeviLamina)
    IMPORT(java::lang, String)
    LeviLamina.m_addPlugin(String.newObj(modDirPath));
    if(env->ExceptionCheck()){
        env->ExceptionDescribe();
        env->ExceptionClear();
        return false;
    }
    return true;
    // jclass jclass_LeviLamina=env->FindClass(JCLASS_LeviLamina);
    // jmethodID jmethod_LeviLamina_load=env->GetStaticMethodID(jclass_LeviLamina, "addPlugin", "(Ljava/lang/String;)V");
    // jstring jstring_native_modDirPath=env->NewStringUTF(modDirPath.c_str());
    // env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_LeviLamina_load, jstring_native_modDirPath);
    // if(env->ExceptionCheck()){
    //     env->ExceptionDescribe();
    //     env->ExceptionClear();
    //     env->DeleteLocalRef(jstring_native_modDirPath);
    //     detachCurrentThread();
    //     return false;
    // }
    // env->DeleteLocalRef(jstring_native_modDirPath);
    // detachCurrentThread();
    // return true;
}

LJE_Manager::LJE_Manager():ll::mod::ModManager("jvm"){
    lje_manager_instance=this;
};
LJE_Manager& LJE_Manager::getInstance(){
    return *lje_manager_instance;
}

ll::Expected<> LJE_Manager::load(ll::mod::Manifest manifest){
    auto plugin =std::make_shared<ll::mod::Mod>(manifest);
    auto pluginDir=ll::mod::getModsRoot()/manifest.name;
    if(loadPlugin(pluginDir.string())){
        addMod(manifest.name, plugin);
        return {};
    }
    else return ll::makeStringError("Failed to load plugin "+manifest.name);
}

// void LJE_Manager::removeMod(std::string_view name){
//     eraseMod(name);
// }

ll::Expected<> LJE_Manager::unload(std::string_view name){
    using namespace jnihelper;
    Env env;
    IMPORT(bluebox::ll::plugin, LeviLamina)
    IMPORT(java::lang, String)
    jboolean isSuccess=LeviLamina.m_unload(String.newObj(name.data()));
    // jclass jclass_LeviLamina=env->FindClass(JCLASS_LeviLamina);
    // jmethodID jmethod_LeviLamina_unload=env->GetStaticMethodID(jclass_LeviLamina, "unload", "(Ljava/lang/String;)Z");
    // jstring jstring_native_name=env->NewStringUTF(name.data());
    // bool isSuccess=env->CallStaticBooleanMethod(jclass_LeviLamina, jmethod_LeviLamina_unload, jstring_native_name);
    // env->DeleteLocalRef(jstring_native_name);
    // detachCurrentThread();
    if(!isSuccess) return ll::makeStringError("Failed to unload plugin "+std::string(name));
    eraseMod(name);
    return {};
}

}