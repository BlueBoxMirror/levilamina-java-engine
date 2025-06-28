// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Set.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::util::O_Set>(){
    return "Ljava/util/Set;";
}
jnihelper::proxy::java::util::O_Set::O_Set(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::util::C_Set::C_Set(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::util::O_Set>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}iterator()java.util.Iterator
::jnihelper::proxy::java::util::O_Iterator jnihelper::proxy::java::util::O_Set::m_iterator(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"iterator","()Ljava/util/Iterator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Iterator;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}contains(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_contains(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"contains","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}equals(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_equals(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"equals","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}isEmpty()boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_isEmpty(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isEmpty","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}removeAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_removeAll(::jnihelper::proxy::java::util::O_Collection arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"removeAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}hashCode()int
::jint jnihelper::proxy::java::util::O_Set::m_hashCode(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"hashCode","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}spliterator()java.util.Spliterator
::jnihelper::proxy::java::util::O_Spliterator jnihelper::proxy::java::util::O_Set::m_spliterator(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"spliterator","()Ljava/util/Spliterator;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Spliterator;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toArray()[Ljava.lang.Object;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> jnihelper::proxy::java::util::O_Set::m_toArray(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toArray","()[Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}retainAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_retainAll(::jnihelper::proxy::java::util::O_Collection arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"retainAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}addAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_addAll(::jnihelper::proxy::java::util::O_Collection arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"addAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}toArray([Ljava.lang.Object;)[Ljava.lang.Object;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> jnihelper::proxy::java::util::O_Set::m_toArray(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toArray","([Ljava/lang/Object;)[Ljava/lang/Object;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/Object;")),env->CallObjectMethod(jobj,jmid,arg0.get())};
}
//{_tag_}remove(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_remove(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"remove","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}containsAll(java.util.Collection)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_containsAll(::jnihelper::proxy::java::util::O_Collection arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"containsAll","(Ljava/util/Collection;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}clear()void
void jnihelper::proxy::java::util::O_Set::m_clear(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"clear","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}add(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::util::O_Set::m_add(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"add","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}size()int
::jint jnihelper::proxy::java::util::O_Set::m_size(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"size","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get())};
}
//{_tag_}of([Ljava.lang.Object;)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","([Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get())};
}
//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get(),arg3.get(),arg4.get(),arg5.get(),arg6.get())};
}
//{_tag_}of(java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get())};
}
//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get(),arg3.get(),arg4.get(),arg5.get())};
}
//{_tag_}of(java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get())};
}
//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get(),arg3.get())};
}
//{_tag_}of()java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","()Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6, ::jnihelper::proxy::java::lang::O_Object arg7, ::jnihelper::proxy::java::lang::O_Object arg8, ::jnihelper::proxy::java::lang::O_Object arg9){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get(),arg3.get(),arg4.get(),arg5.get(),arg6.get(),arg7.get(),arg8.get(),arg9.get())};
}
//{_tag_}copyOf(java.util.Collection)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_copyOf(::jnihelper::proxy::java::util::O_Collection arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"copyOf","(Ljava/util/Collection;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get())};
}
//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6, ::jnihelper::proxy::java::lang::O_Object arg7, ::jnihelper::proxy::java::lang::O_Object arg8){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get(),arg3.get(),arg4.get(),arg5.get(),arg6.get(),arg7.get(),arg8.get())};
}
//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4, ::jnihelper::proxy::java::lang::O_Object arg5, ::jnihelper::proxy::java::lang::O_Object arg6, ::jnihelper::proxy::java::lang::O_Object arg7){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get(),arg3.get(),arg4.get(),arg5.get(),arg6.get(),arg7.get())};
}
//{_tag_}of(java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object,java.lang.Object)java.util.Set
::jnihelper::proxy::java::util::O_Set jnihelper::proxy::java::util::C_Set::m_of(::jnihelper::proxy::java::lang::O_Object arg0, ::jnihelper::proxy::java::lang::O_Object arg1, ::jnihelper::proxy::java::lang::O_Object arg2, ::jnihelper::proxy::java::lang::O_Object arg3, ::jnihelper::proxy::java::lang::O_Object arg4){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"of","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/util/Set;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get(),arg3.get(),arg4.get())};
}
