#ifndef Coneh
#define Coneh
#include <vector>
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
    СoneCamera Camera;
    void setVertices();
    void setIndices();
    void setNormals();
public:
    Cone(double H, double R, double N);
    void exportToNodeJS ();
};

#endif

