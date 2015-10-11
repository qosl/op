#ifndef TRIANGLEB_H
#define TRIANGLEB_H

#include "tools.h"
#include "segment.h"

class TriangleB : public Segment
{
protected:
    std::pair <double, double> TriangleB_C;
    std::string color;
public:
    TriangleB() {}
    void init(std::pair<double, double> _A,
              std::pair<double, double> _B,
              std::pair<double, double> _C,
              std::string _color) {

        std::cout << "Object of TriangleB created" << std::endl;

        A = _A;
        B = _B;
        TriangleB_C = _C;
        color  = _color;
    }
    void toString() {
        std::cout << A.first  << " "
                  << A.second << std::endl;
        std::cout << B.first  << " "
                  << B.second << std::endl;
        std::cout << TriangleB_C.first  << " "
                  << TriangleB_C.second << std::endl;
        //std::cout << color         << std::endl;
    }
    double getSquare() {
        std::cout << "Square of triangle of class TriangleB: ";
        return (fabs((0.5) * ((A.first - TriangleB_C.first)*(B.second - TriangleB_C.second) -
                      (B.first - TriangleB_C.first)*(A.second - TriangleB_C.second))));
    }
};

#endif // TRIANGLEA_H
