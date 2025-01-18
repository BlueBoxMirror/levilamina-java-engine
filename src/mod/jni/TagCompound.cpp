#include "../header/bluebox_ll_util_nbt_TagCompound.h"
#include "../util/nbt/java_nbt.h"

#include "mc/nbt/CompoundTag.h"

/*
 * Class:     bluebox_ll_util_nbt_TagCompound
 * Method:    toBinary
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_bluebox_ll_util_nbt_TagCompound_toBinary
  (JNIEnv *env, jobject thisObj){
    CompoundTag tag;
    lje::toNativeCompound (env,thisObj,tag);
    auto it=tag.toBinaryNbt();
    jbyteArray jbyteArray_native_list=env->NewByteArray(it.size());
    env->SetByteArrayRegion(jbyteArray_native_list,0,it.length(),(jbyte*)it.data());
    return jbyteArray_native_list;
  }

/*
 * Class:     bluebox_ll_util_nbt_TagCompound
 * Method:    parse
 * Signature: ([B)Lbluebox/ll/util/nbt/TagCompound;
 */
JNIEXPORT jobject JNICALL Java_bluebox_ll_util_nbt_TagCompound_parse
  (JNIEnv *env, jclass , jbyteArray jbarr){
    jbyte* c_byte_list=env->GetByteArrayElements(jbarr,nullptr);
    jsize size=env->GetArrayLength(jbarr);
    auto tag=CompoundTag::fromBinaryNbt(std::string((char*)c_byte_list,size));
    if(!tag){
        env->ReleaseByteArrayElements(jbarr,c_byte_list,JNI_ABORT);
        env->ThrowNew(env->FindClass("Ljava/lang/IllegalArgumentException;"), "Invalid NBT binary data");
        return nullptr;
    }
    return lje::newTagCompound(env, (CompoundTag*)&tag);
  }