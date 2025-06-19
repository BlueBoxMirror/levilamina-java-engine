#pragma once

#include <jni.h>
#include <memory>
#include "jnihelper.h"


namespace jnihelper{

    class JavaClassSupplier{
        struct Impl{
            Env env;
            jclass jcls;
            jboolean isGlobal;
            Impl(Env& env,jclass jcls,jboolean isGlobal=false);
            ~Impl();
        };
        shared_ptr<Impl> impl;
    public:
        JavaClassSupplier(Env& env,jclass jcls,jboolean isGlobal=false);
        inline jclass get() const{
            return impl->jcls;
        }
        inline Env& getEnv() const{
            return impl->env;
        }
        inline jboolean isGlobal() const{
            return impl->isGlobal;
        }
        void setGlobal();
        inline JavaClassSupplier attach(Env& env) const{
            jclass jcls=(jclass)env->NewGlobalRef(impl->jcls);
            return JavaClassSupplier(env,jcls,true);
        }

    };

    template<typename Object>
    class JavaClass;

    class JavaObject{
        struct Impl{
            Env& env;
            jobject jobj;
            jboolean isGlobal;
            Impl(Env& env,jobject jobj,jboolean isGlobal=false);
            ~Impl();
        };
    protected:
        JavaClassSupplier cls;
        shared_ptr<Impl> impl;
    public:
        JavaObject(JavaClassSupplier jcls,jobject jobj,jboolean isGlobal=false);
        inline jobject get() const{
            return impl->jobj;
        }
        inline jboolean isGlobal() const{
            return impl->isGlobal;
        }
        void setGlobal();
        inline JavaClassSupplier getClass() const{
            return cls;
        }
        template<typename Object>
        inline jboolean instanceOf(JavaClass<Object>& cls) const{
            return cls.isClassOf(*this);
        }
        inline jboolean isNull() const{
            return impl->jobj==nullptr;
        }
        template<typename Object>
        inline Object as(JavaClass<Object>& cls) const{
            return cls.change(*this);
        }

    };

    template<typename Object>
    constexpr const char* getFullName();

    template <typename Object>
    class Array;

    template<typename Object>
    class JavaClass{
    protected:
        JavaClassSupplier impl;
        JavaClass(JavaClassSupplier& cls):impl(cls){}
    public:
        JavaClass(Env& env,jclass jcls,jboolean isGlobal=false);
        inline JavaClassSupplier& getSupplier(){
            return impl;
        }
        inline jboolean isGlobal() const{
            return impl.isGlobal();
        }
        inline void setGlobal(){
            impl.setGlobal();
        }
        jboolean isClassOf(JavaObject& obj) const;
        inline Object package(jobject jobj) const{
            return Object(impl,jobj);
        }
        inline Object change(JavaObject& obj) const{
            return package(obj.get());
        }
        inline Object null() const{
            return Object(impl,nullptr);
        }
        inline Array<Object> array(jsize size) const{
            return Array<Object>(*(JavaClass<Object>*)this,size);
        }
        inline jclass get() const{
            return impl.get();
        }
        constexpr inline const char* getFullName() const{
            return jnihelper::getFullName<Object>();
        } 
    };

    template<typename Object>
    class Array: public JavaObject{
        jsize size;
        string innerClassFullName;
    public:
        // Array(Env& env,jarray jarr);//package
        // Array(Env& env,jarray jarr,string innerClassFullName);//package
        Array(Env& env,jsize size);//only base struct data
        Array(JavaClassSupplier jcls,jobject jobj,jboolean isGlobal=false);
        Array(JavaClass<Object>& cls,jsize size);
        Array(Env& env,jsize size,string innerClassFullName);
        inline jsize length() const{
            return size;
        }
        void set(jint index,const Object& value);
        inline jarray get() const{
            return (jarray)impl->jobj;
        }
        Object get(jint index);
        Array<Array<Object>> array(jsize size=0) const{
            return Array<Array<Object>>(impl->env,size,"["+innerClassFullName);
        }
        Array package(jarray jarr){
            Env& env=impl->env;
            size=env->GetArrayLength((jarray)jarr);
            impl->jobj=jarr;
            return *this;
        }
    };

    

    template<typename Object>
    constexpr inline const char* getFullName(JavaClass<Object>&){
        return getFullName<Object>();
    }

    template<typename Object>
    Object attach(const Object& obj,Env& env);

    template<typename Object>
    JavaClass<Object> attach(const JavaClass<Object>& cls,Env& env);
    
    template<typename Object>
    Object attach(const Object& obj,Env& env){
        JavaClassSupplier cls=obj.getClass().attach(env);
        jobject jobj=env->NewGlobalRef(obj.get());
        return Object(cls,jobj,true);
    }

    template<typename Object>
    JavaClass<Object> attach(const JavaClass<Object>& cls,Env& env){
        jclass jcls=(jclass)env->NewGlobalRef(cls.get());
        return JavaClass<Object>(env,jcls,true);
    }

