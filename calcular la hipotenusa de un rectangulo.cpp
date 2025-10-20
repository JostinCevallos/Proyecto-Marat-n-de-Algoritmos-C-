/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <cmath> // Necesario para sqrt(), pow() y hypot()
#include <iomanip> // Necesario para std::fixed y std::setprecision

int main() {
    double cateto1, cateto2, hipotenusa;

    std::cout << "Calculadora de hipotenusa de un triangulo rectangulo" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    std::cout << "Introduce la longitud del primer cateto: ";
    std::cin >> cateto1;

    std::cout << "Introduce la longitud del segundo cateto: ";
    std::cin >> cateto2;

    // Opción 1: Usando el teorema de Pitágoras directamente
    // hipotenusa = std::sqrt(std::pow(cateto1, 2) + std::pow(cateto2, 2));

    // Opción 2: Usando la función hypot() (recomendado)
    hipotenusa = std::hypot(cateto1, cateto2);

    std::cout << std::fixed << std::setprecision(2); // Para mostrar el resultado con 2 decimales
    std::cout << "La hipotenusa es: " << hipotenusa << std::endl;

    return 0;
}
