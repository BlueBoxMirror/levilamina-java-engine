// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/io/File.h"
#include "jnihelper/proxy/headers/com/google/gson/Gson.h"
#include "jnihelper/proxy/headers/java/util/HashMap.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
namespace jnihelper::proxy::bluebox::ll::util {

    class O_I18n: public ::jnihelper::JavaObject{
    public:
        O_I18n(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}translations[getter]:java.util.HashMap
        ::jnihelper::proxy::java::util::O_HashMap f_translations();
        //{_tag_}trl(java.lang.String,java.lang.String,[Ljava.lang.Object;)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_trl(::jnihelper::proxy::java::lang::O_String _localeCode, ::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}set(java.lang.String,java.lang.String,java.lang.String)void
        void m_set(::jnihelper::proxy::java::lang::O_String _localeCode, ::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::lang::O_String _value);
        //{_tag_}defaultLocalCode[setter]:java.lang.String
        void f_defaultLocalCode(::jnihelper::proxy::java::lang::O_String value);
        //{_tag_}translations[setter]:java.util.HashMap
        void f_translations(::jnihelper::proxy::java::util::O_HashMap value);
        //{_tag_}get(java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_get(::jnihelper::proxy::java::lang::O_String _key);
        //{_tag_}get(java.lang.String,java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_get(::jnihelper::proxy::java::lang::O_String _localeCode, ::jnihelper::proxy::java::lang::O_String _key);
        //{_tag_}tr(java.lang.String,[Ljava.lang.Object;)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_tr(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _args);
        //{_tag_}defaultLocalCode[getter]:java.lang.String
        ::jnihelper::proxy::java::lang::O_String f_defaultLocalCode();
    };
    
    class C_I18n: public JavaClass<O_I18n>{
    public:
        C_I18n(::jnihelper::Env& env);
        //{_static_}
        //{_tag_}getDefaultLocaleCode()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getDefaultLocaleCode();
        //{_tag_}load(java.io.File)bluebox.ll.util.I18n
        ::jnihelper::proxy::bluebox::ll::util::O_I18n m_load(::jnihelper::proxy::java::io::O_File _dir);
        //{_tag_}load(java.io.File,java.lang.String)bluebox.ll.util.I18n
        ::jnihelper::proxy::bluebox::ll::util::O_I18n m_load(::jnihelper::proxy::java::io::O_File _dir, ::jnihelper::proxy::java::lang::O_String _defaultLocaleCode);
        //{_tag_}gson[setter]:com.google.gson.Gson
        void f_gson(::jnihelper::proxy::com::google::gson::O_Gson value);
        //{_tag_}gson[getter]:com.google.gson.Gson
        ::jnihelper::proxy::com::google::gson::O_Gson f_gson();
        //{_tag_}<init>(java.lang.String)bluebox.ll.util.I18n
        ::jnihelper::proxy::bluebox::ll::util::O_I18n newObj(::jnihelper::proxy::java::lang::O_String _defaultLocalCode);
    };
    
}