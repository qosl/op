#ifndef CUBE
#define CUBE

#include "figure.h"

class Cube : public Figure
{
public:
    Cube ();

    Cube (double _a);

    double get_volume();

    double get_square();
};
#endif // CUBE
