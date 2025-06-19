// This file is generated automatically.
#include "jnihelper/jni/headers/bluebox/ll/plugin/LeviLamina.h"
#include "jnihelper/jnihelper.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/OtherPlugin.h"
#include "PluginManager.h"
namespace jnihelper::jni {

//{_tag_}hasPlugin(Ljava/lang/String;)Z
::jboolean Java_bluebox_ll_plugin_LeviLamina_hasPlugin(::JNIEnv* envPtr, ::jclass , ::jobject n_name){
    Env env(envPtr);
    IMPORT(bluebox::ll::plugin,LeviLamina)
    IMPORT(java::lang,String)
    auto name=String.package(n_name);
    return lje::LJE_Manager::getInstance().hasMod(name.getValue());
}
//{_tag_}getNativePlugin(Ljava/lang/String;)Lbluebox/ll/plugin/Plugin;
::jobject Java_bluebox_ll_plugin_LeviLamina_getNativePlugin(::JNIEnv* envPtr, ::jclass , ::jobject n_name){
    Env env(envPtr);
    IMPORT(bluebox::ll::plugin,LeviLamina)
    IMPORT(java::lang,String)
    IMPORT(bluebox::ll::plugin,OtherPlugin)
    IMPORT(bluebox::ll, Logger)
    auto name=String.package(n_name);
    auto mod=lje::LJE_Manager::getInstance().getMod(name.getValue());
    return OtherPlugin.newObj(String.newObj(mod->getName()), Logger.newObj((jlong)&mod->getLogger())).get();
}

}