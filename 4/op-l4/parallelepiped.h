#ifndef PARALLELEPIPED
#define PARALLELEPIPED

#include "figure.h"
#include "tetrahedron.h"

class Parallelepiped : public Figure {
    double b;
    double c;
public:
    Parallelepiped() {}

    Parallelepiped(double _a, double _b, double _c) : Figure(_a), b(_b), c(_c) {}

    double get_volume() {
        return a * b * c;
    }
};

#endif // PARALLELEPIPED
