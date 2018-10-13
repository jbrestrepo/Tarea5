#include <iostream>
#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"

using namespace std;

int main()
{
   {
    using namespace name_circle;

    double perimetro;

    Parameters cir;

    cir.radio = 3;
    cir.center.x = 0;
    cir.center.y = 0;

    perimetro = compute_perimeter(cir);
    cout << "Perimeter Of Circle Is: " ;
    cout << perimetro <<endl;
    cout << endl;
    cout << endl;

    }

    {
    using namespace name_square;


    double perimetro;

    Parameters cua;

    cua.p1.x = 2;
    cua.p1.y = 1;
    cua.p2.x = 6;
    cua.p2.y = 1;
    cua.p3.x = 6;
    cua.p3.y = 4;
    cua.p4.x = 2;
    cua.p4.y = 4;

    perimetro = compute_perimeter(cua);

    cout << "Perimeter Of Square Is: " ;
    cout << perimetro <<endl;
    cout << endl;
    cout << endl;

    }

    {
    using namespace name_triangle;

    double perimetro;

    Parameters triang;

    triang.p1.x = 1;
    triang.p1.y = 2;
    triang.p2.x = 9;
    triang.p2.y = 2;
    triang.p3.x = 9;
    triang.p3.y = 6;

    perimetro = compute_perimeter(triang);
    cout <<"Perimeter Of Triangle Is: ";
    cout << perimetro <<endl;
    cout <<endl;
    cout <<endl;

    }
    return 0;
}
