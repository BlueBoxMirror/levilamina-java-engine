#pragma once

#include "../util.h"
#include <jni.h>
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/Int64Tag.h"

#define JCLASS_TAG              PACK_JAVA_NAME("util/nbt/Tag")
#define JCLASS_COMPOUND_TAG     PACK_JAVA_NAME("util/nbt/TagCompound")
#define JCLASS_LIST_TAG         PACK_JAVA_NAME("util/nbt/TagList")
#define JCLASS_BYTE_TAG         PACK_JAVA_NAME("util/nbt/TagByte")
#define JCLASS_SHORT_TAG        PACK_JAVA_NAME("util/nbt/TagShort")
#define JCLASS_INT_TAG          PACK_JAVA_NAME("util/nbt/TagInt")
#define JCLASS_LONG_TAG         PACK_JAVA_NAME("util/nbt/TagLong")
#define JCLASS_FLOAT_TAG        PACK_JAVA_NAME("util/nbt/TagFloat")
#define JCLASS_DOUBLE_TAG       PACK_JAVA_NAME("util/nbt/TagDouble")
#define JCLASS_STRING_TAG       PACK_JAVA_NAME("util/nbt/TagString")
#define JCLASS_BYTEARRAY_TAG    PACK_JAVA_NAME("util/nbt/TagByteArray")
#define JCLASS_INTARRAY_TAG     PACK_JAVA_NAME("util/nbt/TagIntArray")
#define JCLASS_END_TAG          PACK_JAVA_NAME("util/nbt/TagEnd")

namespace lje{
    jobject newTagCompound(JNIEnv* env, const CompoundTag* compound);
    jobject newTagList(JNIEnv* env, const ListTag*      list);
    jobject newTagByte(JNIEnv* env, const ByteTag*      value);
    jobject newTagShort(JNIEnv* env, const ShortTag*    value);
    jobject newTagInt(JNIEnv* env, const IntTag*        value);
    jobject newTagLong(JNIEnv* env, const Int64Tag*     value);
    jobject newTagFloat(JNIEnv* env, const FloatTag*    value);
    jobject newTagDouble(JNIEnv* env, const DoubleTag*  value);
    jobject newTagString(JNIEnv* env, const StringTag*  value);
    jobject newTagByteArray(JNIEnv* env, const ByteArrayTag*  value);
    jobject newTagIntArray(JNIEnv* env, const IntArrayTag*  value);
    jobject newTagEnd(JNIEnv* env);

    void toNativeCompound (JNIEnv *,jobject, CompoundTag&);
    void toNativeList     (JNIEnv *,jobject, ListTag&);
    void toNativeByte     (JNIEnv *,jobject, ByteTag&);
    void toNativeShort    (JNIEnv *,jobject, ShortTag&);
    void toNativeInt      (JNIEnv *,jobject, IntTag&);
    void toNativeLong     (JNIEnv *,jobject, Int64Tag&);
    void toNativeFloat    (JNIEnv *,jobject, FloatTag&);
    void toNativeDouble   (JNIEnv *,jobject, DoubleTag&);
    void toNativeString   (JNIEnv *,jobject, StringTag&);
    void toNativeIntArray (JNIEnv *,jobject, IntArrayTag&);
    void toNativeByteArray(JNIEnv *,jobject, ByteArrayTag&);
    void toNativeEnd      (JNIEnv *,jobject, EndTag&);
}