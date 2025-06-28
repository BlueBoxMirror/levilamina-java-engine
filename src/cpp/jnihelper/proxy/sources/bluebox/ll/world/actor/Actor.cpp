// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/bluebox/ll/world/actor/Actor.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::bluebox::ll::world::actor::O_Actor>(){
    return "Lbluebox/ll/world/actor/Actor;";
}
jnihelper::proxy::bluebox::ll::world::actor::O_Actor::O_Actor(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::bluebox::ll::world::actor::C_Actor::C_Actor(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::bluebox::ll::world::actor::O_Actor>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}kill()void
void jnihelper::proxy::bluebox::ll::world::actor::O_Actor::m_kill(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"kill","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}nativePtr[getter]:long
::jlong jnihelper::proxy::bluebox::ll::world::actor::O_Actor::f_nativePtr(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"nativePtr","J");
    return env->GetLongField(jobj,jfid);
}
//{_tag_}getNativePointer()long
::jlong jnihelper::proxy::bluebox::ll::world::actor::O_Actor::m_getNativePointer(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getNativePointer","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}nativePtr[setter]:long
void jnihelper::proxy::bluebox::ll::world::actor::O_Actor::f_nativePtr(::jlong value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"nativePtr","J");
    env->SetLongField(jobj,jfid,value);
}
//{_static_}
//{_tag_}<init>(long)bluebox.ll.world.actor.Actor
::jnihelper::proxy::bluebox::ll::world::actor::O_Actor jnihelper::proxy::bluebox::ll::world::actor::C_Actor::newObj(::jlong _nativePtr){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(J)V");
    return {impl,env->NewObject(jcls,jmid,_nativePtr)};
}
