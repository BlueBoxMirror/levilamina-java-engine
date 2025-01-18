#include "../header/bluebox_ll_gui_ButtonForm.h"
#include "../Entry.h"
#include "jni.h"
#include "mc/world/actor/player/Player.h"
#include "ll/api/form/SimpleForm.h"


/*
 * Class:     bluebox_ll_gui_ButtonForm
 * Method:    send
 * Signature: (JLjava/lang/String;Ljava/lang/String;Ljava/util/LinkedList;)V
 */
JNIEXPORT void JNICALL Java_bluebox_ll_gui_ButtonForm_send
  (JNIEnv *env, jclass, jlong playerPtr, jstring jstr_title, jstring jstr_content, jobject jobj_buttons, jobject jobj_callback){
    using ll::form::SimpleForm;

    jclass jcls_LinkedList = env->FindClass("Ljava/util/LinkedList;");
    jclass jcls_Iterator = env->FindClass("Ljava/util/Iterator;");
    jclass jcls_Button=env->FindClass(JCLASS_Button);
    jclass jcls_ImageType=env->FindClass(JCLASS_ImageType);
    jclass jcls_Consumer=env->FindClass("Ljava/util/function/Consumer;");
    jclass jcls_ButtonEvent=env->FindClass(JCLASS_ButtonEvent);
    
    jmethodID jmid_LinkedList_iterator=env->GetMethodID(jcls_LinkedList, "iterator", "()Ljava/util/Iterator;");
    jmethodID jmid_Iterator_hasNext=env->GetMethodID(jcls_Iterator, "hasNext", "()Z");
    jmethodID jmid_Iterator_next=env->GetMethodID(jcls_Iterator, "next", "()Ljava/lang/Object;");
    jmethodID jmid_Consumer_accept=env->GetMethodID(jcls_Consumer, "accept", "(Ljava/lang/Object;)V");
    jmethodID jmid_ButtonEvent_init=env->GetMethodID(jcls_ButtonEvent, "<init>", "(" JCLASS_Player "I)V");
    jfieldID jfid_Button_text=env->GetFieldID(jcls_Button, "text", "Ljava/lang/String;");
    jfieldID jfid_Button_image=env->GetFieldID(jcls_Button, "image", "Ljava/lang/String;");
    jfieldID jfid_Button_type=env->GetFieldID(jcls_Button, "type", JCLASS_ImageType);
    jfieldID jfid_Button_onClick=env->GetFieldID(jcls_Button, "onClick", "Ljava/util/function/Consumer;");
    jfieldID jfid_ImageType_type=env->GetFieldID(jcls_ImageType, "type", "Ljava/lang/String;");

    const char* title = env->GetStringUTFChars(jstr_title, 0);
    const char* content = env->GetStringUTFChars(jstr_content, 0);

    SimpleForm form = SimpleForm(title, content);
    jobject jobjN_iterator = env->CallObjectMethod(jobj_buttons, jmid_LinkedList_iterator);
    while(env->CallBooleanMethod(jobjN_iterator, jmid_Iterator_hasNext)){
      jobject jobjN_button = env->CallObjectMethod(jobjN_iterator, jmid_Iterator_next);
      jstring jstrN_text = (jstring)env->GetObjectField(jobjN_button, jfid_Button_text);
      jstring jstrN_image = (jstring)env->GetObjectField(jobjN_button, jfid_Button_image);
      jobject jobjN_type = env->GetObjectField(jobjN_button, jfid_Button_type);
      jstring jstrN_type = (jstring)env->GetObjectField(jobjN_type, jfid_ImageType_type);
      jobject jobjN_onClick = env->GetObjectField(jobjN_button, jfid_Button_onClick);
      const char* text = env->GetStringUTFChars(jstrN_text, 0);
      const char* image = env->GetStringUTFChars(jstrN_image, 0);
      const char* type = env->GetStringUTFChars(jstrN_type, 0);
      jobject jobjG_onClick = env->NewGlobalRef(jobjN_onClick);
      const auto onClick = [jobjG_onClick,jmid_Consumer_accept](Player& player){
        JNIEnv* env = lje::getEnv();
        jobject jobjN_player = lje::newJavaPlayer(env,&player);
        env->CallVoidMethod(jobjG_onClick, jmid_Consumer_accept, jobjN_player);
        env->DeleteLocalRef(jobjN_player);
        env->DeleteGlobalRef(jobjG_onClick);
        lje::detachCurrentThread();
      };
      if(env->GetStringLength(jstrN_image)==0){
        form.appendButton(text, onClick);
      }
      else{
        form.appendButton(text, image, type, onClick);
      }
      env->ReleaseStringUTFChars(jstrN_text, text);
      env->ReleaseStringUTFChars(jstrN_image, image);
      env->ReleaseStringUTFChars(jstrN_type, type);
      env->DeleteLocalRef(jobjN_button);
      env->DeleteLocalRef(jobjN_type);
      env->DeleteLocalRef(jstrN_text);
      env->DeleteLocalRef(jstrN_image);
      env->DeleteLocalRef(jstrN_type);
      env->DeleteLocalRef(jobjN_onClick);
    }
    jobject jobjG_callback = env->NewGlobalRef(jobj_callback);
    form.sendTo(*(Player*)playerPtr,[jobjG_callback,jmid_Consumer_accept,jmid_ButtonEvent_init,jcls_ButtonEvent](Player& player,int buttonId,auto result){
      JNIEnv* env = lje::getEnv();
      jobject jobjN_player = lje::newJavaPlayer(env,&player);
      jobject jobjN_buttonEvent = env->NewObject(jcls_ButtonEvent, jmid_ButtonEvent_init, jobjN_player,(jint) buttonId);
      env->CallVoidMethod(jobjG_callback, jmid_Consumer_accept, jobjN_buttonEvent);
      env->DeleteLocalRef(jobjN_player);
      env->DeleteLocalRef(jobjN_buttonEvent);
      env->DeleteGlobalRef(jobjG_callback);
      lje::detachCurrentThread();
    });
    env->ReleaseStringUTFChars(jstr_title, title);
    env->ReleaseStringUTFChars(jstr_content, content);
    env->DeleteLocalRef(jobjN_iterator);
  }
