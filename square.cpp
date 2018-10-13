#include "square.hpp"

namespace name_square {

double compute_perimeter(Parameters cuadrado)
{
    double perimetro,l1,l2,l3,l4;


    l1 = (sqrt(pow(cuadrado.p2.x-cuadrado.p1.x,2)+ pow(cuadrado.p2.y-cuadrado.p1.y,2)));
    l2 = (sqrt(pow(cuadrado.p3.x-cuadrado.p2.x,2)+ pow(cuadrado.p3.y-cuadrado.p2.y,2)));
    l3 = (sqrt(pow(cuadrado.p4.x-cuadrado.p3.x,2)+ pow(cuadrado.p4.y-cuadrado.p3.y,2)));
    l4 = (sqrt(pow(cuadrado.p1.x-cuadrado.p4.x,2)+ pow(cuadrado.p1.y-cuadrado.p4.y,2)));

    perimetro = l1+l2+l3+l4;

    return perimetro;

}
}