    template<typename Object>
    JavaClass<Object>::JavaClass(Env& env,jclass jcls,jboolean isGlobal):impl(env,jcls,isGlobal){}

    template<typename Object>
    jboolean JavaClass<Object>::isClassOf(JavaObject& obj) const{
        Env& env=impl.getEnv();
        return env->IsInstanceOf(obj.get(),impl.get());
    }


    

    template<typename Object>
    Array<Object>::Array(JavaClass<Object>& cls,jsize size):
        JavaObject(cls.getSupplier(),cls.getSupplier().getEnv()->NewObjectArray(size,cls.get(),nullptr)),innerClassFullName(cls.getFullName()){}
    template<typename Object>
    Array<Object>::Array(JavaClassSupplier jcls,jobject jobj,jboolean isGlobal):
        JavaObject(jcls,jobj,isGlobal),innerClassFullName(getFullName<Object>()){}
    template<typename Object>
    Array<Object>::Array(Env& env,jsize size,string innerClassFullName):
        JavaObject(JavaClassSupplier(env,env->FindClass(("["+innerClassFullName).c_str())),env->NewObjectArray(size,env->FindClass(innerClassFullName.c_str()),nullptr)),innerClassFullName(innerClassFullName){}
    // template<typename Object>
    // Array<Object>::Array(Env& env,jsize size):
    //     JavaObject(JavaClassSupplier(env,env->FindClass((string("[")+getFullName<Object>()).c_str())),env->NewObjectArray(size,env->FindClass(getFullName<Object>()),nullptr)){}

    template<typename Object>
    Object Array<Object>::get(jint index){
        Env& env=cls.getEnv();
        return Object(cls,env->GetObjectArrayElement((jobjectArray)impl->jobj,index));
    }

    template<typename Object>
    void Array<Object>::set(jint index,const Object& obj){
        Env& env=cls.getEnv();
        env->SetObjectArrayElement((jobjectArray)impl->jobj,index,obj.get());
    }

    template<>
    constexpr inline const char* ::jnihelper::getFullName<jboolean>(){
        return "Z";
    }
    template<>
    constexpr inline const char* ::jnihelper::getFullName<jbyte>(){
        return "B";
    }
    template<>
    constexpr inline const char* ::jnihelper::getFullName<jchar>(){
        return "C";
    }
    template<>
    constexpr inline const char* ::jnihelper::getFullName<jshort>(){
        return "S";
    }
    template<>
    constexpr inline const char* ::jnihelper::getFullName<jint>(){
        return "I";
    }
    template<>
    constexpr inline const char* ::jnihelper::getFullName<jlong>(){
        return "J";
    }
    template<>
    constexpr inline const char* ::jnihelper::getFullName<jfloat>(){
        return "F";
    }
    template<>
    constexpr inline const char* ::jnihelper::getFullName<jdouble>(){
        return "D";
    }


    //IntArray
    typedef Array<jint> IntArray;
    template<>
    IntArray::Array(Env& env,jsize size);
    template<>
    jint IntArray::get(jint index);
    template<>
    void IntArray::set(jint index,const jint& value);
    //LongArray
    typedef Array<jlong> LongArray;
    template<>
    LongArray::Array(Env& env,jsize size);
    template<>
    jlong LongArray::get(jint index);
    template<>
    void LongArray::set(jint index,const jlong& value);
    //FloatArray
    typedef Array<jfloat> FloatArray;
    template<>
    FloatArray::Array(Env& env,jsize size);
    template<>
    jfloat FloatArray::get(jint index);
    template<>
    void FloatArray::set(jint index,const jfloat& value);
    //DoubleArray
    typedef Array<jdouble> DoubleArray;
    template<>
    DoubleArray::Array(Env& env,jsize size);
    template<>
    jdouble DoubleArray::get(jint index);
    template<>
    void DoubleArray::set(jint index,const jdouble& value);
    //ShortArray
    typedef Array<jshort> ShortArray;
    template<>
    ShortArray::Array(Env& env,jsize size);
    template<>
    jshort ShortArray::get(jint index);
    template<>
    void ShortArray::set(jint index,const jshort& value);
    //ByteArray
    typedef Array<jbyte> ByteArray;
    template<>
    ByteArray::Array(Env& env,jsize size);
    template<>
    jbyte ByteArray::get(jint index);
    template<>
    void ByteArray::set(jint index,const jbyte& value);
    //CharArray
    typedef Array<jchar> CharArray;
    template<>
    CharArray::Array(Env& env,jsize size);
    template<>
    jchar CharArray::get(jint index);
    template<>
    void CharArray::set(jint index,const jchar& value);
    //BooleanArray
    typedef Array<jboolean> BooleanArray;
    template<>
    BooleanArray::Array(Env& env,jsize size);
    template<>
    jboolean BooleanArray::get(jint index);
    template<>
    void BooleanArray::set(jint index,const jboolean& value);
}