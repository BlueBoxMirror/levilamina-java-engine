#include "jnihelper.h"
#include <thread>
#include <unordered_map>
#include <stdexcept>

namespace jnihelper{
    static JavaVM* jvm;
    static jint version;
    static unordered_map<thread::id, int> threadMap;
    static void addThreadCount(){
        auto id=this_thread::get_id();
        auto it=threadMap.find(id);
        if(it==threadMap.end()){
            threadMap[id]=1;
        }else{
            it->second++;
        }
    }
    static bool removeThreadCount(){
        auto id=this_thread::get_id();
        auto it=threadMap.find(id);
        if(it==threadMap.end()) return true;
        it->second--;
        if(it->second==0){
            threadMap.erase(it);
            return true;
        }
        return false;
    }
    
    Env::Impl::Impl(JNIEnv* env):env(env){
        addThreadCount();
    }
    Env::Impl::Impl(){
        JNIEnv* env=nullptr;
        jint status = jvm->GetEnv((void**)&env, version);
        if(status!= JNI_OK){
            status = jvm->AttachCurrentThread((void**)&env, nullptr);
            if(status != JNI_OK){
                throw std::runtime_error("Failed to attach current thread to JVM");
            }
        }
        addThreadCount();
        this->env = env;
    }
    Env::Impl::~Impl(){
        if(removeThreadCount()){
            jvm->DetachCurrentThread();
        }
    }
    void Env::createJvm(JavaVM* jvm,jint version){
        jnihelper::jvm = jvm;
        jnihelper::version = version;
    }
    CreatedJavaVMResult Env::createJvm(JavaVMInitArgs* vm_args){
        JNIEnv* env=nullptr;
        version=vm_args->version;
        auto status = JNI_CreateJavaVM(&jvm, (void**)&env, vm_args);
        addThreadCount();
        registerNatives(env);
        return {env,status};
    }
    CreatedJavaVMResult Env::createJvm(JavaVMOption* options,jint nOptions,jint version,jboolean ignoreUnrecognized){
        JavaVMInitArgs vm_args;
        vm_args.nOptions=nOptions;
        vm_args.version = version;
        vm_args.ignoreUnrecognized = ignoreUnrecognized;
        vm_args.options = options;
        return createJvm(&vm_args);
    }
    CreatedJavaVMResult Env::createJvm(vector<string> jvmArgs,jint version,jboolean ignoreUnrecognized){
        std::vector<JavaVMOption> options(jvmArgs.size());
        for (int i = 0; i < jvmArgs.size(); i++) {
            options[i].optionString = (char*)(jvmArgs[i].c_str());
        }
        return createJvm(options.data(), jvmArgs.size(), version, ignoreUnrecognized);
    }
    jint Env::destroyJvm(){
        return jvm->DestroyJavaVM();
    }
}