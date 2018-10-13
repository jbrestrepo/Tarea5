#ifndef SQUARE_HPP
#define SQUARE_HPP

#include <iostream>
#include <cmath>


using namespace std;

namespace name_square {

struct point2d{
    double x;
    double y;

};


struct Parameters
{
    point2d p1;
    point2d p2;
    point2d p3;
    point2d p4;
};

double compute_perimeter(Parameters cuadrado);
}
#endif // SQUARE_HPP
