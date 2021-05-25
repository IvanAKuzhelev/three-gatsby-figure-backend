#include "ConeCamera.h"
#include <algorithm>

ConeCamera::ConeCamera(double coneRadius, double coneHeight) {
    x = -5 * coneRadius;
    y = -7 * coneRadius;
    z = 0.85 * coneRadius;
    far = 900 * std::max(coneRadius, coneHeight);
}
