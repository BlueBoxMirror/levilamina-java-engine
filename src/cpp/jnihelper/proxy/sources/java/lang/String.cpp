// This file is generated automatically.
#pragma once
#include "jni.h"
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::lang::O_String>(){
    return "Ljava/lang/String;";
}
jnihelper::proxy::java::lang::O_String::O_String(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::lang::C_String::C_String(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::lang::O_String>(env, env->FindClass(getFullName())){}

std::string jnihelper::proxy::java::lang::O_String::getValue(){
    Env& env=cls.getEnv();
    jstring jobj=(jstring)get();
    if(jobj==nullptr) return "null";
    const char* cstr=env->GetStringUTFChars(jobj,nullptr);
    std::string result(cstr);
    env->ReleaseStringUTFChars(jobj,cstr);
    return result;
}

jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(const std::string& str){
    Env& env=impl.getEnv();
    jstring jobj=env->NewStringUTF(str.c_str());
    return {impl,jobj};
}

//{_instance_}

//{_tag_}indexOf(int,int,int)int
::jint jnihelper::proxy::java::lang::O_String::m_indexOf(::jint _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOf","(III)I");
    return env->CallIntMethod(jobj,jmid,_arg0,_arg1,_arg2);
}
//{_tag_}indexOf(java.lang.String,int,int)int
::jint jnihelper::proxy::java::lang::O_String::m_indexOf(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOf","(Ljava/lang/String;II)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get(),_arg1,_arg2);
}
//{_tag_}split(char,int,boolean)[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::lang::O_String::m_split(::jchar _arg0, ::jint _arg1, ::jboolean _arg2){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"split","(CIZ)[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0,_arg1,_arg2)};
}
//{_tag_}splitWithDelimiters(java.lang.String,int)[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::lang::O_String::m_splitWithDelimiters(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"splitWithDelimiters","(Ljava/lang/String;I)[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get(),_arg1)};
}
//{_tag_}copyToSegmentRaw(java.lang.foreign.MemorySegment,long)void
void jnihelper::proxy::java::lang::O_String::m_copyToSegmentRaw(::jnihelper::proxy::java::lang::foreign::O_MemorySegment _arg0, ::jlong _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"copyToSegmentRaw","(Ljava/lang/foreign/MemorySegment;J)V");
    env->CallVoidMethod(jobj,jmid,_arg0.get(),_arg1);
}
//{_tag_}bytesCompatible(java.nio.charset.Charset)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_bytesCompatible(::jnihelper::proxy::java::nio::charset::O_Charset _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"bytesCompatible","(Ljava/nio/charset/Charset;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}split(java.lang.String,int,boolean)[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::lang::O_String::m_split(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1, ::jboolean _arg2){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"split","(Ljava/lang/String;IZ)[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get(),_arg1,_arg2)};
}
//{_tag_}getBytes(java.lang.String)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::O_String::m_getBytes(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getBytes","(Ljava/lang/String;)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}startsWith(java.lang.String)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_startsWith(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"startsWith","(Ljava/lang/String;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}lastIndexOf(java.lang.String)int
::jint jnihelper::proxy::java::lang::O_String::m_lastIndexOf(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lastIndexOf","(Ljava/lang/String;)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get());
}
//{_tag_}equals(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_equals(::jnihelper::proxy::java::lang::O_Object _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"equals","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}isEmpty()boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_isEmpty(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isEmpty","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}stripIndent()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_stripIndent(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"stripIndent","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}stripLeading()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_stripLeading(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"stripLeading","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}concat(java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_concat(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"concat","(Ljava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}compareToIgnoreCase(java.lang.String)int
::jint jnihelper::proxy::java::lang::O_String::m_compareToIgnoreCase(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"compareToIgnoreCase","(Ljava/lang/String;)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get());
}
//{_tag_}contains(java.lang.CharSequence)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_contains(::jnihelper::proxy::java::lang::O_CharSequence _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"contains","(Ljava/lang/CharSequence;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}nonSyncContentEquals(java.lang.AbstractStringBuilder)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_nonSyncContentEquals(::jnihelper::proxy::java::lang::O_AbstractStringBuilder _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"nonSyncContentEquals","(Ljava/lang/AbstractStringBuilder;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}offsetByCodePoints(int,int)int
::jint jnihelper::proxy::java::lang::O_String::m_offsetByCodePoints(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"offsetByCodePoints","(II)I");
    return env->CallIntMethod(jobj,jmid,_arg0,_arg1);
}
//{_tag_}matches(java.lang.String)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_matches(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"matches","(Ljava/lang/String;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}toUpperCase(java.util.Locale)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_toUpperCase(::jnihelper::proxy::java::util::O_Locale _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toUpperCase","(Ljava/util/Locale;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}endsWith(java.lang.String)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_endsWith(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"endsWith","(Ljava/lang/String;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}compareTo(java.lang.Object)int
::jint jnihelper::proxy::java::lang::O_String::m_compareTo(::jnihelper::proxy::java::lang::O_Object _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"compareTo","(Ljava/lang/Object;)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get());
}
//{_tag_}intern()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_intern(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"intern","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toUpperCase()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_toUpperCase(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toUpperCase","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}indexOf(java.lang.String)int
::jint jnihelper::proxy::java::lang::O_String::m_indexOf(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOf","(Ljava/lang/String;)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get());
}
//{_tag_}toLowerCase()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_toLowerCase(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toLowerCase","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getBytes()[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::O_String::m_getBytes(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getBytes","()[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}translateEscapes()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_translateEscapes(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"translateEscapes","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}lines()java.util.stream.Stream
::jnihelper::proxy::java::util::stream::O_Stream jnihelper::proxy::java::lang::O_String::m_lines(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lines","()Ljava/util/stream/Stream;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/stream/Stream;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getBytes(java.nio.charset.Charset)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::O_String::m_getBytes(::jnihelper::proxy::java::nio::charset::O_Charset _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getBytes","(Ljava/nio/charset/Charset;)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}indexOf(int,int)int
::jint jnihelper::proxy::java::lang::O_String::m_indexOf(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOf","(II)I");
    return env->CallIntMethod(jobj,jmid,_arg0,_arg1);
}
//{_tag_}length()int
::jint jnihelper::proxy::java::lang::O_String::m_length(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"length","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}toCharArray()[C
::jnihelper::CharArray jnihelper::proxy::java::lang::O_String::m_toCharArray(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toCharArray","()[C");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[C")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getBytes([B,int,int,byte,int)void
void jnihelper::proxy::java::lang::O_String::m_getBytes(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jbyte _arg3, ::jint _arg4){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getBytes","([BIIBI)V");
    env->CallVoidMethod(jobj,jmid,_arg0.get(),_arg1,_arg2,_arg3,_arg4);
}
//{_tag_}startsWith(java.lang.String,int)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_startsWith(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"startsWith","(Ljava/lang/String;I)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get(),_arg1);
}
//{_tag_}lastIndexOf(java.lang.String,int)int
::jint jnihelper::proxy::java::lang::O_String::m_lastIndexOf(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lastIndexOf","(Ljava/lang/String;I)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get(),_arg1);
}
//{_tag_}hashIsZero[setter]:boolean
void jnihelper::proxy::java::lang::O_String::f_hashIsZero(::jboolean value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"hashIsZero","Z");
    env->SetBooleanField(jobj,jfid,value);
}
//{_tag_}compareTo(java.lang.String)int
::jint jnihelper::proxy::java::lang::O_String::m_compareTo(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"compareTo","(Ljava/lang/String;)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get());
}
//{_tag_}hashCode()int
::jint jnihelper::proxy::java::lang::O_String::m_hashCode(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"hashCode","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}contentEquals(java.lang.StringBuffer)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_contentEquals(::jnihelper::proxy::java::lang::O_StringBuffer _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"contentEquals","(Ljava/lang/StringBuffer;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}indexOf(java.lang.String,int)int
::jint jnihelper::proxy::java::lang::O_String::m_indexOf(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOf","(Ljava/lang/String;I)I");
    return env->CallIntMethod(jobj,jmid,_arg0.get(),_arg1);
}
//{_tag_}replace(char,char)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_replace(::jchar _arg0, ::jchar _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replace","(CC)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0,_arg1)};
}
//{_tag_}lastIndexOfNonWhitespace()int
::jint jnihelper::proxy::java::lang::O_String::m_lastIndexOfNonWhitespace(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lastIndexOfNonWhitespace","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}coder[setter]:byte
void jnihelper::proxy::java::lang::O_String::f_coder(::jbyte value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"coder","B");
    env->SetByteField(jobj,jfid,value);
}
//{_tag_}describeConstable()java.util.Optional
::jnihelper::proxy::java::util::O_Optional jnihelper::proxy::java::lang::O_String::m_describeConstable(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"describeConstable","()Ljava/util/Optional;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Optional;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getBytes([B,int,byte)void
void jnihelper::proxy::java::lang::O_String::m_getBytes(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jbyte _arg2){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getBytes","([BIB)V");
    env->CallVoidMethod(jobj,jmid,_arg0.get(),_arg1,_arg2);
}
//{_tag_}regionMatches(boolean,int,java.lang.String,int,int)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_regionMatches(::jboolean _arg0, ::jint _arg1, ::jnihelper::proxy::java::lang::O_String _arg2, ::jint _arg3, ::jint _arg4){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"regionMatches","(ZILjava/lang/String;II)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0,_arg1,_arg2.get(),_arg3,_arg4);
}
//{_tag_}chars()java.util.stream.IntStream
::jnihelper::proxy::java::util::stream::O_IntStream jnihelper::proxy::java::lang::O_String::m_chars(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"chars","()Ljava/util/stream/IntStream;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/stream/IntStream;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}codePointBefore(int)int
::jint jnihelper::proxy::java::lang::O_String::m_codePointBefore(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"codePointBefore","(I)I");
    return env->CallIntMethod(jobj,jmid,_arg0);
}
//{_tag_}substring(int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_substring(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"substring","(I)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0)};
}
//{_tag_}value()[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::O_String::m_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"value","()[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}lastIndexOf(int,int)int
::jint jnihelper::proxy::java::lang::O_String::m_lastIndexOf(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lastIndexOf","(II)I");
    return env->CallIntMethod(jobj,jmid,_arg0,_arg1);
}
//{_tag_}isBlank()boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_isBlank(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isBlank","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}split(java.lang.String)[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::lang::O_String::m_split(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"split","(Ljava/lang/String;)[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}hash[setter]:int
void jnihelper::proxy::java::lang::O_String::f_hash(::jint value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"hash","I");
    env->SetIntField(jobj,jfid,value);
}
//{_tag_}coder[getter]:byte
::jbyte jnihelper::proxy::java::lang::O_String::f_coder(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"coder","B");
    return env->GetByteField(jobj,jfid);
}
//{_tag_}indexOf(int)int
::jint jnihelper::proxy::java::lang::O_String::m_indexOf(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOf","(I)I");
    return env->CallIntMethod(jobj,jmid,_arg0);
}
//{_tag_}split(java.lang.String,int)[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::lang::O_String::m_split(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"split","(Ljava/lang/String;I)[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get(),_arg1)};
}
//{_tag_}codePoints()java.util.stream.IntStream
::jnihelper::proxy::java::util::stream::O_IntStream jnihelper::proxy::java::lang::O_String::m_codePoints(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"codePoints","()Ljava/util/stream/IntStream;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/stream/IntStream;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}codePointAt(int)int
::jint jnihelper::proxy::java::lang::O_String::m_codePointAt(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"codePointAt","(I)I");
    return env->CallIntMethod(jobj,jmid,_arg0);
}
//{_tag_}codePointCount(int,int)int
::jint jnihelper::proxy::java::lang::O_String::m_codePointCount(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"codePointCount","(II)I");
    return env->CallIntMethod(jobj,jmid,_arg0,_arg1);
}
//{_tag_}substring(int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_substring(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"substring","(II)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0,_arg1)};
}
//{_tag_}value[setter]:[B
void jnihelper::proxy::java::lang::O_String::f_value(::jnihelper::ByteArray value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","[B");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}strip()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_strip(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"strip","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}lastIndexOf(int)int
::jint jnihelper::proxy::java::lang::O_String::m_lastIndexOf(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lastIndexOf","(I)I");
    return env->CallIntMethod(jobj,jmid,_arg0);
}
//{_tag_}transform(java.util.function.Function)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::lang::O_String::m_transform(::jnihelper::proxy::java::util::function::O_Function _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"transform","(Ljava/util/function/Function;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}getChars(int,int,[C,int)void
void jnihelper::proxy::java::lang::O_String::m_getChars(::jint _arg0, ::jint _arg1, ::jnihelper::CharArray _arg2, ::jint _arg3){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getChars","(II[CI)V");
    env->CallVoidMethod(jobj,jmid,_arg0,_arg1,_arg2.get(),_arg3);
}
//{_tag_}toLowerCase(java.util.Locale)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_toLowerCase(::jnihelper::proxy::java::util::O_Locale _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toLowerCase","(Ljava/util/Locale;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}subSequence(int,int)java.lang.CharSequence
::jnihelper::proxy::java::lang::O_CharSequence jnihelper::proxy::java::lang::O_String::m_subSequence(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"subSequence","(II)Ljava/lang/CharSequence;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/CharSequence;")),env->CallObjectMethod(jobj,jmid,_arg0,_arg1)};
}
//{_tag_}charAt(int)char
::jchar jnihelper::proxy::java::lang::O_String::m_charAt(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"charAt","(I)C");
    return env->CallCharMethod(jobj,jmid,_arg0);
}
//{_tag_}trim()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_trim(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"trim","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}repeat(int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_repeat(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"repeat","(I)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0)};
}
//{_tag_}resolveConstantDesc(java.lang.invoke.MethodHandles$Lookup)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m1_resolveConstantDesc(::jnihelper::proxy::java::lang::invoke::O_MethodHandles$Lookup _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"resolveConstantDesc","(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}replaceFirst(java.lang.String,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_replaceFirst(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replaceFirst","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}hashIsZero[getter]:boolean
::jboolean jnihelper::proxy::java::lang::O_String::f_hashIsZero(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"hashIsZero","Z");
    return env->GetBooleanField(jobj,jfid);
}
//{_tag_}resolveConstantDesc(java.lang.invoke.MethodHandles$Lookup)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::lang::O_String::m_resolveConstantDesc(::jnihelper::proxy::java::lang::invoke::O_MethodHandles$Lookup _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"resolveConstantDesc","(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}formatted([Ljava.lang.Object;)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_formatted(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"formatted","([Ljava/lang/Object;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get())};
}
//{_tag_}contentEquals(java.lang.CharSequence)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_contentEquals(::jnihelper::proxy::java::lang::O_CharSequence _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"contentEquals","(Ljava/lang/CharSequence;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}stripTrailing()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_stripTrailing(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"stripTrailing","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}regionMatches(int,java.lang.String,int,int)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_regionMatches(::jint _arg0, ::jnihelper::proxy::java::lang::O_String _arg1, ::jint _arg2, ::jint _arg3){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"regionMatches","(ILjava/lang/String;II)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0,_arg1.get(),_arg2,_arg3);
}
//{_tag_}indent(int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_indent(::jint _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indent","(I)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0)};
}
//{_tag_}indexOfNonWhitespace()int
::jint jnihelper::proxy::java::lang::O_String::m_indexOfNonWhitespace(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"indexOfNonWhitespace","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}replaceAll(java.lang.String,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_replaceAll(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replaceAll","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}equalsIgnoreCase(java.lang.String)boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_equalsIgnoreCase(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"equalsIgnoreCase","(Ljava/lang/String;)Z");
    return env->CallBooleanMethod(jobj,jmid,_arg0.get());
}
//{_tag_}isLatin1()boolean
::jboolean jnihelper::proxy::java::lang::O_String::m_isLatin1(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isLatin1","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}replace(java.lang.CharSequence,java.lang.CharSequence)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::O_String::m_replace(::jnihelper::proxy::java::lang::O_CharSequence _arg0, ::jnihelper::proxy::java::lang::O_CharSequence _arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"replace","(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}coder()byte
::jbyte jnihelper::proxy::java::lang::O_String::m_coder(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"coder","()B");
    return env->CallByteMethod(jobj,jmid);
}
//{_tag_}getBytes(int,int,[B,int)void
void jnihelper::proxy::java::lang::O_String::m_getBytes(::jint _arg0, ::jint _arg1, ::jnihelper::ByteArray _arg2, ::jint _arg3){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getBytes","(II[BI)V");
    env->CallVoidMethod(jobj,jmid,_arg0,_arg1,_arg2.get(),_arg3);
}
//{_tag_}hash[getter]:int
::jint jnihelper::proxy::java::lang::O_String::f_hash(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"hash","I");
    return env->GetIntField(jobj,jfid);
}
//{_tag_}value[getter]:[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::O_String::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->GetObjectField(jobj,jfid)};
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}repeatCopyRest([B,int,int,int)void
void jnihelper::proxy::java::lang::C_String::m_repeatCopyRest(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jint _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"repeatCopyRest","([BIII)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3);
}
//{_tag_}computeSizeUTF8_UTF16([B,boolean)long
::jlong jnihelper::proxy::java::lang::C_String::m_computeSizeUTF8_UTF16(::jnihelper::ByteArray _arg0, ::jboolean _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"computeSizeUTF8_UTF16","([BZ)J");
    return env->CallStaticLongMethod(jcls,jmid,_arg0.get(),_arg1);
}
//{_tag_}<init>(java.nio.charset.Charset,[B,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::proxy::java::nio::charset::O_Charset _arg0, ::jnihelper::ByteArray _arg1, ::jint _arg2, ::jint _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/nio/charset/Charset;[BII)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1.get(),_arg2,_arg3)};
}
//{_tag_}trimArray([B,int)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_trimArray(::jnihelper::ByteArray _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"trimArray","([BI)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1)};
}
//{_tag_}checkBoundsOffCount(int,int,int)int
::jint jnihelper::proxy::java::lang::C_String::m_checkBoundsOffCount(::jint _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"checkBoundsOffCount","(III)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0,_arg1,_arg2);
}
//{_tag_}lambda$stripIndent$0(int,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_lambda$stripIndent$0(::jint _arg0, ::jnihelper::proxy::java::lang::O_String _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$stripIndent$0","(ILjava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0,_arg1.get())};
}
//{_tag_}replaceNegatives([B,int)void
void jnihelper::proxy::java::lang::C_String::m_replaceNegatives(::jnihelper::ByteArray _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"replaceNegatives","([BI)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0.get(),_arg1);
}
//{_tag_}newStringUTF8NoRepl([B,int,int,boolean)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_newStringUTF8NoRepl(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jboolean _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"newStringUTF8NoRepl","([BIIZ)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3)};
}
//{_tag_}copyValueOf([C)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_copyValueOf(::jnihelper::CharArray _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"copyValueOf","([C)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get())};
}
//{_tag_}<init>([B,int,int,java.nio.charset.Charset)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::proxy::java::nio::charset::O_Charset _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BIILjava/nio/charset/Charset;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3.get())};
}
//{_tag_}valueOf(float)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jfloat _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","(F)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0)};
}
//{_tag_}decode4(int,int,int,int)int
::jint jnihelper::proxy::java::lang::C_String::m_decode4(::jint _arg0, ::jint _arg1, ::jint _arg2, ::jint _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"decode4","(IIII)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0,_arg1,_arg2,_arg3);
}
//{_tag_}join(java.lang.CharSequence,[Ljava.lang.CharSequence;)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_join(::jnihelper::proxy::java::lang::O_CharSequence _arg0, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_CharSequence> _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"join","(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}rangeCheck([C,int,int)java.lang.Void
::jnihelper::proxy::java::lang::O_Void jnihelper::proxy::java::lang::C_String::m_rangeCheck(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"rangeCheck","([CII)Ljava/lang/Void;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Void;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1,_arg2)};
}
//{_tag_}<init>([B,int,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jint _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BIII)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3)};
}
//{_tag_}serialVersionUID[setter]:long
void jnihelper::proxy::java::lang::C_String::f_serialVersionUID(::jlong value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"serialVersionUID","J");
    env->SetStaticLongField(jcls,jfid,value);
}
//{_tag_}CASE_INSENSITIVE_ORDER[setter]:java.util.Comparator
void jnihelper::proxy::java::lang::C_String::f_CASE_INSENSITIVE_ORDER(::jnihelper::proxy::java::util::O_Comparator value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"CASE_INSENSITIVE_ORDER","Ljava/util/Comparator;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}checkIndex(int,int)void
void jnihelper::proxy::java::lang::C_String::m_checkIndex(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"checkIndex","(II)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0,_arg1);
}
//{_tag_}format(java.lang.String,[Ljava.lang.Object;)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_format(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"format","(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}decodeASCII([B,int,[C,int,int)int
::jint jnihelper::proxy::java::lang::C_String::m_decodeASCII(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jnihelper::CharArray _arg2, ::jint _arg3, ::jint _arg4){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"decodeASCII","([BI[CII)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get(),_arg1,_arg2.get(),_arg3,_arg4);
}
//{_tag_}getBytesNoRepl1(java.lang.String,java.nio.charset.Charset)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_getBytesNoRepl1(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getBytesNoRepl1","(Ljava/lang/String;Ljava/nio/charset/Charset;)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}checkBoundsBeginEnd(int,int,int)void
void jnihelper::proxy::java::lang::C_String::m_checkBoundsBeginEnd(::jint _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"checkBoundsBeginEnd","(III)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0,_arg1,_arg2);
}
//{_tag_}<init>([C,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([CII)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1,_arg2)};
}
//{_tag_}UTF16[setter]:byte
void jnihelper::proxy::java::lang::C_String::f_UTF16(::jbyte value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"UTF16","B");
    env->SetStaticByteField(jcls,jfid,value);
}
//{_tag_}valueOf([C,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","([CII)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1,_arg2)};
}
//{_tag_}encodeUTF8_UTF16([B,boolean)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_encodeUTF8_UTF16(::jnihelper::ByteArray _arg0, ::jboolean _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"encodeUTF8_UTF16","([BZ)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1)};
}
//{_tag_}<init>([B,int,int,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_String _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BIILjava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3.get())};
}
//{_tag_}<init>(java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get())};
}
//{_tag_}encode8859_1(byte,[B)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_encode8859_1(::jbyte _arg0, ::jnihelper::ByteArray _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"encode8859_1","(B[B)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0,_arg1.get())};
}
//{_tag_}<init>(java.lang.StringBuffer)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::proxy::java::lang::O_StringBuffer _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/StringBuffer;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get())};
}
//{_tag_}<init>([B,java.nio.charset.Charset)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BLjava/nio/charset/Charset;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}decode2(int,int)char
::jchar jnihelper::proxy::java::lang::C_String::m_decode2(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"decode2","(II)C");
    return env->CallStaticCharMethod(jcls,jmid,_arg0,_arg1);
}
//{_tag_}isMalformed4_3(int)boolean
::jboolean jnihelper::proxy::java::lang::C_String::m_isMalformed4_3(::jint _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"isMalformed4_3","(I)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_arg0);
}
//{_tag_}serialPersistentFields[setter]:[Ljava.io.ObjectStreamField;
void jnihelper::proxy::java::lang::C_String::f_serialPersistentFields(::jnihelper::Array<::jnihelper::proxy::java::io::O_ObjectStreamField> value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"serialPersistentFields","[Ljava/io/ObjectStreamField;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}isNotContinuation(int)boolean
::jboolean jnihelper::proxy::java::lang::C_String::m_isNotContinuation(::jint _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"isNotContinuation","(I)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_arg0);
}
//{_tag_}encodeASCII(byte,[B)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_encodeASCII(::jbyte _arg0, ::jnihelper::ByteArray _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"encodeASCII","(B[B)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0,_arg1.get())};
}
//{_tag_}COMPACT_STRINGS[setter]:boolean
void jnihelper::proxy::java::lang::C_String::f_COMPACT_STRINGS(::jboolean value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"COMPACT_STRINGS","Z");
    env->SetStaticBooleanField(jcls,jfid,value);
}
//{_tag_}serialPersistentFields[getter]:[Ljava.io.ObjectStreamField;
::jnihelper::Array<::jnihelper::proxy::java::io::O_ObjectStreamField> jnihelper::proxy::java::lang::C_String::f_serialPersistentFields(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"serialPersistentFields","[Ljava/io/ObjectStreamField;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/io/ObjectStreamField;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}decodeWithDecoder(java.nio.charset.CharsetDecoder,[C,[B,int,int)int
::jint jnihelper::proxy::java::lang::C_String::m_decodeWithDecoder(::jnihelper::proxy::java::nio::charset::O_CharsetDecoder _arg0, ::jnihelper::CharArray _arg1, ::jnihelper::ByteArray _arg2, ::jint _arg3, ::jint _arg4){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"decodeWithDecoder","(Ljava/nio/charset/CharsetDecoder;[C[BII)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get(),_arg1.get(),_arg2.get(),_arg3,_arg4);
}
//{_tag_}<init>([B,byte)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jbyte _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BB)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1)};
}
//{_tag_}<init>([B,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BII)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1,_arg2)};
}
//{_tag_}newStringNoRepl([B,java.nio.charset.Charset)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_newStringNoRepl(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"newStringNoRepl","([BLjava/nio/charset/Charset;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}getBytesNoRepl(java.lang.String,java.nio.charset.Charset)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_getBytesNoRepl(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getBytesNoRepl","(Ljava/lang/String;Ljava/nio/charset/Charset;)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}REPL[setter]:char
void jnihelper::proxy::java::lang::C_String::f_REPL(::jchar value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"REPL","C");
    env->SetStaticCharField(jcls,jfid,value);
}
//{_tag_}getBytesUTF8NoRepl(java.lang.String)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_getBytesUTF8NoRepl(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"getBytesUTF8NoRepl","(Ljava/lang/String;)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get())};
}
//{_tag_}encodeUTF8(byte,[B,boolean)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_encodeUTF8(::jbyte _arg0, ::jnihelper::ByteArray _arg1, ::jboolean _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"encodeUTF8","(B[BZ)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0,_arg1.get(),_arg2)};
}
//{_tag_}<init>([C,int,int,java.lang.Void)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_Void _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([CIILjava/lang/Void;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3.get())};
}
//{_tag_}join(java.lang.CharSequence,java.lang.Iterable)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_join(::jnihelper::proxy::java::lang::O_CharSequence _arg0, ::jnihelper::proxy::java::lang::O_Iterable _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"join","(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}format(java.util.Locale,java.lang.String,[Ljava.lang.Object;)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_format(::jnihelper::proxy::java::util::O_Locale _arg0, ::jnihelper::proxy::java::lang::O_String _arg1, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"format","(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get(),_arg2.get())};
}
//{_tag_}CASE_INSENSITIVE_ORDER[getter]:java.util.Comparator
::jnihelper::proxy::java::util::O_Comparator jnihelper::proxy::java::lang::C_String::f_CASE_INSENSITIVE_ORDER(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"CASE_INSENSITIVE_ORDER","Ljava/util/Comparator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Comparator;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}decodeUTF8_UTF16([B,int,int,[B,int,boolean)int
::jint jnihelper::proxy::java::lang::C_String::m_decodeUTF8_UTF16(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::ByteArray _arg3, ::jint _arg4, ::jboolean _arg5){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"decodeUTF8_UTF16","([BII[BIZ)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3.get(),_arg4,_arg5);
}
//{_tag_}join(java.lang.String,java.lang.String,java.lang.String,[Ljava.lang.String;,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_join(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1, ::jnihelper::proxy::java::lang::O_String _arg2, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> _arg3, ::jint _arg4){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"join","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get(),_arg2.get(),_arg3.get(),_arg4)};
}
//{_tag_}throwMalformed(int,int)void
void jnihelper::proxy::java::lang::C_String::m_throwMalformed(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"throwMalformed","(II)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0,_arg1);
}
//{_tag_}lambda$indent$1(java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_lambda$indent$1(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$indent$1","(Ljava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get())};
}
//{_tag_}newStringNoRepl1([B,java.nio.charset.Charset)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_newStringNoRepl1(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"newStringNoRepl1","([BLjava/nio/charset/Charset;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}isMalformed3_2(int,int)boolean
::jboolean jnihelper::proxy::java::lang::C_String::m_isMalformed3_2(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"isMalformed3_2","(II)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_arg0,_arg1);
}
//{_tag_}checkOffset(int,int)void
void jnihelper::proxy::java::lang::C_String::m_checkOffset(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"checkOffset","(II)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0,_arg1);
}
//{_tag_}<init>([B,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::lang::O_String _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BLjava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}LATIN1[getter]:byte
::jbyte jnihelper::proxy::java::lang::C_String::f_LATIN1(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"LATIN1","B");
    return env->GetStaticByteField(jcls,jfid);
}
//{_tag_}encode(java.nio.charset.Charset,byte,[B)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_encode(::jnihelper::proxy::java::nio::charset::O_Charset _arg0, ::jbyte _arg1, ::jnihelper::ByteArray _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"encode","(Ljava/nio/charset/Charset;B[B)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1,_arg2.get())};
}
//{_tag_}throwUnmappable(int)void
void jnihelper::proxy::java::lang::C_String::m_throwUnmappable(::jint _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"throwUnmappable","(I)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0);
}
//{_tag_}<init>([B)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([B)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get())};
}

