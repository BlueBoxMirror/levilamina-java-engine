// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/Logger.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "jnihelper/proxy/headers/bluebox/ll/plugin/Manifest.h"
namespace jnihelper::proxy::bluebox::ll::plugin {

    class O_OtherPlugin: public ::jnihelper::JavaObject{
    public:
        O_OtherPlugin(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}manifest[setter]:bluebox.ll.plugin.Manifest
        void f_manifest(::jnihelper::proxy::bluebox::ll::plugin::O_Manifest value);
        //{_tag_}logger[getter]:bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger f_logger();
        //{_tag_}name[setter]:java.lang.String
        void f_name(::jnihelper::proxy::java::lang::O_String value);
        //{_tag_}getLogger()bluebox.ll.Logger
        ::jnihelper::proxy::bluebox::ll::O_Logger m_getLogger();
        //{_tag_}logger[setter]:bluebox.ll.Logger
        void f_logger(::jnihelper::proxy::bluebox::ll::O_Logger value);
        //{_tag_}manifest[getter]:bluebox.ll.plugin.Manifest
        ::jnihelper::proxy::bluebox::ll::plugin::O_Manifest f_manifest();
        //{_tag_}name[getter]:java.lang.String
        ::jnihelper::proxy::java::lang::O_String f_name();
        //{_tag_}getManifest()bluebox.ll.plugin.Manifest
        ::jnihelper::proxy::bluebox::ll::plugin::O_Manifest m_getManifest();
        //{_tag_}getName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getName();
    };
    
    class C_OtherPlugin: public JavaClass<O_OtherPlugin>{
    public:
        C_OtherPlugin(::jnihelper::Env& env);
        //{_static_}
        //{_static_}//{_tag_}<init>(java.lang.String,bluebox.ll.Logger)bluebox.ll.plugin.OtherPlugin
        ::jnihelper::proxy::bluebox::ll::plugin::O_OtherPlugin newObj(::jnihelper::proxy::java::lang::O_String name, ::jnihelper::proxy::bluebox::ll::O_Logger logger);
    };
    
}