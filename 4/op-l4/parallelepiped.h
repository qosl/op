#ifndef PARALLELEPIPED
#define PARALLELEPIPED

#include "figure.h"
#include "tetrahedron.h"

class Parallelepiped : public Figure {
    double b;
    double c;
public:
    Parallelepiped();

    Parallelepiped(double _a, double _b, double _c);

    double get_volume();

    double get_square();
};

#endif // PARALLELEPIPED
