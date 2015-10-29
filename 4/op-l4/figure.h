#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
protected:
    double a;
public:
    Figure();
    Figure(double _a) : a(_a) {}
    virtual double get_volume() = 0;
};

#endif // FIGURE_H
