#ifndef ConeCamerah
#define ConeCamerah
class ConeCamera
{
private:
    double x;
    double y;
    double z;
    double far;

public:
    ConeCamera(double coneRadius, double coneHeight);
};
#endif