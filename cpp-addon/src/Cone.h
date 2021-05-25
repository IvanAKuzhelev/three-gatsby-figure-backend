#ifndef Coneh
#define Coneh
#include <vector>
#include "ConeCamera.h"
#include <napi.h>



class Cone
{
private:
    double Height;
    double Radius;
    double Nsegments;
    std::vector<double> vertices;
    std::vector<double> indices;
    std::vector<double> normals;
    СoneCamera Camera;
    void setVertices();
    void setIndices();
    void setNormals();
    Napi::Array doubleVectorToNapiArray(std::vector<double> vec);
public:
    Cone(double H, double R, double N);
    Napi::Object makeNapiObject (Napi::Env env);
};

#endif

