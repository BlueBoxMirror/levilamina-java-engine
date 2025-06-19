// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/io/FilenameFilter.h"
#include "jnihelper/proxy/headers/jdk/internal/misc/Unsafe.h"
#include "jnihelper/proxy/headers/java/io/FileFilter.h"
#include "jnihelper/proxy/headers/java/net/URL.h"
#include "jnihelper/proxy/headers/java/io/File$PathStatus.h"
#include "jnihelper/proxy/headers/java/io/FileSystem.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/io/ObjectInputStream.h"
#include "jnihelper/proxy/headers/java/net/URI.h"
#include "jnihelper/proxy/headers/java/nio/file/Path.h"
#include "jnihelper/proxy/headers/java/io/ObjectOutputStream.h"
namespace jnihelper::proxy::java::io {

    class O_File: public ::jnihelper::JavaObject{
    public:
        O_File(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}path[setter]:java.lang.String
        void f_path(::jnihelper::proxy::java::lang::O_String value);
        //{_tag_}listFiles(java.io.FilenameFilter)[Ljava.io.File;
        ::jnihelper::Array<::jnihelper::proxy::java::io::O_File> m_listFiles(::jnihelper::proxy::java::io::O_FilenameFilter arg0);
        //{_tag_}setWritable(boolean)boolean
        ::jboolean m_setWritable(::jboolean arg0);
        //{_tag_}prefixLength[getter]:int
        ::jint f_prefixLength();
        //{_tag_}equals(java.lang.Object)boolean
        ::jboolean m_equals(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}renameTo(java.io.File)boolean
        ::jboolean m_renameTo(::jnihelper::proxy::java::io::O_File arg0);
        //{_tag_}getCanonicalFile()java.io.File
        ::jnihelper::proxy::java::io::O_File m_getCanonicalFile();
        //{_tag_}readObject(java.io.ObjectInputStream)void
        void m_readObject(::jnihelper::proxy::java::io::O_ObjectInputStream arg0);
        //{_tag_}mkdir()boolean
        ::jboolean m_mkdir();
        //{_tag_}list(java.io.FilenameFilter)[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_list(::jnihelper::proxy::java::io::O_FilenameFilter arg0);
        //{_tag_}setExecutable(boolean)boolean
        ::jboolean m_setExecutable(::jboolean arg0);
        //{_tag_}compareTo(java.lang.Object)int
        ::jint m_compareTo(::jnihelper::proxy::java::lang::O_Object arg0);
        //{_tag_}getTotalSpace()long
        ::jlong m_getTotalSpace();
        //{_tag_}deleteOnExit()void
        void m_deleteOnExit();
        //{_tag_}canRead()boolean
        ::jboolean m_canRead();
        //{_tag_}filePath[getter]:java.nio.file.Path
        ::jnihelper::proxy::java::nio::file::O_Path f_filePath();
        //{_tag_}setWritable(boolean,boolean)boolean
        ::jboolean m_setWritable(::jboolean arg0, ::jboolean arg1);
        //{_tag_}toPath()java.nio.file.Path
        ::jnihelper::proxy::java::nio::file::O_Path m_toPath();
        //{_tag_}toURI()java.net.URI
        ::jnihelper::proxy::java::net::O_URI m_toURI();
        //{_tag_}prefixLength[setter]:int
        void f_prefixLength(::jint value);
        //{_tag_}setExecutable(boolean,boolean)boolean
        ::jboolean m_setExecutable(::jboolean arg0, ::jboolean arg1);
        //{_tag_}hashCode()int
        ::jint m_hashCode();
        //{_tag_}isAbsolute()boolean
        ::jboolean m_isAbsolute();
        //{_tag_}setLastModified(long)boolean
        ::jboolean m_setLastModified(::jlong arg0);
        //{_tag_}status[getter]:java.io.File$PathStatus
        ::jnihelper::proxy::java::io::O_File$PathStatus f_status();
        //{_tag_}getUsableSpace()long
        ::jlong m_getUsableSpace();
        //{_tag_}isDirectory()boolean
        ::jboolean m_isDirectory();
        //{_tag_}status[setter]:java.io.File$PathStatus
        void f_status(::jnihelper::proxy::java::io::O_File$PathStatus value);
        //{_tag_}toURL()java.net.URL
        ::jnihelper::proxy::java::net::O_URL m_toURL();
        //{_tag_}getParentFile()java.io.File
        ::jnihelper::proxy::java::io::O_File m_getParentFile();
        //{_tag_}listFiles(java.io.FileFilter)[Ljava.io.File;
        ::jnihelper::Array<::jnihelper::proxy::java::io::O_File> m_listFiles(::jnihelper::proxy::java::io::O_FileFilter arg0);
        //{_tag_}filePath[setter]:java.nio.file.Path
        void f_filePath(::jnihelper::proxy::java::nio::file::O_Path value);
        //{_tag_}getName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getName();
        //{_tag_}getAbsoluteFile()java.io.File
        ::jnihelper::proxy::java::io::O_File m_getAbsoluteFile();
        //{_tag_}compareTo(java.io.File)int
        ::jint m_compareTo(::jnihelper::proxy::java::io::O_File arg0);
        //{_tag_}getAbsolutePath()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getAbsolutePath();
        //{_tag_}canExecute()boolean
        ::jboolean m_canExecute();
        //{_tag_}writeObject(java.io.ObjectOutputStream)void
        void m_writeObject(::jnihelper::proxy::java::io::O_ObjectOutputStream arg0);
        //{_tag_}isHidden()boolean
        ::jboolean m_isHidden();
        //{_tag_}isInvalid()boolean
        ::jboolean m_isInvalid();
        //{_tag_}getPath()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getPath();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}list()[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_list();
        //{_tag_}createNewFile()boolean
        ::jboolean m_createNewFile();
        //{_tag_}getPrefixLength()int
        ::jint m_getPrefixLength();
        //{_tag_}lastModified()long
        ::jlong m_lastModified();
        //{_tag_}isFile()boolean
        ::jboolean m_isFile();
        //{_tag_}exists()boolean
        ::jboolean m_exists();
        //{_tag_}path[getter]:java.lang.String
        ::jnihelper::proxy::java::lang::O_String f_path();
        //{_tag_}normalizedList()[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_normalizedList();
        //{_tag_}length()long
        ::jlong m_length();
        //{_tag_}listFiles()[Ljava.io.File;
        ::jnihelper::Array<::jnihelper::proxy::java::io::O_File> m_listFiles();
        //{_tag_}setReadable(boolean)boolean
        ::jboolean m_setReadable(::jboolean arg0);
        //{_tag_}getCanonicalPath()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getCanonicalPath();
        //{_tag_}getParent()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getParent();
        //{_tag_}getFreeSpace()long
        ::jlong m_getFreeSpace();
        //{_tag_}canWrite()boolean
        ::jboolean m_canWrite();
        //{_tag_}delete()boolean
        ::jboolean m_delete();
        //{_tag_}setReadOnly()boolean
        ::jboolean m_setReadOnly();
        //{_tag_}setReadable(boolean,boolean)boolean
        ::jboolean m_setReadable(::jboolean arg0, ::jboolean arg1);
        //{_tag_}mkdirs()boolean
        ::jboolean m_mkdirs();
    };
    
