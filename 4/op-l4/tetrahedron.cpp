#include "tetrahedron.h"
#include "figure.h"

Tetrahedron::Tetrahedron()
{

}

Tetrahedron::Tetrahedron(double _a) : Figure(_a)
{

}

double Tetrahedron::get_volume() {
    return (a * a * a) / (6 * sqrt(2));
}

double Tetrahedron::get_square() {
    return (a * a) * (sqrt(3));
}
