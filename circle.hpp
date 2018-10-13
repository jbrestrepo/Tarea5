#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <iostream>
#include <cmath>


using namespace std;
namespace name_circle {

const double PI = atan(1.0)*4;

struct point2d{
    double x;
    double y;
};


struct Parameters
{
    double radio;
    point2d center;
};

double compute_perimeter(Parameters circulo);
}

#endif // CIRCLE_HPP
