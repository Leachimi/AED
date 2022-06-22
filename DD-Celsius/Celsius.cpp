#include <cassert>
#include <iostream>
//FUNCION MATEMATICA
//C: R --> R / C(a) = (5/9)*(x - 32)
//AN: RxRxR --> B / AN(a, b, c) = { b - |c| <= a <= b + |c|

//Prototipo
double Celsius(double x);
bool areNear(double x, double y , double = 0.01);
double modulo(double x);

int main() {
    //Prueba Celsius
    //assert(0 == Celsius(32));
    assert(10 == Celsius(50.0));
    //std :: cout << Celsius(50.0);
    //Prueba areNear
    assert(areNear(0.9, 1.0, 0.1));
    assert(areNear(45.99 ,46.0));
}
//Definiciones
double Celsius(double x) {
    //return 10.0;
    return (5.0/9.0)*(x - 32.0);
}

bool areNear(double x, double y , double z) {
    return (y - modulo(z)) <= x and x <= (y + modulo(z));
}
double modulo(double x) {
    if(x >= 0)
    {
        return x;
    }
    return -x;    
}