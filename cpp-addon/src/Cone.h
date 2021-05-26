#ifndef Coneh
#define Coneh
#include <vector>
#include <napi.h>
#include "ConeCamera.h"



class Cone
{
private:
    double Height;
    double Radius;
    double Nsegments;
    std::vector<double> vertices;
    std::vector<double> indices;
    std::vector<double> normals;
    ConeCamera Camera;
    void setVertices();
    void setIndices();
    void setNormals();
    Napi::Array doubleVectorToNapiArray(Napi::Env env, std::vector<double> vec);
public:
    Cone(double H, double R, double N);
    Napi::Object makeNapiObject (Napi::Env env);
};

#endif

