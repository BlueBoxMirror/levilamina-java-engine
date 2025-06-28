// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/Logger.h"
#include "jnihelper/proxy/headers/java/io/File.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/Plugin.h"
#include "jnihelper/proxy/headers/com/google/gson/Gson.h"
#include "jnihelper/proxy/headers/java/io/PrintStream.h"
#include "jnihelper/proxy/headers/java/util/HashMap.h"
#include "jnihelper/proxy/headers/java/lang/ClassLoader.h"
#include "jnihelper/proxy/headers/java/net/URLClassLoader.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
namespace jnihelper::proxy::bluebox::ll::plugin {

    class O_LeviLamina: public ::jnihelper::JavaObject{
    public:
        O_LeviLamina(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
    };
    
    class C_LeviLamina: public JavaClass<O_LeviLamina>{
    public:
        C_LeviLamina(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}preloadMods[getter]:java.util.HashMap
        ::jnihelper::proxy::java::util::O_HashMap f_preloadMods();
        //{_tag_}classLoader[setter]:java.net.URLClassLoader
        void f_classLoader(::jnihelper::proxy::java::net::O_URLClassLoader value);
        //{_tag_}getNativePlugin(java.lang.String)bluebox.ll.plugin.Plugin
        ::jnihelper::proxy::bluebox::ll::plugin::O_Plugin m_getNativePlugin(::jnihelper::proxy::java::lang::O_String _name);
        //{_tag_}addPlugin(java.lang.String)void
        void m_addPlugin(::jnihelper::proxy::java::lang::O_String _modDirPath);
        //{_tag_}mods[getter]:java.util.HashMap
        ::jnihelper::proxy::java::util::O_HashMap f_mods();
        //{_tag_}<init>()bluebox.ll.plugin.LeviLamina
        ::jnihelper::proxy::bluebox::ll::plugin::O_LeviLamina newObj();
        //{_tag_}modRootDir[getter]:java.io.File
        ::jnihelper::proxy::java::io::O_File f_modRootDir();
        //{_tag_}gson[setter]:com.google.gson.Gson
        void f_gson(::jnihelper::proxy::com::google::gson::O_Gson value);
        //{_tag_}gson[getter]:com.google.gson.Gson
        ::jnihelper::proxy::com::google::gson::O_Gson f_gson();
        //{_tag_}preloadMods[setter]:java.util.HashMap
        void f_preloadMods(::jnihelper::proxy::java::util::O_HashMap value);
        //{_tag_}hasPlugin(java.lang.String)boolean
        ::jboolean m_hasPlugin(::jnihelper::proxy::java::lang::O_String _name);
        //{_tag_}load()void
        void m_load();
        //{_tag_}getErrorStream()java.io.PrintStream
        ::jnihelper::proxy::java::io::O_PrintStream m_getErrorStream();
        //{_tag_}getLogger()bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger m_getLogger();
        //{_tag_}logger[setter]:bluebox.ll.Logger
        void f_logger(::jnihelper::proxy::bluebox::ll::O_Logger value);
        //{_tag_}getClassLoader()java.lang.ClassLoader
        ::jnihelper::proxy::java::lang::O_ClassLoader m_getClassLoader();
        //{_tag_}disable()void
        void m_disable();
        //{_tag_}getOutputStream()java.io.PrintStream
        ::jnihelper::proxy::java::io::O_PrintStream m_getOutputStream();
        //{_tag_}init(java.io.File,bluebox.ll.Logger)void
        void m_init(::jnihelper::proxy::java::io::O_File _modRootDir, ::jnihelper::proxy::bluebox::ll::O_Logger _logger);
        //{_tag_}getModRootDir()java.io.File
        ::jnihelper::proxy::java::io::O_File m_getModRootDir();
        //{_tag_}classLoader[getter]:java.net.URLClassLoader
        ::jnihelper::proxy::java::net::O_URLClassLoader f_classLoader();
        //{_tag_}enable()void
        void m_enable();
        //{_tag_}unload(java.lang.String)boolean
        ::jboolean m_unload(::jnihelper::proxy::java::lang::O_String _name);
        //{_tag_}isPreloaded[getter]:boolean
        ::jboolean f_isPreloaded();
        //{_tag_}logger[getter]:bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger f_logger();
        //{_tag_}mods[setter]:java.util.HashMap
        void f_mods(::jnihelper::proxy::java::util::O_HashMap value);
        //{_tag_}modRootDir[setter]:java.io.File
        void f_modRootDir(::jnihelper::proxy::java::io::O_File value);
        //{_tag_}isPreloaded[setter]:boolean
        void f_isPreloaded(::jboolean value);
        //{_tag_}getPlugin(java.lang.String)bluebox.ll.plugin.Plugin
        ::jnihelper::proxy::bluebox::ll::plugin::O_Plugin m_getPlugin(::jnihelper::proxy::java::lang::O_String _name);
    };
    
}