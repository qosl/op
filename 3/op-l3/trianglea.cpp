#include "trianglea.h"
#include "segment.h"

TriangleA::TriangleA(){ }

void TriangleA::init(std::pair<double, double> _pointA,
                     std::pair<double, double> _pointB,
                     std::pair<double, double> _pointC) {
    std::cout << "Object of class A" << std::endl;
    pointA = _pointA;
    pointB = _pointB;
    pointC = _pointC;
}


