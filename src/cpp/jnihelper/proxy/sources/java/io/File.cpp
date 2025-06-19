// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/File.h"

template<>
constexpr inline const char* ::jnihelper::getFullName<jnihelper::proxy::java::io::O_File>(){
    return "Ljava/io/File;";
}
jnihelper::proxy::java::io::O_File::O_File(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal):
    ::jnihelper::JavaObject(cls,jobj,isGlobal){}
jnihelper::proxy::java::io::C_File::C_File(::jnihelper::Env& env):
    ::jnihelper::JavaClass<jnihelper::proxy::java::io::O_File>(env, env->FindClass(getFullName())){}

//{_instance_}
//{_tag_}path[setter]:java.lang.String
void jnihelper::proxy::java::io::O_File::f_path(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"path","Ljava/lang/String;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}listFiles(java.io.FilenameFilter)[Ljava.io.File;
::jnihelper::Array<::jnihelper::proxy::java::io::O_File> jnihelper::proxy::java::io::O_File::m_listFiles(::jnihelper::proxy::java::io::O_FilenameFilter arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"listFiles","(Ljava/io/FilenameFilter;)[Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/io/File;")),env->CallObjectMethod(jobj,jmid,arg0.get())};
}
//{_tag_}setWritable(boolean)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setWritable(::jboolean arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setWritable","(Z)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0);
}
//{_tag_}prefixLength[getter]:int
::jint jnihelper::proxy::java::io::O_File::f_prefixLength(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"prefixLength","I");
    return env->GetIntField(jobj,jfid);
}
//{_tag_}equals(java.lang.Object)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_equals(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"equals","(Ljava/lang/Object;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}renameTo(java.io.File)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_renameTo(::jnihelper::proxy::java::io::O_File arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"renameTo","(Ljava/io/File;)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0.get());
}
//{_tag_}getCanonicalFile()java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::O_File::m_getCanonicalFile(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getCanonicalFile","()Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}readObject(java.io.ObjectInputStream)void
void jnihelper::proxy::java::io::O_File::m_readObject(::jnihelper::proxy::java::io::O_ObjectInputStream arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"readObject","(Ljava/io/ObjectInputStream;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}mkdir()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_mkdir(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"mkdir","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}list(java.io.FilenameFilter)[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::io::O_File::m_list(::jnihelper::proxy::java::io::O_FilenameFilter arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"list","(Ljava/io/FilenameFilter;)[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid,arg0.get())};
}
//{_tag_}setExecutable(boolean)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setExecutable(::jboolean arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setExecutable","(Z)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0);
}
//{_tag_}compareTo(java.lang.Object)int
::jint jnihelper::proxy::java::io::O_File::m_compareTo(::jnihelper::proxy::java::lang::O_Object arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"compareTo","(Ljava/lang/Object;)I");
    return env->CallIntMethod(jobj,jmid,arg0.get());
}
//{_tag_}getTotalSpace()long
::jlong jnihelper::proxy::java::io::O_File::m_getTotalSpace(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getTotalSpace","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}deleteOnExit()void
void jnihelper::proxy::java::io::O_File::m_deleteOnExit(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"deleteOnExit","()V");
    env->CallVoidMethod(jobj,jmid);
}
//{_tag_}canRead()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_canRead(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"canRead","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}filePath[getter]:java.nio.file.Path
::jnihelper::proxy::java::nio::file::O_Path jnihelper::proxy::java::io::O_File::f_filePath(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"filePath","Ljava/nio/file/Path;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/nio/file/Path;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}setWritable(boolean,boolean)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setWritable(::jboolean arg0, ::jboolean arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setWritable","(ZZ)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0,arg1);
}
//{_tag_}toPath()java.nio.file.Path
::jnihelper::proxy::java::nio::file::O_Path jnihelper::proxy::java::io::O_File::m_toPath(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toPath","()Ljava/nio/file/Path;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/nio/file/Path;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toURI()java.net.URI
::jnihelper::proxy::java::net::O_URI jnihelper::proxy::java::io::O_File::m_toURI(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toURI","()Ljava/net/URI;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/net/URI;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}prefixLength[setter]:int
void jnihelper::proxy::java::io::O_File::f_prefixLength(::jint value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"prefixLength","I");
    env->SetIntField(jobj,jfid,value);
}
//{_tag_}setExecutable(boolean,boolean)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setExecutable(::jboolean arg0, ::jboolean arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setExecutable","(ZZ)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0,arg1);
}
//{_tag_}hashCode()int
::jint jnihelper::proxy::java::io::O_File::m_hashCode(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"hashCode","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}isAbsolute()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_isAbsolute(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isAbsolute","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}setLastModified(long)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setLastModified(::jlong arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setLastModified","(J)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0);
}
//{_tag_}status[getter]:java.io.File$PathStatus
::jnihelper::proxy::java::io::O_File$PathStatus jnihelper::proxy::java::io::O_File::f_status(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"status","Ljava/io/File$PathStatus;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File$PathStatus;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}getUsableSpace()long
::jlong jnihelper::proxy::java::io::O_File::m_getUsableSpace(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getUsableSpace","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}isDirectory()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_isDirectory(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isDirectory","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}status[setter]:java.io.File$PathStatus
void jnihelper::proxy::java::io::O_File::f_status(::jnihelper::proxy::java::io::O_File$PathStatus value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"status","Ljava/io/File$PathStatus;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}toURL()java.net.URL
::jnihelper::proxy::java::net::O_URL jnihelper::proxy::java::io::O_File::m_toURL(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toURL","()Ljava/net/URL;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/net/URL;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getParentFile()java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::O_File::m_getParentFile(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getParentFile","()Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}listFiles(java.io.FileFilter)[Ljava.io.File;
::jnihelper::Array<::jnihelper::proxy::java::io::O_File> jnihelper::proxy::java::io::O_File::m_listFiles(::jnihelper::proxy::java::io::O_FileFilter arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"listFiles","(Ljava/io/FileFilter;)[Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/io/File;")),env->CallObjectMethod(jobj,jmid,arg0.get())};
}
//{_tag_}filePath[setter]:java.nio.file.Path
void jnihelper::proxy::java::io::O_File::f_filePath(::jnihelper::proxy::java::nio::file::O_Path value){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"filePath","Ljava/nio/file/Path;");
    env->SetObjectField(jobj,jfid,value.get());
}
//{_tag_}getName()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::O_File::m_getName(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getName","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getAbsoluteFile()java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::O_File::m_getAbsoluteFile(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getAbsoluteFile","()Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}compareTo(java.io.File)int
::jint jnihelper::proxy::java::io::O_File::m_compareTo(::jnihelper::proxy::java::io::O_File arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"compareTo","(Ljava/io/File;)I");
    return env->CallIntMethod(jobj,jmid,arg0.get());
}
//{_tag_}getAbsolutePath()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::O_File::m_getAbsolutePath(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getAbsolutePath","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}canExecute()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_canExecute(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"canExecute","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}writeObject(java.io.ObjectOutputStream)void
void jnihelper::proxy::java::io::O_File::m_writeObject(::jnihelper::proxy::java::io::O_ObjectOutputStream arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"writeObject","(Ljava/io/ObjectOutputStream;)V");
    env->CallVoidMethod(jobj,jmid,arg0.get());
}
//{_tag_}isHidden()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_isHidden(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isHidden","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}isInvalid()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_isInvalid(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isInvalid","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}getPath()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::O_File::m_getPath(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getPath","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}toString()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::O_File::m_toString(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"toString","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}list()[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::io::O_File::m_list(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"list","()[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}createNewFile()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_createNewFile(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"createNewFile","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}getPrefixLength()int
::jint jnihelper::proxy::java::io::O_File::m_getPrefixLength(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getPrefixLength","()I");
    return env->CallIntMethod(jobj,jmid);
}
//{_tag_}lastModified()long
::jlong jnihelper::proxy::java::io::O_File::m_lastModified(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"lastModified","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}isFile()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_isFile(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"isFile","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}exists()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_exists(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"exists","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}path[getter]:java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::O_File::f_path(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jfieldID jfid=env->GetFieldID(cls.get(),"path","Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->GetObjectField(jobj,jfid)};
}
//{_tag_}normalizedList()[Ljava.lang.String;
::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> jnihelper::proxy::java::io::O_File::m_normalizedList(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"normalizedList","()[Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}length()long
::jlong jnihelper::proxy::java::io::O_File::m_length(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"length","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}listFiles()[Ljava.io.File;
::jnihelper::Array<::jnihelper::proxy::java::io::O_File> jnihelper::proxy::java::io::O_File::m_listFiles(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"listFiles","()[Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/io/File;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}setReadable(boolean)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setReadable(::jboolean arg0){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setReadable","(Z)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0);
}
//{_tag_}getCanonicalPath()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::O_File::m_getCanonicalPath(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getCanonicalPath","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getParent()java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::O_File::m_getParent(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getParent","()Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallObjectMethod(jobj,jmid)};
}
//{_tag_}getFreeSpace()long
::jlong jnihelper::proxy::java::io::O_File::m_getFreeSpace(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"getFreeSpace","()J");
    return env->CallLongMethod(jobj,jmid);
}
//{_tag_}canWrite()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_canWrite(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"canWrite","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}delete()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_delete(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"delete","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}setReadOnly()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setReadOnly(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setReadOnly","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_tag_}setReadable(boolean,boolean)boolean
::jboolean jnihelper::proxy::java::io::O_File::m_setReadable(::jboolean arg0, ::jboolean arg1){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"setReadable","(ZZ)Z");
    return env->CallBooleanMethod(jobj,jmid,arg0,arg1);
}
//{_tag_}mkdirs()boolean
::jboolean jnihelper::proxy::java::io::O_File::m_mkdirs(){
    ::jnihelper::Env& env=cls.getEnv();
    ::jobject jobj=get();
    ::jmethodID jmid=env->GetMethodID(cls.get(),"mkdirs","()Z");
    return env->CallBooleanMethod(jobj,jmid);
}
//{_static_}
//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}pathSeparatorChar[getter]:char
::jchar jnihelper::proxy::java::io::C_File::f_pathSeparatorChar(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"pathSeparatorChar","C");
    return env->GetStaticCharField(jcls,jfid);
}
//{_tag_}UNSAFE[getter]:jdk.internal.misc.Unsafe
::jnihelper::proxy::jdk::internal::misc::O_Unsafe jnihelper::proxy::java::io::C_File::f_UNSAFE(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"UNSAFE","Ljdk/internal/misc/Unsafe;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljdk/internal/misc/Unsafe;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}PATH_OFFSET[setter]:long
void jnihelper::proxy::java::io::C_File::f_PATH_OFFSET(::jlong value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"PATH_OFFSET","J");
    env->SetStaticLongField(jcls,jfid,value);
}
//{_tag_}<init>(java.lang.String)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::newObj(::jnihelper::proxy::java::lang::O_String arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,arg0.get())};
}
//{_tag_}<init>(java.net.URI)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::newObj(::jnihelper::proxy::java::net::O_URI arg0){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/net/URI;)V");
    return {impl,env->NewObject(jcls,jmid,arg0.get())};
}
//{_tag_}fs[getter]:java.io.FileSystem
::jnihelper::proxy::java::io::O_FileSystem jnihelper::proxy::java::io::C_File::f_fs(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"fs","Ljava/io/FileSystem;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/FileSystem;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}PREFIX_LENGTH_OFFSET[getter]:long
::jlong jnihelper::proxy::java::io::C_File::f_PREFIX_LENGTH_OFFSET(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"PREFIX_LENGTH_OFFSET","J");
    return env->GetStaticLongField(jcls,jfid);
}
//{_tag_}separatorChar[getter]:char
::jchar jnihelper::proxy::java::io::C_File::f_separatorChar(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"separatorChar","C");
    return env->GetStaticCharField(jcls,jfid);
}
//{_tag_}serialVersionUID[setter]:long
void jnihelper::proxy::java::io::C_File::f_serialVersionUID(::jlong value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"serialVersionUID","J");
    env->SetStaticLongField(jcls,jfid,value);
}
//{_tag_}listRoots()[Ljava.io.File;
::jnihelper::Array<::jnihelper::proxy::java::io::O_File> jnihelper::proxy::java::io::C_File::m_listRoots(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"listRoots","()[Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("[Ljava/io/File;")),env->CallStaticObjectMethod(jcls,jmid)};
}
//{_tag_}slashify(java.lang.String,boolean)java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::C_File::m_slashify(::jnihelper::proxy::java::lang::O_String arg0, ::jboolean arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"slashify","(Ljava/lang/String;Z)Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1)};
}
//{_tag_}fs[setter]:java.io.FileSystem
void jnihelper::proxy::java::io::C_File::f_fs(::jnihelper::proxy::java::io::O_FileSystem value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"fs","Ljava/io/FileSystem;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}<init>(java.io.File,java.lang.String)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::newObj(::jnihelper::proxy::java::io::O_File arg0, ::jnihelper::proxy::java::lang::O_String arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/io/File;Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,arg0.get(),arg1.get())};
}
//{_tag_}$assertionsDisabled[setter]:boolean
void jnihelper::proxy::java::io::C_File::f_$assertionsDisabled(::jboolean value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"$assertionsDisabled","Z");
    env->SetStaticBooleanField(jcls,jfid,value);
}
//{_tag_}UNSAFE[setter]:jdk.internal.misc.Unsafe
void jnihelper::proxy::java::io::C_File::f_UNSAFE(::jnihelper::proxy::jdk::internal::misc::O_Unsafe value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"UNSAFE","Ljdk/internal/misc/Unsafe;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}<init>(java.lang.String,java.lang.String)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::newObj(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::lang::O_String arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;Ljava/lang/String;)V");
    return {impl,env->NewObject(jcls,jmid,arg0.get(),arg1.get())};
}
//{_tag_}pathSeparatorChar[setter]:char
void jnihelper::proxy::java::io::C_File::f_pathSeparatorChar(::jchar value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"pathSeparatorChar","C");
    env->SetStaticCharField(jcls,jfid,value);
}
//{_tag_}$assertionsDisabled[getter]:boolean
::jboolean jnihelper::proxy::java::io::C_File::f_$assertionsDisabled(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"$assertionsDisabled","Z");
    return env->GetStaticBooleanField(jcls,jfid);
}
//{_tag_}createTempFile(java.lang.String,java.lang.String)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::m_createTempFile(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::lang::O_String arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"createTempFile","(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get())};
}
//{_tag_}pathSeparator[getter]:java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::C_File::f_pathSeparator(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"pathSeparator","Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}PREFIX_LENGTH_OFFSET[setter]:long
void jnihelper::proxy::java::io::C_File::f_PREFIX_LENGTH_OFFSET(::jlong value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"PREFIX_LENGTH_OFFSET","J");
    env->SetStaticLongField(jcls,jfid,value);
}
//{_tag_}serialVersionUID[getter]:long
::jlong jnihelper::proxy::java::io::C_File::f_serialVersionUID(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"serialVersionUID","J");
    return env->GetStaticLongField(jcls,jfid);
}
//{_tag_}createTempFile(java.lang.String,java.lang.String,java.io.File)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::m_createTempFile(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::lang::O_String arg1, ::jnihelper::proxy::java::io::O_File arg2){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetStaticMethodID(jcls,"createTempFile","(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/io/File;")),env->CallStaticObjectMethod(jcls,jmid,arg0.get(),arg1.get(),arg2.get())};
}
//{_tag_}<init>(java.lang.String,java.io.File)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::newObj(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::io::O_File arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;Ljava/io/File;)V");
    return {impl,env->NewObject(jcls,jmid,arg0.get(),arg1.get())};
}
//{_tag_}<init>(java.lang.String,int)java.io.File
::jnihelper::proxy::java::io::O_File jnihelper::proxy::java::io::C_File::newObj(::jnihelper::proxy::java::lang::O_String arg0, ::jint arg1){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jmethodID jmid=env->GetMethodID(jcls,"<init>","(Ljava/lang/String;I)V");
    return {impl,env->NewObject(jcls,jmid,arg0.get(),arg1)};
}
//{_tag_}separatorChar[setter]:char
void jnihelper::proxy::java::io::C_File::f_separatorChar(::jchar value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"separatorChar","C");
    env->SetStaticCharField(jcls,jfid,value);
}
//{_tag_}separator[getter]:java.lang.String
::jnihelper::proxy::java::lang::O_String jnihelper::proxy::java::io::C_File::f_separator(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"separator","Ljava/lang/String;");
    return {::jnihelper::JavaClassSupplier(env,env->FindClass("Ljava/lang/String;")),env->GetStaticObjectField(jcls,jfid)};
}
//{_tag_}separator[setter]:java.lang.String
void jnihelper::proxy::java::io::C_File::f_separator(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"separator","Ljava/lang/String;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}pathSeparator[setter]:java.lang.String
void jnihelper::proxy::java::io::C_File::f_pathSeparator(::jnihelper::proxy::java::lang::O_String value){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"pathSeparator","Ljava/lang/String;");
    env->SetStaticObjectField(jcls,jfid,value.get());
}
//{_tag_}PATH_OFFSET[getter]:long
::jlong jnihelper::proxy::java::io::C_File::f_PATH_OFFSET(){
    ::jnihelper::Env& env=impl.getEnv();
    ::jclass jcls=get();
    ::jfieldID jfid=env->GetStaticFieldID(jcls,"PATH_OFFSET","J");
    return env->GetStaticLongField(jcls,jfid);
}
