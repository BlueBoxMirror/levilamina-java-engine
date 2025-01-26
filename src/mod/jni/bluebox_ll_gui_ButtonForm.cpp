#include "../header/bluebox_ll_gui_ButtonForm.h"
#include "../Entry.h"
#include "jni.h"
#include "mc/enums/ModalFormCancelReason.h"
#include "mc/world/actor/player/Player.h"
#include "ll/api/form/SimpleForm.h"
#include <cstring>
#include <optional>

JNIEXPORT void JNICALL Java_bluebox_ll_gui_ButtonForm_sendTo
  (JNIEnv *env, jobject thisObj, jobject jobj_player, jobject jobj_callback){
    using ll::form::SimpleForm;
    jclass jcls_ButtonForm=env->GetObjectClass(thisObj);
    jfieldID jfid_ButtonForm_title=env->GetFieldID(jcls_ButtonForm, "title", "Ljava/lang/String;");
    jfieldID jfid_ButtonForm_content=env->GetFieldID(jcls_ButtonForm, "content", "Ljava/lang/String;");
    jfieldID jfid_ButtonForm_buttons=env->GetFieldID(jcls_ButtonForm, "buttons", "Ljava/util/LinkedList;");

    jstring jstr_title = (jstring)env->GetObjectField(thisObj, jfid_ButtonForm_title);
    jstring jstr_content = (jstring)env->GetObjectField(thisObj, jfid_ButtonForm_content);
    jobject jobj_buttons = (jobject)env->GetObjectField(thisObj, jfid_ButtonForm_buttons);

    const char* title = env->GetStringUTFChars(jstr_title, 0);
    const char* content = env->GetStringUTFChars(jstr_content, 0);

    SimpleForm form = SimpleForm(title, content);
    lje::Iterable_forEach(env, jobj_buttons,[&form](JNIEnv* env,jobject jobj_button){
      jclass jcls_Button=env->FindClass(JCLASS_Button);
      jclass jcls_Enum=env->FindClass("Ljava/lang/Enum;");
      jfieldID jfid_Button_text=env->GetFieldID(jcls_Button, "text", "Ljava/lang/String;");
      jfieldID jfid_Button_imagePath=env->GetFieldID(jcls_Button, "image", "Ljava/lang/String;");
      jfieldID jfid_Button_imageType=env->GetFieldID(jcls_Button, "type", JCLASS_ImageType);
      jmethodID jmid_Enum_name=env->GetMethodID(jcls_Enum, "name", "()Ljava/lang/String;");
      
      jstring jstr_text = (jstring)env->GetObjectField(jobj_button, jfid_Button_text);
      jstring jstr_imagePath = (jstring)env->GetObjectField(jobj_button, jfid_Button_imagePath);
      jobject jobj_imageType = env->GetObjectField(jobj_button, jfid_Button_imageType);
      jstring jstr_imageType = (jstring)env->CallObjectMethod(jobj_imageType, jmid_Enum_name);
      
      const char* text = env->GetStringUTFChars(jstr_text, 0);
      const char* imagePath = jstr_imagePath==nullptr?"":env->GetStringUTFChars(jstr_imagePath, 0);
      const char* imageType = env->GetStringUTFChars(jstr_imageType, 0);

      if(strlen(imagePath)==0) form.appendButton(text);
      else form.appendButton(text, imagePath, imageType);
      env->ReleaseStringUTFChars(jstr_text, text);
      env->ReleaseStringUTFChars(jstr_imagePath, imagePath);
      env->ReleaseStringUTFChars(jstr_imageType, imageType);
      env->DeleteLocalRef(jstr_text);
      env->DeleteLocalRef(jstr_imagePath);
      env->DeleteLocalRef(jstr_imageType);
      env->DeleteLocalRef(jobj_imageType);
    });
    Player* player=(Player*)lje::getNativePointer(env, jobj_player);
    jobject jobjG_callback=env->NewGlobalRef(jobj_callback);
    form.sendTo(*player,[jobjG_callback](Player& player, int buttonIndex, std::optional<ModalFormCancelReason> cancelReason){
      JNIEnv* env=lje::getEnv();
      jclass jcls_Consumer=env->FindClass("Ljava/util/function/Consumer;");
      jclass jcls_Integer=env->FindClass("Ljava/lang/Integer;");
      jmethodID jmid_Consumer_accept=env->GetMethodID(jcls_Consumer, "accept", "(Ljava/lang/Object;)V");
      jmethodID jmid_Integer_valueOf=env->GetStaticMethodID(jcls_Integer, "valueOf", "(I)Ljava/lang/Integer;");
      jobject jobj_buttonIndex=env->CallStaticObjectMethod(jcls_Integer, jmid_Integer_valueOf, buttonIndex);
      jobject jobj_event=nullptr;
      if(cancelReason.has_value()) jobj_event=lje::newFormEvent(env,&player,cancelReason.value());
      else jobj_event=lje::newFormEvent(env,&player,jobj_buttonIndex);
      env->CallVoidMethod(jobjG_callback, jmid_Consumer_accept, jobj_event);
      env->DeleteLocalRef(jobj_event);
      env->DeleteGlobalRef(jobjG_callback);
    });

    env->ReleaseStringUTFChars(jstr_title, title);
    env->ReleaseStringUTFChars(jstr_content, content);
    env->DeleteLocalRef(jstr_title);
    env->DeleteLocalRef(jstr_content);
    env->DeleteLocalRef(jobj_buttons);

  }

