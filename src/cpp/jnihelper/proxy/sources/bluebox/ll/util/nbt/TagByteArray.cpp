// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include <cstddef>
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagByteArray.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray>(){
    return "Lbluebox/ll/util/nbt/TagByteArray;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::O_TagByteArray(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagByteArray::C_TagByteArray(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray>(env, env->FindClass(getFullName())){}

void jnihelper::proxy::bluebox::ll::util::nbt::toNative(O_TagByteArray obj, ByteArrayTag *tag){
    auto array=obj.m_get();
    for(int i=0;i<array.length();i++){
        tag->push_back(array.get(i));
    }
}

jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray jnihelper::proxy::bluebox::ll::util::nbt::C_TagByteArray::fromNative(ByteArrayTag* tag){
    auto array=jnihelper::ByteArray(impl.getEnv(),tag->size());
    size_t i=0;
    for(auto byte:*tag){
        array.set(i,byte);
        i++;
    }
    return newObj(array);
}

//{_instance_}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}value[setter]:[B
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::f_value(::jnihelper::ByteArray value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","[B");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}set([B)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::m_set(::jnihelper::ByteArray value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","([B)V");
    env->CallVoidMethod(jobj,jmid,value.get());
}
//{_tag_}get()[B
::jnihelper::ByteArray jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[getter]:[B
::jnihelper::ByteArray jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","[B");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[B")),env->GetObjectField(jobj,jfid)};
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>([B)bluebox.ll.util.nbt.TagByteArray
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagByteArray jnihelper::proxy::bluebox::ll::util::nbt::C_TagByteArray::newObj(::jnihelper::ByteArray bytes){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([B)V");
    return {impl,env->NewObject(jcls,jmid,bytes.get())};
}
