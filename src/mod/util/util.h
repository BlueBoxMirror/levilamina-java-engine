#pragma once
#include "jni.h"

#include "mc/enums/ModalFormCancelReason.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/actor/Actor.h"

#define PACK_JAVA_NAME(name) "Lbluebox/ll/" name ";"
#define JCLASS_LeviLamina PACK_JAVA_NAME("plugin/LeviLamina")
#define JCLASS_Logger PACK_JAVA_NAME("Logger")
#define JCLASS_PointerSupporter PACK_JAVA_NAME("memory/PointerSupporter")
#define JCLASS_String "Ljava/lang/String;"
#define JCLASS_OtherPlugin PACK_JAVA_NAME("plugin/OtherPlugin")
#define JCLASS_Button PACK_JAVA_NAME("gui/Button")
#define JCLASS_ImageType PACK_JAVA_NAME("gui/Button$ImageType")
#define JCLASS_ButtonEvent PACK_JAVA_NAME("gui/ButtonEvent")
#define JCLASS_Player PACK_JAVA_NAME("world/entity/Player")
#define JCLASS_Entity PACK_JAVA_NAME("world/entity/Entity")
#define JCLASS_CustomForm PACK_JAVA_NAME("gui/CustomForm")
#define JCLASS_CustomElement PACK_JAVA_NAME("gui/CustomElement")
#define JCLASS_FormEvent PACK_JAVA_NAME("gui/FormEvent")
#define JCLASS_FormCancelReason PACK_JAVA_NAME("gui/FormEvent$CancelReason")


namespace lje{
    void* getNativePointer(JNIEnv* env, jobject obj);
    jint getEnumValue(JNIEnv* env, jobject obj);
    jobject newJavaPlayer(JNIEnv* env, const Player* player);
    jobject newJavaEntity(JNIEnv* env, const Actor* entity);
    jobject newFormEvent(JNIEnv* env,Player* player,jobject jobj_data);
    jobject newFormEvent(JNIEnv* env,Player* player,ModalFormCancelReason cancelReason);
    void Iterable_forEach(JNIEnv* env, jobject iterable, std::function<void(JNIEnv* env,jobject element)> consumer);
}