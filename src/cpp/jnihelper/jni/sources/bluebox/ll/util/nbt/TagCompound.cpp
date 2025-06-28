// This file is generated automatically.
#include "jnihelper/jni/headers/bluebox/ll/util/nbt/TagCompound.h"
#include "jni.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/TagCompound.h"
#include "mc/nbt/CompoundTag.h"
#include <cstddef>
#include <vector>
namespace jnihelper::jni {

//{_tag_}toBinary()[B
::jbyteArray Java_bluebox_ll_util_nbt_TagCompound_toBinary(::JNIEnv* envPtr, ::jobject n_thisObj){
    Env env(envPtr);
    IMPORT(bluebox::ll::util::nbt,TagCompound)
    auto thisObj=TagCompound.package(n_thisObj);
    auto tag=CompoundTag();
    proxy::bluebox::ll::util::nbt::toNative(thisObj, &tag);
    std::string binary=tag.toBinaryNbt();
    auto bytes=::jnihelper::ByteArray(env,binary.size());
    for(size_t i=0;i<binary.size();i++){
        bytes.set(i,binary[i]);
    }
    return (jbyteArray)bytes.release();
}
//{_tag_}parse([B)Lbluebox/ll/util/nbt/TagCompound;
::jobject Java_bluebox_ll_util_nbt_TagCompound_parse(::JNIEnv* envPtr, ::jclass , ::jbyteArray n_bytes){
    Env env(envPtr);
    IMPORT(bluebox::ll::util::nbt,TagCompound)
    auto bytes=::jnihelper::ByteArray(env,0).package((jarray)n_bytes);
    vector<char> charList;
    for(int i=0;i<bytes.length();i++){
        charList.push_back(bytes.get(i));
    }
    std::string str(charList.data(),bytes.length());
    auto tag=CompoundTag::fromBinaryNbt(str);
    if(tag.has_value()){
        return TagCompound.fromNative(&tag.value()).release();
    }
    return nullptr;
}

}