// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/Locale.h"
#include "jnihelper/proxy/headers/java/util/function/Function.h"
#include "jnihelper/proxy/headers/java/lang/invoke/MethodHandles$Lookup.h"
#include "jnihelper/proxy/headers/java/io/ObjectStreamField.h"
#include "jnihelper/proxy/headers/java/lang/Void.h"
#include "jnihelper/proxy/headers/java/lang/StringBuffer.h"
#include "jnihelper/proxy/headers/java/lang/CharSequence.h"
#include "jnihelper/proxy/headers/java/nio/charset/CharsetDecoder.h"
//#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/util/Comparator.h"
#include "jnihelper/proxy/headers/java/util/Optional.h"
#include "jnihelper/proxy/headers/java/lang/AbstractStringBuilder.h"
#include "jnihelper/proxy/headers/java/util/stream/IntStream.h"
#include "jnihelper/proxy/headers/java/lang/Iterable.h"
#include "jnihelper/proxy/headers/java/nio/charset/Charset.h"
#include "jnihelper/proxy/headers/java/util/stream/Stream.h"
#include "jnihelper/proxy/headers/java/util/List.h"
#include "jnihelper/proxy/headers/java/lang/StringBuilder.h"
#include "jnihelper/proxy/headers/java/lang/foreign/MemorySegment.h"

namespace jnihelper::proxy::java::lang{ class O_Object; }

namespace jnihelper::proxy::java::lang {
    //class O_Object;

