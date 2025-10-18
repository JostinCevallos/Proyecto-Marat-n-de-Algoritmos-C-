/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Incluye la librería para entrada y salida de datos

int main() {
    // Declara variables para la base, altura, área y perímetro
    double base, altura, area, perimetro;

    // Pide al usuario que ingrese la base
    std::cout << "Introduce la base del rectangulo: ";
    std::cin >> base; // Lee el valor de la base

    // Pide al usuario que ingrese la altura
    std::cout << "Introduce la altura del rectangulo: ";
    std::cin >> altura; // Lee el valor de la altura

    // Calcula el área
    area = base * altura; // Fórmula: area = base * altura

    // Calcula el perímetro
    perimetro = 2 * (base + altura); // Fórmula: perimetro = 2 * (base + altura)

    // Muestra los resultados
    std::cout << "El area del rectangulo es: " << area << std::endl;
    std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;

    return 0; // Indica que el programa terminó correctamente
}
