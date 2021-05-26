#include <napi.h>
#include "Cone.h"

Napi::Value CalculateTriangulation(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();

  double Nsegments = 100.435;
  double Height = 100.435;
  double Radius = 100.435;
  // double Nsegments = Napi::Number(env, info[0]).DoubleValue();
  // double Height = Napi::Number(env, info[1]).DoubleValue();
  // double Radius = Napi::Number(env, info[2]).DoubleValue();
  // double Height = info[1].As<Napi::Number>().DoubleValue();
  // double Radius = info[2].As<Napi::Number>().DoubleValue();

  Cone calculatedCone = Cone(Height, Radius, Nsegments);

  Napi::Object expObj = calculatedCone.makeNapiObject(env);

  return expObj;
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
  exports.Set(Napi::String::New(env, "CalculateTriangulation"), Napi::Function::New(env, CalculateTriangulation));
  return exports;
}

NODE_API_MODULE(addon, Init)
