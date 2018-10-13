#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include <iostream>
#include <cmath>


using namespace std;
namespace name_triangle {

struct point2d{
    double x;
    double y;

};


struct Parameters
{
    point2d p1;
    point2d p2;
    point2d p3;

};

double compute_perimeter(Parameters triangulo);
}

#endif // TRIANGLE_HPP
