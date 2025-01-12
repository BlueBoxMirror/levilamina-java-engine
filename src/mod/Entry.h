#pragma once

#include "PluginManager.h"
#include "ll/api/mod/NativeMod.h"

#include "jni.h"

#define PACK_JAVA_NAME(name) "Lbluebox/ll/" name ";"
#define JCLASS_STRING "Ljava/lang/String;"
#define JCLASS_LEVILAMINA PACK_JAVA_NAME("plugin/LeviLamina")
#define JCLASS_LOGGER PACK_JAVA_NAME("Logger")

namespace lje {

JavaVM* getJVM();
JNIEnv* getEnv();
void detachCurrentThread();

class LJE{

public:

    static LJE_Manager& getPluginManager();

    static LJE& getInstance();

    LJE(ll::mod::NativeMod& self) : mSelf(self) {}

    [[nodiscard]] ll::mod::NativeMod& getSelf() const { return mSelf; }

    /// @return True if the mod is loaded successfully.
    bool load();

    /// @return True if the mod is enabled successfully.
    bool enable();

    /// @return True if the mod is disabled successfully.
    bool disable();

    // TODO: Implement this method if you need to unload the mod.
    // /// @return True if the mod is unloaded successfully.
    // bool unload();

private:
    ll::mod::NativeMod& mSelf;
};

} // namespace lje