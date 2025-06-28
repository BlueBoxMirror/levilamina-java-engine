// This file is generated automatically.
#include "mc/world/actor/Actor.h"
#include "jnihelper/jni/headers/bluebox/ll/world/actor/Actor.h"

namespace jnihelper::jni {

//{_tag_}kill()V
void Java_bluebox_ll_world_actor_Actor_kill(::JNIEnv* envPtr, ::jobject n_thisObj) {
    Env env(envPtr);
    IMPORT(bluebox::ll::world::actor, Actor)
    auto thisObj = Actor.package(n_thisObj);
    auto actor   = (::Actor*)thisObj.f_nativePtr();
    actor->kill();
}
}