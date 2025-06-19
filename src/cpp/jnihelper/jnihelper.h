#pragma once

#include <jni.h>
#include <memory>
#include <vector>
#include <string>

#define IMPORT(package,name) auto name = jnihelper::proxy::package::C_##name(env);


using namespace std;

namespace jnihelper{
    void registerNatives(JNIEnv* env);//This function need use JNIHelper to implement.

    struct CreatedJavaVMResult;

    class Env{
    private:
        class Impl{
            
        public:
            Impl();
            Impl(JNIEnv* env);
            JNIEnv* env;
            ~Impl();
        };
        shared_ptr<Impl> impl;
    public:
        Env():impl(std::make_shared<Impl>()){}
        Env(JNIEnv* env):impl(std::make_shared<Impl>(Impl(env))){}
        static CreatedJavaVMResult createJvm(JavaVMInitArgs* vm_args);
        static CreatedJavaVMResult createJvm(vector<string> jvmArgs,jint version=JNI_VERSION_1_8,jboolean ignoreUnrecognized=JNI_FALSE);
        static CreatedJavaVMResult createJvm(JavaVMOption* options,jint nOptions,jint version=JNI_VERSION_1_8,jboolean ignoreUnrecognized=JNI_FALSE);
        static void createJvm(JavaVM* jvm,jint version);
        static jint destroyJvm();
        JNIEnv* operator->(){
            return impl->env;
        }
    };

    struct CreatedJavaVMResult{
        Env env;
        jint result;
    };
}