//{_tag_}valueOfCodePoint(int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOfCodePoint(::jint _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOfCodePoint","(I)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0)};
}
//{_tag_}valueOf(double)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jdouble _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","(D)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0)};
}

//{_tag_}REPL[getter]:char
::jchar jnihelper::proxy::java::lang::C_String::f_REPL(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"REPL","C");
    return env->GetStaticCharField(jcls,jfid);
}
//{_tag_}throwMalformed([B)void
void jnihelper::proxy::java::lang::C_String::m_throwMalformed(::jnihelper::ByteArray _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"throwMalformed","([B)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0.get());
}
//{_tag_}copyValueOf([C,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_copyValueOf(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"copyValueOf","([CII)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1,_arg2)};
}
//{_tag_}<init>([B,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::ByteArray _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([BI)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1)};
}
//{_tag_}isMalformed4_2(int,int)boolean
::jboolean jnihelper::proxy::java::lang::C_String::m_isMalformed4_2(::jint _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"isMalformed4_2","(II)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_arg0,_arg1);
}
//{_tag_}encodeWithEncoder(java.nio.charset.Charset,byte,[B,boolean)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_encodeWithEncoder(::jnihelper::proxy::java::nio::charset::O_Charset _arg0, ::jbyte _arg1, ::jnihelper::ByteArray _arg2, ::jboolean _arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"encodeWithEncoder","(Ljava/nio/charset/Charset;B[BZ)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1,_arg2.get(),_arg3)};
}
//{_tag_}isMalformed3(int,int,int)boolean
::jboolean jnihelper::proxy::java::lang::C_String::m_isMalformed3(::jint _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"isMalformed3","(III)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_arg0,_arg1,_arg2);
}
//{_tag_}decode3(int,int,int)char
::jchar jnihelper::proxy::java::lang::C_String::m_decode3(::jint _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"decode3","(III)C");
    return env->CallStaticCharMethod(jcls,jmid,_arg0,_arg1,_arg2);
}
//{_tag_}malformed4([B,int)int
::jint jnihelper::proxy::java::lang::C_String::m_malformed4(::jnihelper::ByteArray _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"malformed4","([BI)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get(),_arg1);
}
//{_tag_}valueOf([C)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jnihelper::CharArray _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","([C)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get())};
}

