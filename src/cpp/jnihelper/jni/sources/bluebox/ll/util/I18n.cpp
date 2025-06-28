// This file is generated automatically.
#include "jnihelper/jni/headers/bluebox/ll/util/I18n.h"
#include "ll/api/i18n/I18n.h"

namespace jnihelper::jni {

//{_tag_}getDefaultLocaleCode()Ljava/lang/String;
::jobject Java_bluebox_ll_util_I18n_getDefaultLocaleCode(::JNIEnv* envPtr, ::jclass ){
    Env env(envPtr);
    IMPORT(bluebox::ll::util,I18n)
    IMPORT(java::lang,String)
    return String.newObj(ll::i18n::getDefaultLocaleCode().data()).release();
}

}