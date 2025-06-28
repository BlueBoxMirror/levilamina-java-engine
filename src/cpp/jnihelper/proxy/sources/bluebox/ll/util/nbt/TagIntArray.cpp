// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagIntArray.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray>(){
    return "Lbluebox/ll/util/nbt/TagIntArray;";
}
jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::O_TagIntArray(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::util::nbt::C_TagIntArray::C_TagIntArray(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray>(env, env->FindClass(getFullName())){}

void jnihelper::proxy::bluebox::ll::util::nbt::toNative(O_TagIntArray obj, IntArrayTag *tag){
    auto array=obj.f_value();
    for(int i=0;i<array.length();i++){
        tag->push_back(array.get(i));
    }
}

jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray jnihelper::proxy::bluebox::ll::util::nbt::C_TagIntArray::fromNative(IntArrayTag* tag){
    auto array=jnihelper::IntArray(impl.getEnv(),tag->size());
    size_t i=0;
    for(auto byte:*tag){
        array.set(i,byte);
        i++;
    }
    return newObj(array);
}

//{_instance_}
//{_tag_}set([I)void
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::m_set(::jnihelper::IntArray value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"set","([I)V");
    env->CallVoidMethod(jobj,jmid,value.get());
}
//{_tag_}getIdName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::m_getIdName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getIdName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}get()[I
::jnihelper::IntArray jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::m_get(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"get","()[I");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[I")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getId()int
::jint jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::m_getId(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getId","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}value[getter]:[I
::jnihelper::IntArray jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::f_value(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","[I");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[I")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}value[setter]:[I
void jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray::f_value(::jnihelper::IntArray value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"value","[I");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}<init>([I)bluebox.ll.util.nbt.TagIntArray
::jnihelper::proxy::bluebox::ll::util::nbt::O_TagIntArray jnihelper::proxy::bluebox::ll::util::nbt::C_TagIntArray::newObj(::jnihelper::IntArray value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","([I)V");
    return {impl,env->NewObject(jcls,jmid,value.get())};
}