//{_tag_}lookupCharset(java.lang.String)java.nio.charset.Charset
::jnihelper::proxy::java::nio::charset::O_Charset jnihelper::proxy::java::lang::C_String::m_lookupCharset(::jnihelper::proxy::java::lang::O_String _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lookupCharset","(Ljava/lang/String;)Ljava/nio/charset/Charset;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/nio/charset/Charset;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get())};
}
//{_tag_}malformed3([B,int)int
::jint jnihelper::proxy::java::lang::C_String::m_malformed3(::jnihelper::ByteArray _arg0, ::jint _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"malformed3","([BI)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get(),_arg1);
}
//{_tag_}scale(int,float)int
::jint jnihelper::proxy::java::lang::C_String::m_scale(::jint _arg0, ::jfloat _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"scale","(IF)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0,_arg1);
}
//{_tag_}valueOf(long)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jlong _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","(J)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0)};
}
//{_tag_}COMPACT_STRINGS[getter]:boolean
::jboolean jnihelper::proxy::java::lang::C_String::f_COMPACT_STRINGS(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"COMPACT_STRINGS","Z");
    return env->GetStaticBooleanField(jcls,jfid);
}
//{_tag_}lambda$indent$0(java.lang.String,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_lambda$indent$0(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$indent$0","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}lambda$indent$2(int,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_lambda$indent$2(::jint _arg0, ::jnihelper::proxy::java::lang::O_String _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$indent$2","(ILjava/lang/String;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0,_arg1.get())};
}
//{_tag_}LATIN1[setter]:byte
void jnihelper::proxy::java::lang::C_String::f_LATIN1(::jbyte value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"LATIN1","B");
    env->SetStaticByteField(jcls,jfid,value);
}
//{_tag_}valueOf(char)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jchar _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","(C)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0)};
}
//{_tag_}<init>(java.lang.AbstractStringBuilder,java.lang.Void)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::proxy::java::lang::O_AbstractStringBuilder _arg0, ::jnihelper::proxy::java::lang::O_Void _arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/AbstractStringBuilder;Ljava/lang/Void;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1.get())};
}
//{_tag_}<init>()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","()V");
    return {impl,env->NewObject(jcls,jmid)};
}
//{_tag_}UTF16[getter]:byte
::jbyte jnihelper::proxy::java::lang::C_String::f_UTF16(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"UTF16","B");
    return env->GetStaticByteField(jcls,jfid);
}
//{_tag_}valueOf(java.lang.Object)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jnihelper::proxy::java::lang::O_Object _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","(Ljava/lang/Object;)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0.get())};
}
//{_tag_}serialVersionUID[getter]:long
::jlong jnihelper::proxy::java::lang::C_String::f_serialVersionUID(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"serialVersionUID","J");
    return env->GetStaticLongField(jcls,jfid);
}
//{_tag_}valueOf(int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jint _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","(I)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0)};
}
//{_tag_}isASCII([B)boolean
::jboolean jnihelper::proxy::java::lang::C_String::m_isASCII(::jnihelper::ByteArray _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"isASCII","([B)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_arg0.get());
}
//{_tag_}<init>([C)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::CharArray _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([C)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get())};
}
//{_tag_}<init>([I,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::IntArray _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([III)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get(),_arg1,_arg2)};
}
//{_tag_}valueOf(boolean)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::m_valueOf(::jboolean _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"valueOf","(Z)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,_arg0)};
}
//{_tag_}encode8859_1(byte,[B,boolean)[B
::jnihelper::ByteArray jnihelper::proxy::java::lang::C_String::m_encode8859_1(::jbyte _arg0, ::jnihelper::ByteArray _arg1, ::jboolean _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"encode8859_1","(B[BZ)[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallStaticObjectMethod(jcls,jmid,_arg0,_arg1.get(),_arg2)};
}
//{_tag_}outdent(java.util.List)int
::jint jnihelper::proxy::java::lang::C_String::m_outdent(::jnihelper::proxy::java::util::O_List _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"outdent","(Ljava/util/List;)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get());
}
//{_tag_}<init>(java.lang.StringBuilder)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::lang::C_String::newObj(::jnihelper::proxy::java::lang::O_StringBuilder _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/StringBuilder;)V");
    return {impl,env->NewObject(jcls,jmid,_arg0.get())};
}
//{_tag_}indexOf([B,byte,int,java.lang.String,int)int
::jint jnihelper::proxy::java::lang::C_String::m_indexOf(::jnihelper::ByteArray _arg0, ::jbyte _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_String _arg3, ::jint _arg4){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"indexOf","([BBILjava/lang/String;I)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3.get(),_arg4);
}
//{_tag_}isMalformed4(int,int,int)boolean
::jboolean jnihelper::proxy::java::lang::C_String::m_isMalformed4(::jint _arg0, ::jint _arg1, ::jint _arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"isMalformed4","(III)Z");
    return env->CallStaticBooleanMethod(jcls,jmid,_arg0,_arg1,_arg2);
}

//{_tag_}throwUnmappable([B)void
void jnihelper::proxy::java::lang::C_String::m_throwUnmappable(::jnihelper::ByteArray _arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"throwUnmappable","([B)V");
    env->CallStaticVoidMethod(jcls,jmid,_arg0.get());
}
//{_tag_}lastIndexOf([B,byte,int,java.lang.String,int)int
::jint jnihelper::proxy::java::lang::C_String::m_lastIndexOf(::jnihelper::ByteArray _arg0, ::jbyte _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_String _arg3, ::jint _arg4){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lastIndexOf","([BBILjava/lang/String;I)I");
    return env->CallStaticIntMethod(jcls,jmid,_arg0.get(),_arg1,_arg2,_arg3.get(),_arg4);
}
