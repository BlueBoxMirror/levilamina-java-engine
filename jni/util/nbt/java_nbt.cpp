#include "java_nbt.h"
#include "jni.h"
#include "jni_md.h"
#include "mc/nbt/ByteArrayTag.h"
#include "mc/nbt/ByteTag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/CompoundTagVariant.h"
#include "mc/nbt/Int64Tag.h"
#include "mc/nbt/StringTag.h"
#include "../util.h"
#include <memory>


namespace lje{
jobject newTagCompound(JNIEnv* env, const CompoundTag* compound){
    jclass jclass_NbtCompound=env->FindClass(JCLASS_COMPOUND_TAG);
    jmethodID jmethod_NbtCompound_init=env->GetMethodID(jclass_NbtCompound,"<init>","()V");
    jobject jobject_native_compound=env->NewObject(jclass_NbtCompound,jmethod_NbtCompound_init);
    jmethodID jmethod_NbtCompound_put=env->GetMethodID(jclass_NbtCompound,"put","(" JCLASS_String JCLASS_TAG ")" JCLASS_TAG );
    for(auto it=compound->begin();it!=compound->end();++it){
        const std::string& key=it->first;
        const Tag& tag=it->second.get();
        jstring jstring_native_key=env->NewStringUTF(key.c_str());
        jobject jobject_native_note=nullptr;
        switch(tag.getId()){
            case Tag::Compound:
                jobject_native_note=newTagCompound(env,tag.as_ptr<CompoundTag>());
            break;
            case Tag::List:
                jobject_native_note=newTagList(env,tag.as_ptr<ListTag>());
            break;
            case Tag::Byte:
                jobject_native_note=newTagByte(env,tag.as_ptr<ByteTag>());
            break;
            case Tag::Short:
                jobject_native_note=newTagShort(env,tag.as_ptr<ShortTag>());
            break;
            case Tag::Int:
                jobject_native_note=newTagInt(env,tag.as_ptr<IntTag>());
            break;
            case Tag::Int64:
                jobject_native_note=newTagLong(env,tag.as_ptr<Int64Tag>());
            break;
            case Tag::Float:
                jobject_native_note=newTagFloat(env,tag.as_ptr<FloatTag>());
            break;
            case Tag::Double:
                jobject_native_note=newTagDouble(env,tag.as_ptr<DoubleTag>());
            break;
            case Tag::String:
                jobject_native_note=newTagString(env,tag.as_ptr<StringTag>());
            break;
            case Tag::ByteArray:
                jobject_native_note=newTagByteArray(env,tag.as_ptr<ByteArrayTag>());
            break;
            case Tag::IntArray:
                jobject_native_note=newTagIntArray(env,tag.as_ptr<IntArrayTag>());
            break;
            case Tag::End:
            default:
                jobject_native_note=newTagEnd(env);
            break;
        }
        env->CallObjectMethod(jobject_native_compound,jmethod_NbtCompound_put,jstring_native_key,jobject_native_note);
        env->DeleteLocalRef(jstring_native_key);
        env->DeleteLocalRef(jobject_native_note);
    }
    return jobject_native_compound;
}

jobject newTagList(JNIEnv* env, const ListTag* list){
    jclass jclass_NbtList=env->FindClass(JCLASS_LIST_TAG);
    jmethodID jmethod_NbtList_init=env->GetMethodID(jclass_NbtList,"<init>","()V");
    jobject jobject_native_list=env->NewObject(jclass_NbtList,jmethod_NbtList_init);
    jmethodID jmethod_NbtList_add=env->GetMethodID(jclass_NbtList,"add","(" JCLASS_TAG ")Z");
    for(auto it=list->begin();it!=list->end();++it){
        const Tag* tag=it->get();
        jobject jobject_native_note=nullptr;
        switch(tag->getId()){
            case Tag::Compound:
                jobject_native_note=newTagCompound(env,tag->as_ptr<CompoundTag>());
            break;
            case Tag::List:
                jobject_native_note=newTagList(env,tag->as_ptr<ListTag>());
            break;
            case Tag::Byte:
                jobject_native_note=newTagByte(env,tag->as_ptr<ByteTag>());
            break;
            case Tag::Short:
                jobject_native_note=newTagShort(env,tag->as_ptr<ShortTag>());
            break;
            case Tag::Int:
                jobject_native_note=newTagInt(env,tag->as_ptr<IntTag>());
            break;
            case Tag::Int64:
                jobject_native_note=newTagLong(env,tag->as_ptr<Int64Tag>());
            break;
            case Tag::Float:
                jobject_native_note=newTagFloat(env,tag->as_ptr<FloatTag>());
            break;
            case Tag::Double:
                jobject_native_note=newTagDouble(env,tag->as_ptr<DoubleTag>());
            break;
            case Tag::String:
                jobject_native_note=newTagString(env,tag->as_ptr<StringTag>());
            break;
            case Tag::ByteArray:
                jobject_native_note=newTagByteArray(env,tag->as_ptr<ByteArrayTag>());
            break;
            case Tag::IntArray:
                jobject_native_note=newTagIntArray(env,tag->as_ptr<IntArrayTag>());
            break;
            case Tag::End:
            default:
                jobject_native_note=newTagEnd(env);
            break;
        }
        env->CallObjectMethod(jobject_native_list,jmethod_NbtList_add,jobject_native_note);
        env->DeleteLocalRef(jobject_native_note);
    }
    return jobject_native_list;
}

jobject newTagByte(JNIEnv* env, const ByteTag* value){
    jclass jclass_NbtByte=env->FindClass(JCLASS_BYTE_TAG);
    jmethodID jmethod_NbtByte_init=env->GetMethodID(jclass_NbtByte,"<init>","(B)V");
    return env->NewObject(jclass_NbtByte,jmethod_NbtByte_init,(jbyte)value->data);
}

jobject newTagShort(JNIEnv* env, const ShortTag* value){
    jclass jclass_NbtShort=env->FindClass(JCLASS_SHORT_TAG);
    jmethodID jmethod_NbtShort_init=env->GetMethodID(jclass_NbtShort,"<init>","(S)V");
    return env->NewObject(jclass_NbtShort,jmethod_NbtShort_init,(jshort)value->data);
}

jobject newTagInt(JNIEnv* env, const IntTag* value){
    jclass jclass_NbtInt=env->FindClass(JCLASS_INT_TAG);
    jmethodID jmethod_NbtInt_init=env->GetMethodID(jclass_NbtInt,"<init>","(I)V");
    return env->NewObject(jclass_NbtInt,jmethod_NbtInt_init,(jint)value->data);
}

jobject newTagLong(JNIEnv* env, const Int64Tag* value){
    jclass jclass_NbtLong=env->FindClass(JCLASS_LONG_TAG);
    jmethodID jmethod_NbtLong_init=env->GetMethodID(jclass_NbtLong,"<init>","(J)V");
    return env->NewObject(jclass_NbtLong,jmethod_NbtLong_init,(jlong)value->data);
}

jobject newTagFloat(JNIEnv* env, const FloatTag* value){
    jclass jclass_NbtFloat=env->FindClass(JCLASS_FLOAT_TAG);
    jmethodID jmethod_NbtFloat_init=env->GetMethodID(jclass_NbtFloat,"<init>","(F)V");
    return env->NewObject(jclass_NbtFloat,jmethod_NbtFloat_init,(jfloat)value->data);
}

jobject newTagDouble(JNIEnv* env, const DoubleTag* value){
    jclass jclass_NbtDouble=env->FindClass(JCLASS_DOUBLE_TAG);
    jmethodID jmethod_NbtDouble_init=env->GetMethodID(jclass_NbtDouble,"<init>","(D)V");
    return env->NewObject(jclass_NbtDouble,jmethod_NbtDouble_init,(jdouble)value->data);
}

jobject newTagString(JNIEnv* env, const StringTag* value){
    jclass jclass_NbtString=env->FindClass(JCLASS_String_TAG);
    jmethodID jmethod_NbtString_init=env->GetMethodID(jclass_NbtString,"<init>","(Ljava/lang/String;)V");
    jstring jstring_native_value=env->NewStringUTF(value->data());
    jobject jobject_native_value=env->NewObject(jclass_NbtString,jmethod_NbtString_init,jstring_native_value);
    env->DeleteLocalRef(jstring_native_value);
    return jobject_native_value;
}

jobject newTagByteArray(JNIEnv* env, const ByteArrayTag* value){
    jclass jclass_NbtByteArray=env->FindClass(JCLASS_BYTEARRAY_TAG);
    jmethodID jmethod_NbtByteArray_init=env->GetMethodID(jclass_NbtByteArray,"<init>","([B)V");
    jbyteArray jbyteArray_native_value=env->NewByteArray(value->size());
    env->SetByteArrayRegion(jbyteArray_native_value,0,value->size(),(const jbyte*)value->data());
    jobject jobject_native_value=env->NewObject(jclass_NbtByteArray,jmethod_NbtByteArray_init,jbyteArray_native_value);
    env->DeleteLocalRef(jbyteArray_native_value);
    return jobject_native_value;
}

jobject newTagIntArray(JNIEnv *env, const IntArrayTag *value){
    jclass jclass_NbtIntArray=env->FindClass(JCLASS_INTARRAY_TAG);
    jmethodID jmethod_NbtIntArray_init=env->GetMethodID(jclass_NbtIntArray,"<init>","([I)V");
    jintArray jintArray_native_value=env->NewIntArray(value->size());
    env->SetIntArrayRegion(jintArray_native_value,0,value->size(),(const jint*)value->data());
    jobject jobject_native_value=env->NewObject(jclass_NbtIntArray,jmethod_NbtIntArray_init,jintArray_native_value);
    env->DeleteLocalRef(jintArray_native_value);
    return jobject_native_value;
}

jobject newTagEnd(JNIEnv *env){
    jclass jclass_NbtEnd=env->FindClass(JCLASS_END_TAG);
    jmethodID jmethod_NbtEnd_init=env->GetMethodID(jclass_NbtEnd,"<init>","()V");
    return env->NewObject(jclass_NbtEnd,jmethod_NbtEnd_init);
}


void toNativeByte(JNIEnv *env, jobject obj, ByteTag &tag){
    jclass jclass_NbtByte=env->FindClass(JCLASS_BYTE_TAG);
    jfieldID jmethod_NbtByte_value=env->GetFieldID(jclass_NbtByte,"value","B");
    tag.data=(schar)env->GetByteField(obj,jmethod_NbtByte_value);
}
void toNativeShort(JNIEnv *env, jobject obj, ShortTag &tag){
    jclass jclass_NbtShort=env->FindClass(JCLASS_SHORT_TAG);
    jfieldID jmethod_NbtShort_value=env->GetFieldID(jclass_NbtShort,"value","S");
    tag.data=(short)env->GetShortField(obj,jmethod_NbtShort_value);
}
void toNativeInt(JNIEnv *env, jobject obj, IntTag &tag){
    jclass jclass_NbtInt=env->FindClass(JCLASS_INT_TAG);
    jfieldID jmethod_NbtInt_value=env->GetFieldID(jclass_NbtInt,"value","I");
    tag.data=(int)env->GetIntField(obj,jmethod_NbtInt_value);
}
void toNativeLong(JNIEnv *env, jobject obj, Int64Tag &tag){
    jclass jclass_NbtLong=env->FindClass(JCLASS_LONG_TAG);
    jfieldID jmethod_NbtLong_value=env->GetFieldID(jclass_NbtLong,"value","J");
    tag.data=(int64_t)env->GetLongField(obj,jmethod_NbtLong_value);
}
void toNativeFloat(JNIEnv *env, jobject obj, FloatTag &tag){
    jclass jclass_NbtFloat=env->FindClass(JCLASS_FLOAT_TAG);
    jfieldID jmethod_NbtFloat_value=env->GetFieldID(jclass_NbtFloat,"value","F");
    tag.data=(float)env->GetFloatField(obj,jmethod_NbtFloat_value);
}
void toNativeDouble(JNIEnv *env, jobject obj, DoubleTag &tag){
    jclass jclass_NbtDouble=env->FindClass(JCLASS_DOUBLE_TAG);
    jfieldID jmethod_NbtDouble_value=env->GetFieldID(jclass_NbtDouble,"value","D");
    tag.data=(double)env->GetDoubleField(obj,jmethod_NbtDouble_value);
}
void toNativeString(JNIEnv *env, jobject obj, StringTag &tag){
    jclass jclass_NbtString=env->FindClass(JCLASS_String_TAG);
    jfieldID jfield_NbtString_value=env->GetFieldID(jclass_NbtString,"value","Ljava/lang/String;");
    jstring jstring_value=(jstring)env->GetObjectField(obj,jfield_NbtString_value);
    const char* c_str_value=env->GetStringUTFChars(jstring_value,nullptr);
    tag=StringTag(std::string(c_str_value));
    env->ReleaseStringUTFChars(jstring_value,c_str_value);
}
void toNativeByteArray(JNIEnv *env, jobject obj, ByteArrayTag &tag){
    jclass jclass_NbtByteArray=env->FindClass(JCLASS_BYTEARRAY_TAG);
    jmethodID jmethod_NbtByteArray_get=env->GetMethodID(jclass_NbtByteArray,"get","()[B");
    jbyteArray jbyteArray_native_list=(jbyteArray)env->CallObjectMethod(obj,jmethod_NbtByteArray_get);
    jbyte* c_byte_list=env->GetByteArrayElements(jbyteArray_native_list,nullptr);
    tag.clear();
    jsize size=env->GetArrayLength(jbyteArray_native_list);
    tag.assign(c_byte_list,c_byte_list+size);
    env->ReleaseByteArrayElements(jbyteArray_native_list,c_byte_list,JNI_COMMIT);
}
void toNativeIntArray(JNIEnv *env, jobject obj, IntArrayTag &tag){
    jclass jclass_NbtIntArray=env->FindClass(JCLASS_INTARRAY_TAG);
    jmethodID jmethod_NbtIntArray_get=env->GetMethodID(jclass_NbtIntArray,"get","()[B");
    jintArray jintArray_native_list=(jintArray)env->CallObjectMethod(obj,jmethod_NbtIntArray_get);
    jint* c_int_list=env->GetIntArrayElements(jintArray_native_list,nullptr);
    tag.clear();
    jsize size=env->GetArrayLength(jintArray_native_list);
    tag.assign(c_int_list,c_int_list+size);
    env->ReleaseIntArrayElements(jintArray_native_list,c_int_list,JNI_COMMIT);
}
void toNativeEnd(JNIEnv *, jobject, EndTag &){}

void toNativeList(JNIEnv *env, jobject thisObj, ListTag &tag){
    jclass jclass_NbtList=env->FindClass(JCLASS_LIST_TAG);
    jclass jclass_Nbt=env->FindClass(JCLASS_TAG);
    jmethodID jmethod_Nbt_getId=env->GetMethodID(jclass_Nbt,"getId","()I");
    jmethodID jmethod_NbtList_size=env->GetMethodID(jclass_NbtList,"size","()I");
    jmethodID jmethod_NbtList_get=env->GetMethodID(jclass_NbtList,"get","(I)" JCLASS_TAG);
    jint size=env->CallIntMethod(thisObj,jmethod_NbtList_size);
    for(jint i=0;i<size;i++){
        jobject jobject_native_tag=env->CallObjectMethod(thisObj,jmethod_NbtList_get,i);
        switch(env->CallIntMethod(jobject_native_tag,jmethod_Nbt_getId)){
            case (int)Tag::Byte:{
                ByteTag value=ByteTag(0);
                toNativeByte(env,jobject_native_tag,value);
                tag.add(std::make_unique<ByteTag>(value));
            }
            break;
            case (int)Tag::Short:{
                ShortTag value=ShortTag(0);
                toNativeShort(env,jobject_native_tag,value);
                tag.add(std::make_unique<ShortTag>(value));
            }
            break;
            case (int)Tag::Int:{
                IntTag value=IntTag(0);
                toNativeInt(env,jobject_native_tag,value);
                tag.add(std::make_unique<IntTag>(value));
            }
            break;
            case (int)Tag::Int64:{
                Int64Tag value=Int64Tag(0);
                toNativeLong(env,jobject_native_tag,value);
                tag.add(std::make_unique<Int64Tag>(value));
            }
            break;
            case (int)Tag::Float:{
                FloatTag value=FloatTag(0);
                toNativeFloat(env,jobject_native_tag,value);
                tag.add(std::make_unique<FloatTag>(value));
            }
            break;
            case (int)Tag::Double:{
                DoubleTag value=DoubleTag(0);
                toNativeDouble(env,jobject_native_tag,value);
                tag.add(std::make_unique<DoubleTag>(value));
            }
            break;
            case (int)Tag::String:{
                StringTag value=StringTag("");
                toNativeString(env,jobject_native_tag,value);
                tag.add(std::make_unique<StringTag>(value));
            }
            break;
            case (int)Tag::ByteArray:{
                ByteArrayTag value=ByteArrayTag();
                toNativeByteArray(env,jobject_native_tag,value);
                tag.add(std::make_unique<ByteArrayTag>(value));
            }
            break;
            case (int)Tag::IntArray:{
                IntArrayTag value=IntArrayTag();
                toNativeIntArray(env,jobject_native_tag,value);
                tag.add(std::make_unique<IntArrayTag>(value));
            }
            break;
            case (int)Tag::Compound:{
                CompoundTag value=CompoundTag();
                toNativeCompound(env,jobject_native_tag,value);
                tag.add(std::make_unique<CompoundTag>(value));
            }
            break;
            case (int)Tag::List:{
                ListTag value=ListTag();
                toNativeList(env,jobject_native_tag,value);
                tag.add(std::make_unique<ListTag>(value));
            }
            break;
            case (int)Tag::End:
            default:{
                EndTag value=EndTag();
                //toNativeEnd(env,jobject_native_tag,value);
                tag.add(std::make_unique<EndTag>(value));
            }
        }
        env->DeleteLocalRef(jobject_native_tag);
    }
}
    
void toNativeCompound(JNIEnv *env, jobject thisObj, CompoundTag &tag){
    jclass jclass_NbtCompound=env->FindClass(JCLASS_COMPOUND_TAG);
    jclass jclass_Iterator=env->FindClass("Ljava/util/Iterator;");
    jclass jclass_Set=env->FindClass("Ljava/util/Set;");
    jclass jclass_Nbt=env->FindClass(JCLASS_TAG);
    jmethodID jmethod_Nbt_getId=env->GetMethodID(jclass_Nbt,"getId","()I");
    jmethodID jmethod_NbtCompound_entrySet=env->GetMethodID(jclass_NbtCompound,"entrySet","()Ljava/util/Set;");
    jobject jobject_native_entries=env->CallObjectMethod(thisObj,jmethod_NbtCompound_entrySet);
    jclass jclass_NbtCompound_Entry=env->FindClass("Ljava/util/Map$Entry;");
    jmethodID jmethod_NbtCompound_Entry_getKey=env->GetMethodID(jclass_NbtCompound_Entry,"getKey","()Ljava/lang/Object;");
    jmethodID jmethod_NbtCompound_Entry_getValue=env->GetMethodID(jclass_NbtCompound_Entry,"getValue","()Ljava/lang/Object;");
    jmethodID jmethod_Set_iterator=env->GetMethodID(jclass_Set,"iterator","()Ljava/util/Iterator;");
    env->ExceptionDescribe();
    jmethodID jmethod_NbtCompound_Iterator_hasNext=env->GetMethodID(jclass_Iterator,"hasNext","()Z");
    jmethodID jmethod_NbtCompound_Iterator_next=env->GetMethodID(jclass_Iterator,"next","()Ljava/lang/Object;");
    jobject jobject_native_entry_iterator=env->CallObjectMethod(jobject_native_entries,jmethod_Set_iterator);
    
    while(env->CallBooleanMethod(jobject_native_entry_iterator,jmethod_NbtCompound_Iterator_hasNext)){
        jobject jobject_native_entry=env->CallObjectMethod(jobject_native_entry_iterator,jmethod_NbtCompound_Iterator_next);
        jstring jstring_native_key=(jstring)env->CallObjectMethod(jobject_native_entry,jmethod_NbtCompound_Entry_getKey);
        jobject jobject_native_tag=(jobject)env->CallObjectMethod(jobject_native_entry,jmethod_NbtCompound_Entry_getValue);
        const char* c_str_key=nullptr;
        switch(env->CallBooleanMethod(jobject_native_tag, jmethod_Nbt_getId)){
            case (int)Tag::Byte:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                ByteTag value=ByteTag(0);
                toNativeByte(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::Short:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                ShortTag value=ShortTag(0);
                toNativeShort(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::Int:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                IntTag value=IntTag(0);
                toNativeInt(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::Int64:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                Int64Tag value=Int64Tag(0);
                toNativeLong(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::Float:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                FloatTag value=FloatTag(0);
                toNativeFloat(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::Double:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                DoubleTag value=DoubleTag(0);
                toNativeDouble(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::String:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                StringTag value=StringTag("");
                toNativeString(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::ByteArray:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                ByteArrayTag value=ByteArrayTag();
                toNativeByteArray(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::IntArray:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                IntArrayTag value=IntArrayTag();
                toNativeIntArray(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::Compound:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                CompoundTag value=CompoundTag();
                toNativeCompound(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::List:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                ListTag value=ListTag();
                toNativeList(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
            break;
            case (int)Tag::End:
            default:{
                c_str_key=env->GetStringUTFChars(jstring_native_key,nullptr);
                EndTag value=EndTag();
                //toNativeEnd(env,jobject_native_tag,value);
                tag.at(std::string(c_str_key))= value;
            }
        }
        env->ReleaseStringUTFChars(jstring_native_key,c_str_key);
        env->DeleteLocalRef(jstring_native_key);
        env->DeleteLocalRef(jobject_native_tag);
        env->DeleteLocalRef(jobject_native_entry);
    }
    env->DeleteLocalRef(jobject_native_entries);
    env->DeleteLocalRef(jobject_native_entry_iterator);
}


}