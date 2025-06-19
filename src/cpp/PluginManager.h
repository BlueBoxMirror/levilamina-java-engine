#pragma once

#include "ll/api/Expected.h"
#include "ll/api/mod/ModManager.h"

namespace lje{

class LJE_Manager : public ll::mod::ModManager{
    friend class LJE;
public:
    static bool loadPlugin(const std::string& modDirPath);
    static LJE_Manager& getInstance();

    LJE_Manager();

    LJE_Manager(const LJE_Manager&)                    = delete;
    LJE_Manager(LJE_Manager&&)                         = delete;
    auto operator=(const LJE_Manager&) -> LJE_Manager& = delete;
    auto operator=(LJE_Manager&&) -> LJE_Manager&      = delete;

    //void removeMod(std::string_view name);

    ~LJE_Manager() override = default;

private:
    ll::Expected<> load(ll::mod::Manifest manifest)override;
    ll::Expected<> unload(std::string_view name) override;
};

}