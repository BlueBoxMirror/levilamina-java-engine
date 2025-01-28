#include "../header/bluebox_ll_gui_CustomForm.h"

#include "jni.h"
#include "ll/api/form/CustomForm.h"
#include "mod/Entry.h"
#include <variant>
#include <unordered_map>

enum CustomElementType{
  LABEL       =0x0,  
  DROP_DOWN   =0x1,  
  INPUT       =0x2, 
  SLIDER      =0x3,     
  TEXT_SLIDER =0x4,
  TOGGLE      =0x5,
};

JNIEXPORT void JNICALL Java_bluebox_ll_gui_CustomForm_sendTo
  (JNIEnv *env, jobject thisObj, jobject jobj_player, jobject jobj_callback){
    using ll::form::CustomForm;
    jclass jcls_CustomElement = env->FindClass(JCLASS_CustomElement);
    jclass jcls_CustomForm = env->GetObjectClass(thisObj);
    jmethodID jmid_CustomElement_draw = env->GetMethodID(jcls_CustomElement, "draw", "(JI)V");
    jfieldID jfid_CustomForm_elements = env->GetFieldID(jcls_CustomForm, "elements", "Ljava/util/LinkedList;");
    jfieldID jfid_CustomForm_title = env->GetFieldID(jcls_CustomForm, "title", JCLASS_String);

    jobject jobj_elements = env->GetObjectField(thisObj, jfid_CustomForm_elements);
    jstring jstr_title = (jstring)env->GetObjectField(thisObj, jfid_CustomForm_title);
    const char* title = env->GetStringUTFChars(jstr_title, 0);
    CustomForm form=CustomForm(title);
    jint index=0;
    lje::Iterable_forEach(env, jobj_elements, [&index,jmid_CustomElement_draw, formPtr((jlong)&form)](JNIEnv* env, jobject jobj_element){
      env->CallVoidMethod(jobj_element, jmid_CustomElement_draw, formPtr,index++);
    });
    Player* player=(Player*)lje::getNativePointer(env, jobj_player);
    jobject jobjG_callback=env->NewGlobalRef(jobj_callback);
    jobject jobjG_elements=env->NewGlobalRef(jobj_elements);
    form.sendTo(*player,[jobjG_callback,jobjG_elements](Player &player,auto data,auto cancelReason){
      JNIEnv* env=lje::getEnv();
      jclass jcls_Consumer=env->FindClass("Ljava/util/function/Consumer;");
      jmethodID jmid_Consumer_accept=env->GetMethodID(jcls_Consumer, "accept", "(Ljava/lang/Object;)V");

      if(cancelReason.has_value()){
        jobject jobj_cancelReason=lje::newFormEvent(env, &player, cancelReason.value());
        env->CallVoidMethod(jobjG_callback, jmid_Consumer_accept, jobj_cancelReason);
        env->DeleteLocalRef(jobj_cancelReason);
      }
      else{

        jclass jcls_CustomElement=env->FindClass(JCLASS_CustomElement);
        jclass jcls_ArrayList=env->FindClass("Ljava/util/ArrayList;");
        jmethodID jmid_ArrayList_add=env->GetMethodID(jcls_ArrayList, "add", "(Ljava/lang/Object;)Z");
        jmethodID jmid_CustomElement_getId=env->GetMethodID(jcls_CustomElement, "getId", "()I");
        jmethodID jmid_ArrayList=env->GetMethodID(jcls_ArrayList, "<init>", "()V");

        jobject jobj_list=env->NewObject(jcls_ArrayList, jmid_ArrayList);
        std::unordered_map<std::basic_string<char>,std::variant<std::monostate, unsigned long long, double, std::basic_string<char>>> 
          dataMap=data.value();
        jint index=0;
        lje::Iterable_forEach(env, jobjG_elements, [&index,&dataMap,jmid_CustomElement_getId,jmid_ArrayList_add,jobj_list](JNIEnv* env, jobject jobj_element){
          jint id=env->CallIntMethod(jobj_element, jmid_CustomElement_getId);
          std::string key=std::to_string(index++);
          switch(id){
            case LABEL:
              env->CallBooleanMethod(jobj_list, jmid_ArrayList_add, nullptr);
              break;
            case DROP_DOWN:
            case INPUT:
            case TEXT_SLIDER:{
              jstring jstr_value=env->NewStringUTF(std::get<std::basic_string<char>>(dataMap[key]).c_str());
              env->CallBooleanMethod(jobj_list, jmid_ArrayList_add, jstr_value);
              env->DeleteLocalRef(jstr_value);
              break;
            }
            case SLIDER:{
              jdouble jdob_value=std::get<double>(dataMap[key]);
              jclass jcls_Double=env->FindClass("Ljava/lang/Double;");
              jmethodID jmid_Double_valueOf=env->GetStaticMethodID(jcls_Double, "valueOf", "(D)Ljava/lang/Double;");
              jobject jobj_value=env->CallStaticObjectMethod(jcls_Double, jmid_Double_valueOf, jdob_value);
              env->CallBooleanMethod(jobj_list, jmid_ArrayList_add, jobj_value);
              env->DeleteLocalRef(jobj_value);
              env->DeleteLocalRef(jcls_Double);
              break;
            }
            case TOGGLE:{
              jboolean jbool_value=std::get<unsigned long long>(dataMap[key]);
              jclass jcls_Boolean=env->FindClass("Ljava/lang/Boolean;");
              jmethodID jmid_Boolean_valueOf=env->GetStaticMethodID(jcls_Boolean, "valueOf", "(Z)Ljava/lang/Boolean;");
              jobject jobj_value=env->CallStaticObjectMethod(jcls_Boolean, jmid_Boolean_valueOf, jbool_value);
              env->CallBooleanMethod(jobj_list, jmid_ArrayList_add, jobj_value);
              env->DeleteLocalRef(jobj_value);
              env->DeleteLocalRef(jcls_Boolean);
              break;
            }
          }
        });
        jobject jobj_event=lje::newFormEvent(env, &player, jobj_list);
        env->CallVoidMethod(jobjG_callback, jmid_Consumer_accept, jobj_event);
        env->DeleteLocalRef(jobj_list);
        env->DeleteLocalRef(jobj_event);
      }
      env->DeleteGlobalRef(jobjG_callback);
    });
    
    env->ReleaseStringUTFChars(jstr_title, title);
    env->DeleteLocalRef(jstr_title);
    env->DeleteLocalRef(jobj_elements);
  }


