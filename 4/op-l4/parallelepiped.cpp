#include "parallelepiped.h"

Parallelepiped::Parallelepiped()
{

}

Parallelepiped::Parallelepiped(double _a, double _b, double _c) : Figure(_a), b(_b), c(_c)
{

}

double Parallelepiped::get_volume() {
    return a * b * c;
}

double Parallelepiped::get_square() {
    return (a * b) * 2 + (a * c) * 2 + (b * c) *2;
}

