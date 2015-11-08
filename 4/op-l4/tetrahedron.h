#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H
#include "figure.h"
#include <cmath>

class Tetrahedron : public Figure
{
public:
    Tetrahedron()
    {

    }

    Tetrahedron(double _a) : Figure(_a)
    {

    }

    double get_volume() {
        return (a * a * a) / (6 * sqrt(2));
    }

    double get_square() {
        return (a * a) * (sqrt(3));
    }

};

#endif // TETRAHEDRON_H

