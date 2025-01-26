#include "../header/bluebox_ll_gui_Label.h"

#include "jni.h"
#include "ll/api/form/CustomForm.h"

JNIEXPORT void JNICALL Java_bluebox_ll_gui_Label_draw
  (JNIEnv *env, jobject thisObj, jlong ptr){
    using ll::form::CustomForm;
    jclass jcls_Label=env->GetObjectClass(thisObj);
    jfieldID jfid_text=env->GetFieldID(jcls_Label,"text","Ljava/lang/String;");

    jstring jstr_text=(jstring)env->GetObjectField(thisObj,jfid_text);
    const char* text=env->GetStringUTFChars(jstr_text,0);
    CustomForm* form = (CustomForm*)ptr;
    form->appendLabel(text);

    env->ReleaseStringUTFChars(jstr_text,text);
    env->DeleteLocalRef(jstr_text);
  }



