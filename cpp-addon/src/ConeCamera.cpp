#include "ConeCamera.h"
#include <algorithm>
#include <napi.h>

ConeCamera::ConeCamera(double coneRadius = 100, double coneHeight = 100)
{
    x = -5 * coneRadius;
    y = -7 * coneRadius;
    z = 0.85 * coneRadius;
    far = 900 * std::max(coneRadius, coneHeight);
}

Napi::Object ConeCamera::makeCameraNapiObject(Napi::Env env)
{
    Napi::Object CameraObject = Napi::Object::New(env);
    CameraObject.Set("x", x);
    CameraObject.Set("y", y);
    CameraObject.Set("z", z);
    CameraObject.Set("far", far);
    return CameraObject;
}