    class O_String: public ::jnihelper::JavaObject{
    public:
        O_String(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        std::string getValue();
        //{_instance_}

        //{_tag_}split(java.lang.String,int,boolean)[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_split(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1, ::jboolean _arg2);
        //{_tag_}bytesCompatible(java.nio.charset.Charset)boolean
        ::jboolean m_bytesCompatible(::jnihelper::proxy::java::nio::charset::O_Charset _arg0);
        //{_tag_}copyToSegmentRaw(java.lang.foreign.MemorySegment,long)void
        void m_copyToSegmentRaw(::jnihelper::proxy::java::lang::foreign::O_MemorySegment _arg0, ::jlong _arg1);
        //{_tag_}splitWithDelimiters(java.lang.String,int)[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_splitWithDelimiters(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1);
        //{_tag_}split(char,int,boolean)[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_split(::jchar _arg0, ::jint _arg1, ::jboolean _arg2);
        //{_tag_}indexOf(java.lang.String,int,int)int
        ::jint m_indexOf(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}indexOf(int,int,int)int
        ::jint m_indexOf(::jint _arg0, ::jint _arg1, ::jint _arg2);
//{_tag_}value[getter]:[B
        ::jnihelper::ByteArray f_value();
        //{_tag_}hash[getter]:int
        ::jint f_hash();
        //{_tag_}getBytes(int,int,[B,int)void
        void m_getBytes(::jint _arg0, ::jint _arg1, ::jnihelper::ByteArray _arg2, ::jint _arg3);
        //{_tag_}coder()byte
        ::jbyte m_coder();
        //{_tag_}replace(java.lang.CharSequence,java.lang.CharSequence)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_replace(::jnihelper::proxy::java::lang::O_CharSequence _arg0, ::jnihelper::proxy::java::lang::O_CharSequence _arg1);
        //{_tag_}isLatin1()boolean
        ::jboolean m_isLatin1();
        //{_tag_}equalsIgnoreCase(java.lang.String)boolean
        ::jboolean m_equalsIgnoreCase(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}replaceAll(java.lang.String,java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_replaceAll(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1);
        //{_tag_}indexOfNonWhitespace()int
        ::jint m_indexOfNonWhitespace();
        //{_tag_}indent(int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_indent(::jint _arg0);
        //{_tag_}regionMatches(int,java.lang.String,int,int)boolean
        ::jboolean m_regionMatches(::jint _arg0, ::jnihelper::proxy::java::lang::O_String _arg1, ::jint _arg2, ::jint _arg3);
        //{_tag_}stripTrailing()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_stripTrailing();
        //{_tag_}contentEquals(java.lang.CharSequence)boolean
        ::jboolean m_contentEquals(::jnihelper::proxy::java::lang::O_CharSequence _arg0);
        //{_tag_}formatted([Ljava.lang.Object;)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_formatted(::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _arg0);
        //{_tag_}resolveConstantDesc(java.lang.invoke.MethodHandles$Lookup)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_resolveConstantDesc(::jnihelper::proxy::java::lang::invoke::O_MethodHandles$Lookup _arg0);
        //{_tag_}hashIsZero[getter]:boolean
        ::jboolean f_hashIsZero();
        //{_tag_}replaceFirst(java.lang.String,java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_replaceFirst(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1);
        //{_tag_}resolveConstantDesc(java.lang.invoke.MethodHandles$Lookup)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m1_resolveConstantDesc(::jnihelper::proxy::java::lang::invoke::O_MethodHandles$Lookup _arg0);
        //{_tag_}repeat(int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_repeat(::jint _arg0);
        //{_tag_}trim()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_trim();
        //{_tag_}charAt(int)char
        ::jchar m_charAt(::jint _arg0);
        //{_tag_}subSequence(int,int)java.lang.CharSequence
        ::jnihelper::proxy::java::lang::O_CharSequence m_subSequence(::jint _arg0, ::jint _arg1);
        //{_tag_}toLowerCase(java.util.Locale)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toLowerCase(::jnihelper::proxy::java::util::O_Locale _arg0);
        //{_tag_}getChars(int,int,[C,int)void
        void m_getChars(::jint _arg0, ::jint _arg1, ::jnihelper::CharArray _arg2, ::jint _arg3);
        //{_tag_}transform(java.util.function.Function)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_transform(::jnihelper::proxy::java::util::function::O_Function _arg0);
        //{_tag_}lastIndexOf(int)int
        ::jint m_lastIndexOf(::jint _arg0);
        //{_tag_}strip()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_strip();
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}value[setter]:[B
        void f_value(::jnihelper::ByteArray value);
        //{_tag_}substring(int,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_substring(::jint _arg0, ::jint _arg1);
        //{_tag_}codePointCount(int,int)int
        ::jint m_codePointCount(::jint _arg0, ::jint _arg1);
        //{_tag_}codePointAt(int)int
        ::jint m_codePointAt(::jint _arg0);
        //{_tag_}codePoints()java.util.stream.IntStream
        ::jnihelper::proxy::java::util::stream::O_IntStream m_codePoints();
        //{_tag_}split(java.lang.String,int)[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_split(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1);
        //{_tag_}indexOf(int)int
        ::jint m_indexOf(::jint _arg0);
        //{_tag_}coder[getter]:byte
        ::jbyte f_coder();
        //{_tag_}hash[setter]:int
        void f_hash(::jint value);
        //{_tag_}split(java.lang.String)[Ljava.lang.String;
        ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> m_split(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}isBlank()boolean
        ::jboolean m_isBlank();
        //{_tag_}lastIndexOf(int,int)int
        ::jint m_lastIndexOf(::jint _arg0, ::jint _arg1);
        //{_tag_}value()[B
        ::jnihelper::ByteArray m_value();
        //{_tag_}substring(int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_substring(::jint _arg0);
        //{_tag_}codePointBefore(int)int
        ::jint m_codePointBefore(::jint _arg0);
        //{_tag_}chars()java.util.stream.IntStream
        ::jnihelper::proxy::java::util::stream::O_IntStream m_chars();
        //{_tag_}regionMatches(boolean,int,java.lang.String,int,int)boolean
        ::jboolean m_regionMatches(::jboolean _arg0, ::jint _arg1, ::jnihelper::proxy::java::lang::O_String _arg2, ::jint _arg3, ::jint _arg4);
        //{_tag_}getBytes([B,int,byte)void
        void m_getBytes(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jbyte _arg2);
        //{_tag_}describeConstable()java.util.Optional
        ::jnihelper::proxy::java::util::O_Optional m_describeConstable();
        //{_tag_}coder[setter]:byte
        void f_coder(::jbyte value);
        //{_tag_}lastIndexOfNonWhitespace()int
        ::jint m_lastIndexOfNonWhitespace();
        //{_tag_}replace(char,char)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_replace(::jchar _arg0, ::jchar _arg1);
        //{_tag_}indexOf(java.lang.String,int)int
        ::jint m_indexOf(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1);
        //{_tag_}contentEquals(java.lang.StringBuffer)boolean
        ::jboolean m_contentEquals(::jnihelper::proxy::java::lang::O_StringBuffer _arg0);
        //{_tag_}hashCode()int
        ::jint m_hashCode();
        //{_tag_}compareTo(java.lang.String)int
        ::jint m_compareTo(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}hashIsZero[setter]:boolean
        void f_hashIsZero(::jboolean value);
        //{_tag_}lastIndexOf(java.lang.String,int)int
        ::jint m_lastIndexOf(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1);
        //{_tag_}startsWith(java.lang.String,int)boolean
        ::jboolean m_startsWith(::jnihelper::proxy::java::lang::O_String _arg0, ::jint _arg1);
        //{_tag_}getBytes([B,int,int,byte,int)void
        void m_getBytes(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jbyte _arg3, ::jint _arg4);
        //{_tag_}toCharArray()[C
        ::jnihelper::CharArray m_toCharArray();
        //{_tag_}length()int
        ::jint m_length();
        //{_tag_}indexOf(int,int)int
        ::jint m_indexOf(::jint _arg0, ::jint _arg1);
        //{_tag_}getBytes(java.nio.charset.Charset)[B
        ::jnihelper::ByteArray m_getBytes(::jnihelper::proxy::java::nio::charset::O_Charset _arg0);
        //{_tag_}lines()java.util.stream.Stream
        ::jnihelper::proxy::java::util::stream::O_Stream m_lines();
        //{_tag_}translateEscapes()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_translateEscapes();
        //{_tag_}getBytes()[B
        ::jnihelper::ByteArray m_getBytes();
        //{_tag_}toLowerCase()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toLowerCase();
        //{_tag_}indexOf(java.lang.String)int
        ::jint m_indexOf(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}toUpperCase()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toUpperCase();
        //{_tag_}intern()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_intern();
        //{_tag_}compareTo(java.lang.Object)int
        ::jint m_compareTo(::jnihelper::proxy::java::lang::O_Object _arg0);
        //{_tag_}endsWith(java.lang.String)boolean
        ::jboolean m_endsWith(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}toUpperCase(java.util.Locale)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toUpperCase(::jnihelper::proxy::java::util::O_Locale _arg0);
        //{_tag_}matches(java.lang.String)boolean
        ::jboolean m_matches(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}offsetByCodePoints(int,int)int
        ::jint m_offsetByCodePoints(::jint _arg0, ::jint _arg1);
        //{_tag_}nonSyncContentEquals(java.lang.AbstractStringBuilder)boolean
        ::jboolean m_nonSyncContentEquals(::jnihelper::proxy::java::lang::O_AbstractStringBuilder _arg0);
        //{_tag_}contains(java.lang.CharSequence)boolean
        ::jboolean m_contains(::jnihelper::proxy::java::lang::O_CharSequence _arg0);
        //{_tag_}compareToIgnoreCase(java.lang.String)int
        ::jint m_compareToIgnoreCase(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}concat(java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_concat(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}stripLeading()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_stripLeading();
        //{_tag_}stripIndent()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_stripIndent();
        //{_tag_}isEmpty()boolean
        ::jboolean m_isEmpty();
        //{_tag_}equals(java.lang.Object)boolean
        ::jboolean m_equals(::jnihelper::proxy::java::lang::O_Object _arg0);
        //{_tag_}lastIndexOf(java.lang.String)int
        ::jint m_lastIndexOf(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}startsWith(java.lang.String)boolean
        ::jboolean m_startsWith(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}getBytes(java.lang.String)[B
        ::jnihelper::ByteArray m_getBytes(::jnihelper::proxy::java::lang::O_String _arg0);
    };
    class C_String: public ::jnihelper::JavaClass<O_String>{
        public:
        C_String(jnihelper::Env& env);
        O_String newObj(const std::string& str);
        //{_static_}
        //{_tag_}newStringUTF8NoRepl([B,int,int,boolean)java.lang.String
::jnihelper::proxy::java::lang::O_String m_newStringUTF8NoRepl(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jboolean _arg3);
//{_tag_}replaceNegatives([B,int)void
void m_replaceNegatives(::jnihelper::ByteArray _arg0, ::jint _arg1);
//{_tag_}lambda$stripIndent$0(int,java.lang.String)java.lang.String
::jnihelper::proxy::java::lang::O_String m_lambda$stripIndent$0(::jint _arg0, ::jnihelper::proxy::java::lang::O_String _arg1);
//{_tag_}checkBoundsOffCount(int,int,int)int
::jint m_checkBoundsOffCount(::jint _arg0, ::jint _arg1, ::jint _arg2);
//{_tag_}trimArray([B,int)[B
::jnihelper::ByteArray m_trimArray(::jnihelper::ByteArray _arg0, ::jint _arg1);
//{_tag_}<init>(java.nio.charset.Charset,[B,int,int)java.lang.String
::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::proxy::java::nio::charset::O_Charset _arg0, ::jnihelper::ByteArray _arg1, ::jint _arg2, ::jint _arg3);
//{_tag_}computeSizeUTF8_UTF16([B,boolean)long
::jlong m_computeSizeUTF8_UTF16(::jnihelper::ByteArray _arg0, ::jboolean _arg1);
//{_tag_}repeatCopyRest([B,int,int,int)void
void m_repeatCopyRest(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jint _arg3);
//{_tag_}lastIndexOf([B,byte,int,java.lang.String,int)int
        ::jint m_lastIndexOf(::jnihelper::ByteArray _arg0, ::jbyte _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_String _arg3, ::jint _arg4);
        //{_tag_}throwUnmappable([B)void
        void m_throwUnmappable(::jnihelper::ByteArray _arg0);
                //{_tag_}isMalformed4(int,int,int)boolean
        ::jboolean m_isMalformed4(::jint _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}indexOf([B,byte,int,java.lang.String,int)int
        ::jint m_indexOf(::jnihelper::ByteArray _arg0, ::jbyte _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_String _arg3, ::jint _arg4);
        //{_tag_}<init>(java.lang.StringBuilder)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::proxy::java::lang::O_StringBuilder _arg0);
        //{_tag_}outdent(java.util.List)int
        ::jint m_outdent(::jnihelper::proxy::java::util::O_List _arg0);
        //{_tag_}encode8859_1(byte,[B,boolean)[B
        ::jnihelper::ByteArray m_encode8859_1(::jbyte _arg0, ::jnihelper::ByteArray _arg1, ::jboolean _arg2);
        //{_tag_}valueOf(boolean)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jboolean _arg0);
        //{_tag_}<init>([I,int,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::IntArray _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}<init>([C)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::CharArray _arg0);
        //{_tag_}isASCII([B)boolean
        ::jboolean m_isASCII(::jnihelper::ByteArray _arg0);
        //{_tag_}valueOf(int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jint _arg0);
        //{_tag_}serialVersionUID[getter]:long
        ::jlong f_serialVersionUID();
        //{_tag_}valueOf(java.lang.Object)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jnihelper::proxy::java::lang::O_Object _arg0);
        //{_tag_}UTF16[getter]:byte
        ::jbyte f_UTF16();
        //{_tag_}<init>()java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj();
        //{_tag_}<init>(java.lang.AbstractStringBuilder,java.lang.Void)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::proxy::java::lang::O_AbstractStringBuilder _arg0, ::jnihelper::proxy::java::lang::O_Void _arg1);
        //{_tag_}valueOf(char)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jchar _arg0);
        //{_tag_}LATIN1[setter]:byte
        void f_LATIN1(::jbyte value);
        //{_tag_}lambda$indent$2(int,java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_lambda$indent$2(::jint _arg0, ::jnihelper::proxy::java::lang::O_String _arg1);
        //{_tag_}lambda$indent$0(java.lang.String,java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_lambda$indent$0(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1);
        //{_tag_}COMPACT_STRINGS[getter]:boolean
        ::jboolean f_COMPACT_STRINGS();
        //{_tag_}valueOf(long)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jlong _arg0);
        //{_tag_}scale(int,float)int
        ::jint m_scale(::jint _arg0, ::jfloat _arg1);
        //{_tag_}malformed3([B,int)int
        ::jint m_malformed3(::jnihelper::ByteArray _arg0, ::jint _arg1);
        //{_tag_}lookupCharset(java.lang.String)java.nio.charset.Charset
        ::jnihelper::proxy::java::nio::charset::O_Charset m_lookupCharset(::jnihelper::proxy::java::lang::O_String _arg0);
                //{_tag_}valueOf([C)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jnihelper::CharArray _arg0);
        //{_tag_}malformed4([B,int)int
        ::jint m_malformed4(::jnihelper::ByteArray _arg0, ::jint _arg1);
        //{_tag_}decode3(int,int,int)char
        ::jchar m_decode3(::jint _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}isMalformed3(int,int,int)boolean
        ::jboolean m_isMalformed3(::jint _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}encodeWithEncoder(java.nio.charset.Charset,byte,[B,boolean)[B
        ::jnihelper::ByteArray m_encodeWithEncoder(::jnihelper::proxy::java::nio::charset::O_Charset _arg0, ::jbyte _arg1, ::jnihelper::ByteArray _arg2, ::jboolean _arg3);
        //{_tag_}isMalformed4_2(int,int)boolean
        ::jboolean m_isMalformed4_2(::jint _arg0, ::jint _arg1);
        //{_tag_}<init>([B,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jint _arg1);
        //{_tag_}copyValueOf([C,int,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_copyValueOf(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}throwMalformed([B)void
        void m_throwMalformed(::jnihelper::ByteArray _arg0);
        //{_tag_}REPL[getter]:char
        ::jchar f_REPL();
                //{_tag_}valueOf(double)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jdouble _arg0);
        //{_tag_}valueOfCodePoint(int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOfCodePoint(::jint _arg0);
                //{_tag_}<init>([B)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0);
        //{_tag_}throwUnmappable(int)void
        void m_throwUnmappable(::jint _arg0);
        //{_tag_}encode(java.nio.charset.Charset,byte,[B)[B
        ::jnihelper::ByteArray m_encode(::jnihelper::proxy::java::nio::charset::O_Charset _arg0, ::jbyte _arg1, ::jnihelper::ByteArray _arg2);
        //{_tag_}LATIN1[getter]:byte
        ::jbyte f_LATIN1();
        //{_tag_}<init>([B,java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::lang::O_String _arg1);
        //{_tag_}checkOffset(int,int)void
        void m_checkOffset(::jint _arg0, ::jint _arg1);
        //{_tag_}isMalformed3_2(int,int)boolean
        ::jboolean m_isMalformed3_2(::jint _arg0, ::jint _arg1);
        //{_tag_}newStringNoRepl1([B,java.nio.charset.Charset)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_newStringNoRepl1(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1);
        //{_tag_}lambda$indent$1(java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_lambda$indent$1(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}throwMalformed(int,int)void
        void m_throwMalformed(::jint _arg0, ::jint _arg1);
        //{_tag_}join(java.lang.String,java.lang.String,java.lang.String,[Ljava.lang.String;,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_join(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::lang::O_String _arg1, ::jnihelper::proxy::java::lang::O_String _arg2, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_String> _arg3, ::jint _arg4);
        //{_tag_}decodeUTF8_UTF16([B,int,int,[B,int,boolean)int
        ::jint m_decodeUTF8_UTF16(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::ByteArray _arg3, ::jint _arg4, ::jboolean _arg5);
        //{_tag_}CASE_INSENSITIVE_ORDER[getter]:java.util.Comparator
        ::jnihelper::proxy::java::util::O_Comparator f_CASE_INSENSITIVE_ORDER();
        //{_tag_}format(java.util.Locale,java.lang.String,[Ljava.lang.Object;)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_format(::jnihelper::proxy::java::util::O_Locale _arg0, ::jnihelper::proxy::java::lang::O_String _arg1, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _arg2);
        //{_tag_}join(java.lang.CharSequence,java.lang.Iterable)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_join(::jnihelper::proxy::java::lang::O_CharSequence _arg0, ::jnihelper::proxy::java::lang::O_Iterable _arg1);
        //{_tag_}<init>([C,int,int,java.lang.Void)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_Void _arg3);
        //{_tag_}encodeUTF8(byte,[B,boolean)[B
        ::jnihelper::ByteArray m_encodeUTF8(::jbyte _arg0, ::jnihelper::ByteArray _arg1, ::jboolean _arg2);
        //{_tag_}getBytesUTF8NoRepl(java.lang.String)[B
        ::jnihelper::ByteArray m_getBytesUTF8NoRepl(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}REPL[setter]:char
        void f_REPL(::jchar value);
        //{_tag_}getBytesNoRepl(java.lang.String,java.nio.charset.Charset)[B
        ::jnihelper::ByteArray m_getBytesNoRepl(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1);
        //{_tag_}newStringNoRepl([B,java.nio.charset.Charset)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_newStringNoRepl(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1);
        //{_tag_}<init>([B,int,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}<init>([B,byte)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jbyte _arg1);
        //{_tag_}decodeWithDecoder(java.nio.charset.CharsetDecoder,[C,[B,int,int)int
        ::jint m_decodeWithDecoder(::jnihelper::proxy::java::nio::charset::O_CharsetDecoder _arg0, ::jnihelper::CharArray _arg1, ::jnihelper::ByteArray _arg2, ::jint _arg3, ::jint _arg4);
        //{_tag_}serialPersistentFields[getter]:[Ljava.io.ObjectStreamField;
        ::jnihelper::Array<::jnihelper::proxy::java::io::O_ObjectStreamField> f_serialPersistentFields();
        //{_tag_}COMPACT_STRINGS[setter]:boolean
        void f_COMPACT_STRINGS(::jboolean value);
        //{_tag_}encodeASCII(byte,[B)[B
        ::jnihelper::ByteArray m_encodeASCII(::jbyte _arg0, ::jnihelper::ByteArray _arg1);
        //{_tag_}isNotContinuation(int)boolean
        ::jboolean m_isNotContinuation(::jint _arg0);
        //{_tag_}serialPersistentFields[setter]:[Ljava.io.ObjectStreamField;
        void f_serialPersistentFields(::jnihelper::Array<::jnihelper::proxy::java::io::O_ObjectStreamField> value);
        //{_tag_}isMalformed4_3(int)boolean
        ::jboolean m_isMalformed4_3(::jint _arg0);
        //{_tag_}decode2(int,int)char
        ::jchar m_decode2(::jint _arg0, ::jint _arg1);
        //{_tag_}<init>([B,java.nio.charset.Charset)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1);
        //{_tag_}<init>(java.lang.StringBuffer)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::proxy::java::lang::O_StringBuffer _arg0);
        //{_tag_}encode8859_1(byte,[B)[B
        ::jnihelper::ByteArray m_encode8859_1(::jbyte _arg0, ::jnihelper::ByteArray _arg1);
        //{_tag_}<init>(java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::proxy::java::lang::O_String _arg0);
        //{_tag_}<init>([B,int,int,java.lang.String)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::proxy::java::lang::O_String _arg3);
        //{_tag_}encodeUTF8_UTF16([B,boolean)[B
        ::jnihelper::ByteArray m_encodeUTF8_UTF16(::jnihelper::ByteArray _arg0, ::jboolean _arg1);
        //{_tag_}valueOf([C,int,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}UTF16[setter]:byte
        void f_UTF16(::jbyte value);
        //{_tag_}<init>([C,int,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}checkBoundsBeginEnd(int,int,int)void
        void m_checkBoundsBeginEnd(::jint _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}getBytesNoRepl1(java.lang.String,java.nio.charset.Charset)[B
        ::jnihelper::ByteArray m_getBytesNoRepl1(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::proxy::java::nio::charset::O_Charset _arg1);
        //{_tag_}decodeASCII([B,int,[C,int,int)int
        ::jint m_decodeASCII(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jnihelper::CharArray _arg2, ::jint _arg3, ::jint _arg4);
        //{_tag_}format(java.lang.String,[Ljava.lang.Object;)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_format(::jnihelper::proxy::java::lang::O_String _arg0, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_Object> _arg1);
        //{_tag_}checkIndex(int,int)void
        void m_checkIndex(::jint _arg0, ::jint _arg1);
        //{_tag_}CASE_INSENSITIVE_ORDER[setter]:java.util.Comparator
        void f_CASE_INSENSITIVE_ORDER(::jnihelper::proxy::java::util::O_Comparator value);
        //{_tag_}serialVersionUID[setter]:long
        void f_serialVersionUID(::jlong value);
        //{_tag_}<init>([B,int,int,int)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jint _arg3);
        //{_tag_}rangeCheck([C,int,int)java.lang.Void
        ::jnihelper::proxy::java::lang::O_Void m_rangeCheck(::jnihelper::CharArray _arg0, ::jint _arg1, ::jint _arg2);
        //{_tag_}join(java.lang.CharSequence,[Ljava.lang.CharSequence;)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_join(::jnihelper::proxy::java::lang::O_CharSequence _arg0, ::jnihelper::Array<::jnihelper::proxy::java::lang::O_CharSequence> _arg1);
        //{_tag_}decode4(int,int,int,int)int
        ::jint m_decode4(::jint _arg0, ::jint _arg1, ::jint _arg2, ::jint _arg3);
        //{_tag_}valueOf(float)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_valueOf(::jfloat _arg0);
        //{_tag_}<init>([B,int,int,java.nio.charset.Charset)java.lang.String
        ::jnihelper::proxy::java::lang::O_String newObj(::jnihelper::ByteArray _arg0, ::jint _arg1, ::jint _arg2, ::jnihelper::proxy::java::nio::charset::O_Charset _arg3);
        //{_tag_}copyValueOf([C)java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_copyValueOf(::jnihelper::CharArray _arg0);
    };
}