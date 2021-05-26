#ifndef ConeCamerah
#define ConeCamerah
#include <napi.h>
class ConeCamera
{
private:
    double x;
    double y;
    double z;
    double far;

public:
    ConeCamera(double coneRadius = 100, double coneHeight = 300);
    Napi::Object makeCameraNapiObject(Napi::Env env);
};
#endif