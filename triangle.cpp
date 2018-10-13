#include "triangle.hpp"

namespace name_triangle {

double compute_perimeter(Parameters triangulo)
{
    double perimetro,l1,l2,l3;

    l1 = (sqrt(pow(triangulo.p2.x-triangulo.p1.x,2)+ pow(triangulo.p2.y-triangulo.p1.y,2)));
    l2 = (sqrt(pow(triangulo.p3.x-triangulo.p2.x,2)+ pow(triangulo.p3.y-triangulo.p2.y,2)));
    l3 = (sqrt(pow(triangulo.p1.x-triangulo.p3.x,2)+ pow(triangulo.p1.y-triangulo.p3.y,2)));

    perimetro = l1+l2+l3;

     return perimetro;


}
}
