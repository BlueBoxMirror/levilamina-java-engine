// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Map$Entry.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_Map$Entry>(){
    return "Ljava/util/Map$Entry;";
}
jnihelper::proxy::java::util::O_Map$Entry::O_Map$Entry(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_Map$Entry::C_Map$Entry(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_Map$Entry>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}setValue(java.lang.Object)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::util::O_Map$Entry::m_setValue(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setValue","(Ljava/lang/Object;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,arg0.get())};
}
//{_tag_}equals(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::util::O_Map$Entry::m_equals(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"equals","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}getValue()java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::util::O_Map$Entry::m_getValue(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getValue","()Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getKey()java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::util::O_Map$Entry::m_getKey(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getKey","()Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}hashCode()int
::jint jnihelper::proxy::java::util::O_Map$Entry::m_hashCode(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"hashCode","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_static_}
//{_static_}//{_tag_}copyOf(java.util.Map$Entry)java.util.Map$Entry
::jnihelper::proxy::java::util::O_Map$Entry jnihelper::proxy::java::util::C_Map$Entry::m_copyOf(::jnihelper::proxy::java::util::O_Map$Entry arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"copyOf","(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Map$Entry;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get())};
}
//{_tag_}lambda$comparingByValue$1065357e$1(java.util.Map$Entry,java.util.Map$Entry)int
::jint jnihelper::proxy::java::util::C_Map$Entry::m_lambda$comparingByValue$1065357e$1(::jnihelper::proxy::java::util::O_Map$Entry arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$comparingByValue$1065357e$1","(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I");
    return env->CallStaticIntMethod(jcls,jmid,arg0.get(),arg1.get());
}
//{_tag_}comparingByValue()java.util.Comparator
::jnihelper::proxy::java::util::O_Comparator jnihelper::proxy::java::util::C_Map$Entry::m_comparingByValue(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"comparingByValue","()Ljava/util/Comparator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Comparator;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}comparingByKey(java.util.Comparator)java.util.Comparator
::jnihelper::proxy::java::util::O_Comparator jnihelper::proxy::java::util::C_Map$Entry::m_comparingByKey(::jnihelper::proxy::java::util::O_Comparator arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"comparingByKey","(Ljava/util/Comparator;)Ljava/util/Comparator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Comparator;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get())};
}
//{_tag_}lambda$comparingByKey$bbdbfea9$1(java.util.Map$Entry,java.util.Map$Entry)int
::jint jnihelper::proxy::java::util::C_Map$Entry::m_lambda$comparingByKey$bbdbfea9$1(::jnihelper::proxy::java::util::O_Map$Entry arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$comparingByKey$bbdbfea9$1","(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I");
    return env->CallStaticIntMethod(jcls,jmid,arg0.get(),arg1.get());
}
//{_tag_}comparingByKey()java.util.Comparator
::jnihelper::proxy::java::util::O_Comparator jnihelper::proxy::java::util::C_Map$Entry::m_comparingByKey(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"comparingByKey","()Ljava/util/Comparator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Comparator;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}$deserializeLambda$(java.lang.invoke.SerializedLambda)java.lang.Object
::jnihelper::proxy::java::lang::O_Object jnihelper::proxy::java::util::C_Map$Entry::m_$deserializeLambda$(::jnihelper::proxy::java::lang::invoke::O_SerializedLambda arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"$deserializeLambda$","(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/Object;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get())};
}
//{_tag_}lambda$comparingByValue$827a17d5$1(java.util.Comparator,java.util.Map$Entry,java.util.Map$Entry)int
::jint jnihelper::proxy::java::util::C_Map$Entry::m_lambda$comparingByValue$827a17d5$1(::jnihelper::proxy::java::util::O_Comparator arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1, ::jnihelper::proxy::java::util::O_Map$Entry arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$comparingByValue$827a17d5$1","(Ljava/util/Comparator;Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I");
    return env->CallStaticIntMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get());
}
//{_tag_}lambda$comparingByKey$6d558cbf$1(java.util.Comparator,java.util.Map$Entry,java.util.Map$Entry)int
::jint jnihelper::proxy::java::util::C_Map$Entry::m_lambda$comparingByKey$6d558cbf$1(::jnihelper::proxy::java::util::O_Comparator arg0, ::jnihelper::proxy::java::util::O_Map$Entry arg1, ::jnihelper::proxy::java::util::O_Map$Entry arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"lambda$comparingByKey$6d558cbf$1","(Ljava/util/Comparator;Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I");
    return env->CallStaticIntMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get());
}
//{_tag_}comparingByValue(java.util.Comparator)java.util.Comparator
::jnihelper::proxy::java::util::O_Comparator jnihelper::proxy::java::util::C_Map$Entry::m_comparingByValue(::jnihelper::proxy::java::util::O_Comparator arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"comparingByValue","(Ljava/util/Comparator;)Ljava/util/Comparator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Comparator;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get())};
}