    class C_File: public JavaClass<O_File>{
    public:
        C_File(::jnihelper::Env& env);
        //{_static_}
        //{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_static_}//{_tag_}pathSeparatorChar[getter]:char
        ::jchar f_pathSeparatorChar();
        //{_tag_}UNSAFE[getter]:jdk.internal.misc.Unsafe
        ::jnihelper::proxy::jdk::internal::misc::O_Unsafe f_UNSAFE();
        //{_tag_}PATH_OFFSET[setter]:long
        void f_PATH_OFFSET(::jlong value);
        //{_tag_}<init>(java.lang.String)java.io.File
        ::jnihelper::proxy::java::io::O_File newObj(::jnihelper::proxy::java::lang::O_String arg0);
        //{_tag_}<init>(java.net.URI)java.io.File
        ::jnihelper::proxy::java::io::O_File newObj(::jnihelper::proxy::java::net::O_URI arg0);
        //{_tag_}fs[getter]:java.io.FileSystem
        ::jnihelper::proxy::java::io::O_FileSystem f_fs();
        //{_tag_}PREFIX_LENGTH_OFFSET[getter]:long
        ::jlong f_PREFIX_LENGTH_OFFSET();
        //{_tag_}separatorChar[getter]:char
        ::jchar f_separatorChar();
        //{_tag_}serialVersionUID[setter]:long
        void f_serialVersionUID(::jlong value);
        //{_tag_}listRoots()[Ljava.io.File;
        ::jnihelper::Array<::jnihelper::proxy::java::io::O_File> m_listRoots();
        //{_tag_}slashify(java.lang.String,boolean)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_slashify(::jnihelper::proxy::java::lang::O_String arg0, ::jboolean arg1);
        //{_tag_}fs[setter]:java.io.FileSystem
        void f_fs(::jnihelper::proxy::java::io::O_FileSystem value);
        //{_tag_}<init>(java.io.File,java.lang.String)java.io.File
        ::jnihelper::proxy::java::io::O_File newObj(::jnihelper::proxy::java::io::O_File arg0, ::jnihelper::proxy::java::lang::O_String arg1);
        //{_tag_}$assertionsDisabled[setter]:boolean
        void f_$assertionsDisabled(::jboolean value);
        //{_tag_}UNSAFE[setter]:jdk.internal.misc.Unsafe
        void f_UNSAFE(::jnihelper::proxy::jdk::internal::misc::O_Unsafe value);
        //{_tag_}<init>(java.lang.String,java.lang.String)java.io.File
        ::jnihelper::proxy::java::io::O_File newObj(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::lang::O_String arg1);
        //{_tag_}pathSeparatorChar[setter]:char
        void f_pathSeparatorChar(::jchar value);
        //{_tag_}$assertionsDisabled[getter]:boolean
        ::jboolean f_$assertionsDisabled();
        //{_tag_}createTempFile(java.lang.String,java.lang.String)java.io.File
        ::jnihelper::proxy::java::io::O_File m_createTempFile(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::lang::O_String arg1);
        //{_tag_}pathSeparator[getter]:java.lang.String
        ::jnihelper::proxy::java::lang::O_String f_pathSeparator();
        //{_tag_}PREFIX_LENGTH_OFFSET[setter]:long
        void f_PREFIX_LENGTH_OFFSET(::jlong value);
        //{_tag_}serialVersionUID[getter]:long
        ::jlong f_serialVersionUID();
        //{_tag_}createTempFile(java.lang.String,java.lang.String,java.io.File)java.io.File
        ::jnihelper::proxy::java::io::O_File m_createTempFile(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::lang::O_String arg1, ::jnihelper::proxy::java::io::O_File arg2);
        //{_tag_}<init>(java.lang.String,java.io.File)java.io.File
        ::jnihelper::proxy::java::io::O_File newObj(::jnihelper::proxy::java::lang::O_String arg0, ::jnihelper::proxy::java::io::O_File arg1);
        //{_tag_}<init>(java.lang.String,int)java.io.File
        ::jnihelper::proxy::java::io::O_File newObj(::jnihelper::proxy::java::lang::O_String arg0, ::jint arg1);
        //{_tag_}separatorChar[setter]:char
        void f_separatorChar(::jchar value);
        //{_tag_}separator[getter]:java.lang.String
        ::jnihelper::proxy::java::lang::O_String f_separator();
        //{_tag_}separator[setter]:java.lang.String
        void f_separator(::jnihelper::proxy::java::lang::O_String value);
        //{_tag_}pathSeparator[setter]:java.lang.String
        void f_pathSeparator(::jnihelper::proxy::java::lang::O_String value);
        //{_tag_}PATH_OFFSET[getter]:long
        ::jlong f_PATH_OFFSET();
    };
    
}