#include "cube.h"

Cube::Cube ()
{

}

Cube::Cube (double _a) : Figure(_a)
{

}

double Cube::get_volume() {
    return a * a * a;
}

double Cube::get_square() {
    return 6 * (a * a);
}
