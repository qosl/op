#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>

class Figure
{
protected:
    double a;
public:
    Figure();

    Figure(double _a);

    virtual ~Figure() {
        std::cout << "I'm destructoor" << std::endl;
    }

    virtual double get_volume() = 0;

    virtual double get_square() = 0;
};

#endif // FIGURE_H





