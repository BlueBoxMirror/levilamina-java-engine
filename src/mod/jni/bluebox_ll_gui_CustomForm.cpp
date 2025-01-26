#include "../header/bluebox_ll_gui_CustomForm.h"
#include "../util/util.h"

#include "jni.h"
#include "ll/api/form/CustomForm.h"

JNIEXPORT void JNICALL Java_bluebox_ll_gui_CustomForm_send
  (JNIEnv *env, jclass , jlong playerPtr, jstring jstr_title, jobject jobj_list, jobject jobj_callback){
    using ll::form::CustomForm;
    jclass jcls_LinkedList = env->FindClass("Ljava/util/LinkedList;");
    jclass jcls_CustomElement = env->FindClass(JCLASS_CustomElement);
    jclass jcls_Iterator = env->FindClass("Ljava/util/Iterator;");
    jclass jcls_Consumer = env->FindClass("Ljava/util/function/Consumer;");
    jmethodID jmid_Consumer_accept = env->GetMethodID(jcls_Consumer, "accept", "()V");
    jmethodID jmid_LinkedList_iterator = env->GetMethodID(jcls_LinkedList, "iterator", "()Ljava/util/Iterator;");
    jmethodID jmid_Iterator_hasNext = env->GetMethodID(jcls_Iterator, "hasNext", "()Z");
    jmethodID jmid_Iterator_next = env->GetMethodID(jcls_Iterator, "next", "()Ljava/lang/Object;");
    jmethodID jmid_CustomElement_draw=env->GetMethodID(jcls_CustomElement, "draw", "(J)V");

    CustomForm form=CustomForm();
    jobject jobjN_iterator = env->CallObjectMethod(jobj_list, jmid_LinkedList_iterator);
    while(env->CallBooleanMethod(jobjN_iterator, jmid_Iterator_hasNext)){
      jobject jobjN_element = env->CallObjectMethod(jobjN_iterator, jmid_Iterator_next);
      env->CallVoidMethod(jobjN_element, jmid_CustomElement_draw, (jlong) &form);
      env->DeleteLocalRef(jobjN_element);
    }
    jobject jobjG_callback=env->NewGlobalRef(jobj_callback);
    form.sendTo(*(Player*)playerPtr,[jobjG_callback,jmid_Consumer_accept](Player &player,auto &map,auto result){
      env->CallVoidMethod(jobjG_callback, jmid_Consumer_accept);
      env->DeleteGlobalRef(jobjG_callback);
    });

    env->DeleteLocalRef(jobjN_iterator);
  }



