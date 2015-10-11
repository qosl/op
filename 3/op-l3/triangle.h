#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "trianglea.h"
#include "triangleb.h"
#include "trianglec.h"

class Triangle : public TriangleA, public TriangleB, public TriangleC
{
    int id;
public:
    Triangle(std::pair<double, double> _A,
             std::pair<double, double> _B,
             std::pair<double, double> _C) {
        TriangleA::init(_A, _B, _C);
        id = 0;
    }

    Triangle(std::pair<double, double> _A,
             std::pair<double, double> _B,
             std::pair<double, double> _C,
             std::string _color) {
        TriangleB::init(_A, _B, _C, _color);
        id = 1;
    }

    Triangle(std::pair<double, double> _A,
             std::pair<double, double> _B,
             std::pair<double, double> _C,
             double _speed) {
        TriangleC::init(_A, _B, _C, _speed);
        id = 2;
    }

    double getsquare() {
        if (id == 0) {
            return TriangleA::getSquare();
        }
        else if (id == 1) {
            return TriangleB::getSquare();
        }
        else {
            return TriangleC::getSquare();
        }
    }
};

#endif // TRIANGLE_H
