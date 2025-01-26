#include "../header/bluebox_ll_gui_ModalForm.h"
#include "../Entry.h"

#include "jni.h"
#include "mc/enums/ModalFormCancelReason.h"
#include "mc/world/actor/player/Player.h"
#include "ll/api/form/ModalForm.h"
#include <optional>

JNIEXPORT void JNICALL Java_bluebox_ll_gui_ModalForm_sendTo
  (JNIEnv *env, jobject thisObj, jobject jobj_player, jobject jobj_callback){
    jclass jcls_Consumer=env->GetObjectClass(jobj_callback);
    jclass jcls_ModalForm=env->GetObjectClass(thisObj);
    jmethodID jmid_accept=env->GetMethodID(jcls_Consumer,"accept","(Ljava/lang/Object;)V");
    jfieldID jfid_title=env->GetFieldID(jcls_ModalForm,"title","Ljava/lang/String;");
    jfieldID jfid_content=env->GetFieldID(jcls_ModalForm,"content","Ljava/lang/String;");
    jfieldID jfid_confirmButtonText=env->GetFieldID(jcls_ModalForm,"confirmButtonText","Ljava/lang/String;");
    jfieldID jfid_cancelButtonText=env->GetFieldID(jcls_ModalForm,"cancelButtonText","Ljava/lang/String;");

    jstring jstr_title=(jstring)env->GetObjectField(thisObj,jfid_title);
    jstring jstr_content=(jstring)env->GetObjectField(thisObj,jfid_content);
    jstring jstr_confirmButtonText=(jstring)env->GetObjectField(thisObj,jfid_confirmButtonText);
    jstring jstr_cancelButtonText=(jstring)env->GetObjectField(thisObj,jfid_cancelButtonText);
    const char* title=env->GetStringUTFChars(jstr_title,0);
    const char* content=env->GetStringUTFChars(jstr_content,0);
    const char* confirmButtonText=env->GetStringUTFChars(jstr_confirmButtonText,0);
    const char* cancelButtonText=env->GetStringUTFChars(jstr_cancelButtonText,0);
    Player* player=(Player*)lje::getNativePointer(env, jobj_player);
    jobject jobjG_callback=env->NewGlobalRef(jobj_callback);
    
    ll::form::ModalForm(title,content,confirmButtonText,cancelButtonText).sendTo(*player,[jobjG_callback,jmid_accept](Player& player,std::optional<ll::form::ModalFormSelectedButton> result,std::optional<ModalFormCancelReason> cancelReason){
      JNIEnv *env=lje::getEnv();
      jclass jcls_Boolean=env->FindClass("java/lang/Boolean");
      jmethodID jmid_Boolean_valueOf=env->GetStaticMethodID(jcls_Boolean,"valueOf","(Z)Ljava/lang/Boolean;");
      jboolean jbool_result=result.has_value();
      jobject jobj_result=env->CallStaticObjectMethod(jcls_Boolean,jmid_Boolean_valueOf,jbool_result);
      jobject jobj_event=nullptr;
      if(result.has_value()) jobj_event=lje::newFormEvent(env, &player, jobj_result);
      else jobj_event=lje::newFormEvent(env, &player, cancelReason.value());
      env->CallVoidMethod(jobjG_callback,jmid_accept,jobj_event);
      env->DeleteGlobalRef(jobjG_callback);
      env->DeleteLocalRef(jobj_event);
      env->DeleteLocalRef(jobj_result);
      lje::detachCurrentThread();
    });
    env->ReleaseStringUTFChars(jstr_title,title);
    env->ReleaseStringUTFChars(jstr_content,content);
    env->ReleaseStringUTFChars(jstr_confirmButtonText,confirmButtonText);
    env->ReleaseStringUTFChars(jstr_cancelButtonText,cancelButtonText);
    
    env->DeleteLocalRef(jstr_title);
    env->DeleteLocalRef(jstr_content);
    env->DeleteLocalRef(jstr_confirmButtonText);
    env->DeleteLocalRef(jstr_cancelButtonText);
  }








