#include "PluginManager.h"
#include "Entry.h"
#include <jni.h>
#include "jni/plugin/java_LeviLamina.h"
#include "ll/api/Expected.h"
#include "ll/api/mod/Mod.h"
#include "mod/Entry.h"
#include <memory>

namespace lje{

LJE_Manager* lje_manager_instance;

bool LJE_Manager::loadPlugin(const std::string& modDirPath){
    JNIEnv* env=getEnv();
    jclass jclass_LeviLamina=env->FindClass(JCLASS_LEVILAMINA);
    jmethodID jmethod_LeviLamina_load=env->GetStaticMethodID(jclass_LeviLamina, "addPlugin", "(Ljava/lang/String;)V");
    jstring jstring_native_modDirPath=env->NewStringUTF(modDirPath.c_str());
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_LeviLamina_load, jstring_native_modDirPath);
    if(env->ExceptionCheck()){
        env->ExceptionDescribe();
        env->ExceptionClear();
        env->DeleteLocalRef(jstring_native_modDirPath);
        detachCurrentThread();
        return false;
    }
    env->DeleteLocalRef(jstring_native_modDirPath);
    detachCurrentThread();
    return true;
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

void LJE_Manager::removeMod(std::string_view name){
    eraseMod(name);
}

ll::Expected<> LJE_Manager::unload(std::string_view name){
    JNIEnv* env=getEnv();
    jclass jclass_LeviLamina=env->FindClass(JCLASS_LEVILAMINA);
    jmethodID jmethod_LeviLamina_removeMod=env->GetMethodID(jclass_LeviLamina, "removeMod", "(Ljava/lang/String;)V");
    jstring jstring_native_name=env->NewStringUTF(name.data());
    env->CallStaticVoidMethod(jclass_LeviLamina, jmethod_LeviLamina_removeMod, jstring_native_name);
    env->DeleteLocalRef(jstring_native_name);
    detachCurrentThread();
    eraseMod(name);
    return {};
}

}