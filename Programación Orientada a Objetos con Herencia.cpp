/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Figura {
public:
    virtual double area() = 0; // método abstracto
};

class Circulo : public Figura {
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double area() override { return 3.1416 * radio * radio; }
};

class Rectangulo : public Figura {
    double ancho, alto;
public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}
    double area() override { return ancho * alto; }
};

int main() {
    Figura* f1 = new Circulo(3);
    Figura* f2 = new Rectangulo(4, 5);

    cout << "Área del círculo: " << f1->area() << endl;
    cout << "Área del rectángulo: " << f2->area() << endl;

    delete f1;
    delete f2;
    return 0;
}








