#include "circle.hpp"


namespace name_circle {

double compute_perimeter(Parameters circulo)
{
    double perimetro;

    perimetro = (circulo.radio)* 2*PI;

    return perimetro;

}

}
