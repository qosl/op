#ifndef TRIANGLEA_H
#define TRIANGLEA_H

#include "tools.h"
#include "segment.h"

class TriangleA : public Segment
{
protected:
    std::pair <double, double> triangleA_C;
public:
    TriangleA() {}
    void init(std::pair<double, double> _A,
              std::pair<double, double> _B,
              std::pair<double, double> _C) {

        std::cout << "Object of TriangleA created" << std::endl;

        A = _A;
        B = _B;
        triangleA_C = _C;
    }

    void toString() {
        std::cout << A.first  << " "
                  << A.second << std::endl;
        std::cout << B.first  << " "
                  << B.second << std::endl;
        std::cout << triangleA_C.first  << " "
                  << triangleA_C.second << std::endl;
    }

    double getSquare() {
        std::cout << "Square of triangle of class TriangleA: ";
        return (fabs((0.5) * ((A.first - triangleA_C.first)*(B.second - triangleA_C.second) -
                      (B.first - triangleA_C.first)*(A.second - triangleA_C.second))));
    }
};

#endif // TRIANGLEA_H
