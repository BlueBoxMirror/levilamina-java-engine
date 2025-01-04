#include "java_Entity.h"
#include "mc/dataloadhelper/DefaultDataLoadHelper.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/Actor.h"
#include "jni.h"
#include "../util/nbt/java_nbt.h"
#include "../memory/java_Memory.h"
#include <memory>

namespace lje::j_Entity{

jobject newJavaEntity(JNIEnv *env,Actor *entity){
    jclass jclass_Entity=env->FindClass(JCLASS_ENTITY);
    jmethodID jmethod_Entity_init=env->GetMethodID(jclass_Entity,"<init>","(J)V");
    return env->NewObject(jclass_Entity,jmethod_Entity_init,(jlong)entity);
}

jobject getNbt(JNIEnv *env, jobject thisObj){
    Actor* entity=(Actor*)lje::memory::getPointer(env, thisObj);
    CompoundTag tag=CompoundTag();
    bool isSuccess=entity->save(tag);
    if(!isSuccess){
        env->ThrowNew(env->FindClass("Ljava/lang/RuntimeException;"), "Failed to get nbt");
        return nullptr;
    }
    return lje::util::nbt::newTagCompound(env, &tag);
}

void setNbt(JNIEnv *env, jobject thisObj, jobject jobject_tag){
    Actor* entity=(Actor*)lje::memory::getPointer(env, thisObj);
    CompoundTag tag=CompoundTag();
    lje::util::nbt::toNativeCompound(env, jobject_tag, tag);
    entity->load(tag, *std::make_unique<DefaultDataLoadHelper>());
}

}