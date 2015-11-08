#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H
#include "figure.h"
#include <cmath>

class Tetrahedron : public Figure
{
public:
    Tetrahedron();

    Tetrahedron(double _a);

    double get_volume();

    double get_square();
};

#endif // TETRAHEDRON_H

