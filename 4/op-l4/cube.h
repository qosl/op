#ifndef CUBE
#define CUBE

#include "figure.h"

class Cube : public Figure
{
public:
    Cube ()
    {

    }

    Cube (double _a) : Figure(_a)
    {

    }

    double get_volume() {
        return a * a * a;
    }

    double get_square() {
        return 6 * (a * a);
    }

};
#endif // CUBE
