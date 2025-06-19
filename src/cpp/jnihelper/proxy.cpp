#include "proxy.h"
#include "jni.h"
#include "jnihelper.h"

namespace jnihelper{
    void JavaClassSupplier::setGlobal(){
        if(isGlobal()) return;
        Env& env=getEnv();
        jclass localRef=impl->jcls;
        jclass globalRef=(jclass)env->NewGlobalRef(localRef);
        impl->isGlobal=true;
        env->DeleteLocalRef(localRef);
        impl->jcls=globalRef;
    }

    JavaClassSupplier::JavaClassSupplier(Env& env,jclass jcls,jboolean isGlobal):impl(make_shared<Impl>(env,jcls,isGlobal)){}

    JavaClassSupplier::Impl::Impl(Env& env,jclass jcls,jboolean isGlobal):env(env),jcls(jcls),isGlobal(isGlobal){}
    JavaClassSupplier::Impl::~Impl(){
        if(isGlobal) env->DeleteGlobalRef(jcls);
        else env->DeleteLocalRef(jcls);
    }


    JavaObject::Impl::Impl(Env& env,jobject jobj,jboolean isGlobal):env(env),jobj(jobj),isGlobal(isGlobal){}
    
    JavaObject::JavaObject(JavaClassSupplier cls,jobject jobj,jboolean isGlobal):cls(cls),impl(make_shared<Impl>(cls.getEnv(),jobj,isGlobal)){}
    JavaObject::Impl::~Impl(){
        if(isGlobal) env->DeleteGlobalRef(jobj);
        else env->DeleteLocalRef(jobj);
        if(env->ExceptionCheck()) env->ExceptionDescribe();//test
    }

    void JavaObject::setGlobal(){
        if(isGlobal() || isNull()) return;
        cls.setGlobal();
        Env& env=cls.getEnv();
        jobject localRef=impl->jobj;
        jobject globalRef=env->NewGlobalRef(localRef);
        impl->isGlobal=true;
        env->DeleteLocalRef(localRef);
        impl->jobj=globalRef;
    }

    

    //IntArray
    template<>
    IntArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[I")),env->NewIntArray(size)){}
    template<>
    jint IntArray::get(jint index){
        Env& env=cls.getEnv();
        jint arr[]={0};
        env->GetIntArrayRegion((jintArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void IntArray::set(jint index,const jint& value){
        Env& env=cls.getEnv();
        env->SetIntArrayRegion((jintArray)impl->jobj,index,1,&value);
    }
    //LongArray
    template<>
    LongArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[J")),env->NewLongArray(size)){}
    template<>
    jlong LongArray::get(jint index){
        Env& env=cls.getEnv();
        jlong arr[]={0};
        env->GetLongArrayRegion((jlongArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void LongArray::set(jint index,const jlong& value){
        Env& env=cls.getEnv();
        env->SetLongArrayRegion((jlongArray)impl->jobj,index,1,&value);
    }
    //FloatArray
    template<>
    FloatArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[F")),env->NewFloatArray(size)){}
    template<>
    jfloat FloatArray::get(jint index){
        Env& env=cls.getEnv();
        jfloat arr[]={0};
        env->GetFloatArrayRegion((jfloatArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void FloatArray::set(jint index,const jfloat& value){
        Env& env=cls.getEnv();
        env->SetFloatArrayRegion((jfloatArray)impl->jobj,index,1,&value);
    }
    //DoubleArray
    template<>
    DoubleArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[D")),env->NewDoubleArray(size)){}
    template<>
    jdouble DoubleArray::get(jint index){
        Env& env=cls.getEnv();
        jdouble arr[]={0};
        env->GetDoubleArrayRegion((jdoubleArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void DoubleArray::set(jint index,const jdouble& value){
        Env& env=cls.getEnv();
        env->SetDoubleArrayRegion((jdoubleArray)impl->jobj,index,1,&value);
    }
    //BooleanArray
    template<>
    BooleanArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[Z")),env->NewBooleanArray(size)){}
    template<>
    jboolean BooleanArray::get(jint index){
        Env& env=cls.getEnv();
        jboolean arr[]={0};
        env->GetBooleanArrayRegion((jbooleanArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void BooleanArray::set(jint index,const jboolean& value){
        Env& env=cls.getEnv();
        env->SetBooleanArrayRegion((jbooleanArray)impl->jobj,index,1,&value);
    }
    //CharArray
    template<>
    CharArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[C")),env->NewCharArray(size)){}
    template<>
    jchar CharArray::get(jint index){
        Env& env=cls.getEnv();
        jchar arr[]={0};
        env->GetCharArrayRegion((jcharArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void CharArray::set(jint index,const jchar& value){
        Env& env=cls.getEnv();
        env->SetCharArrayRegion((jcharArray)impl->jobj,index,1,&value);
    }
    //ShortArray
    template<>
    ShortArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[S")),env->NewShortArray(size)){}
    template<>
    jshort ShortArray::get(jint index){
        Env& env=cls.getEnv();
        jshort arr[]={0};
        env->GetShortArrayRegion((jshortArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void ShortArray::set(jint index,const jshort& value){
        Env& env=cls.getEnv();
        env->SetShortArrayRegion((jshortArray)impl->jobj,index,1,&value);
    }
    //ByteArray
    template<>
    ByteArray::Array(Env& env,jsize size):
        JavaObject(JavaClassSupplier(env,env->FindClass("[B")),env->NewByteArray(size)){}
    template<>
    jbyte ByteArray::get(jint index){
        Env& env=cls.getEnv();
        jbyte arr[]={0};
        env->GetByteArrayRegion((jbyteArray)impl->jobj,index,1,arr);
        return arr[0];
    }
    template<>
    void ByteArray::set(jint index,const jbyte& value){
        Env& env=cls.getEnv();
        env->SetByteArrayRegion((jbyteArray)impl->jobj,index,1,&value);
    }


}