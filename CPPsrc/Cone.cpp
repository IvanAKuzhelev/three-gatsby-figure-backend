#include "Cone.h"
#include <numbers>
#include <cmath>

void Cone::setVertices () {

    vertices.insert(vertices.end(), { 0, 0, 0 });
    vertices.insert(vertices.end(), { 0, 0, Height });

    for (int i = 0; i < Nsegments; i++) 
    {
    vertices.insert(vertices.end(), { 
        Radius*cos((2*std::numbers::pi*i)/Nsegments),
        Radius*sin((2*std::numbers::pi*i)/Nsegments), 
        0 
        });

    }
}

void Cone::setIndices () {
    for (double i = 2; i <= Nsegments; i++)
    {
    indices.insert(indices.end(), {i + 1, 1, i});
    indices.insert(indices.end(), {i, 0, i + 1}); 
    }
    indices.insert(indices.end(), {Nsegments, 0, 2}); 
    indices.insert(indices.end(), {2, 1, Nsegments}); 
}

void Cone::setNormals () 
{
    double Px, Py, Pz, normalMagn;
    double Bz = -(Radius/Height);
    for (int i = 3; i<vertices.size(); i+=3) {
        Px = vertices[i];
        Py = vertices[i+1];
        Pz = vertices[i+2];
        normalMagn = sqrt(pow(Px, 2) + pow(Py, 2) + pow(Pz-Bz, 2));
        normals.insert(normals.end(), {Px/normalMagn, Py/normalMagn, (Pz-Bz)/normalMagn});
    }   
}

Cone::Cone (double H, double R, double N) 
{
    Height = H;
    Radius = R;
    Nsegments = N;
    Camera = ConeCamera(Radius, Height);
    setVertices();
    setIndices();
    setNormals();
}
