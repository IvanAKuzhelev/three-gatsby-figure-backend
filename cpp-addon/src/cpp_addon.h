#pragma once

#include <napi.h>

class CppAddon : public Napi::ObjectWrap<CppAddon>
{
public:
    CppAddon(const Napi::CallbackInfo&);
    Napi::Value Greet(const Napi::CallbackInfo&);

    static Napi::Function GetClass(Napi::Env);

private:
    std::string _greeterName;
};
