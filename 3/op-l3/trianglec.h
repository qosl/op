#ifndef TRIANGLEC_H
#define TRIANGLEC_H

#include "tools.h"
#include "segment.h"

class TriangleC : public Segment
{
protected:
    std::pair <double, double> C_C;
    double speed;
public:
    TriangleC() {}
    void init(std::pair<double, double> _pointA,
              std::pair<double, double> _pointB,
              std::pair<double, double> _pointC,
              double _speed) {

        std::cout << "Object of TriangleC created" << std::endl;

        A = _pointA;
        B = _pointB;
        C_C = _pointC;
        speed  = _speed;
    }
    void toString() {
        std::cout << A.first  << " "
                  << A.second << std::endl;
        std::cout << B.first  << " "
                  << B.second << std::endl;
        std::cout << C_C.first  << " "
                  << C_C.second << std::endl;
        std::cout << speed << std::endl;
    }
    double getSquare() {
        std::cout << "Square of triangle of class TriangleC: ";
        return (fabs((0.5) * ((A.first - C_C.first)*(B.second - C_C.second) -
                      (B.first - C_C.first)*(A.second - C_C.second))));
    }
};

#endif // TRIANGLEA_H
