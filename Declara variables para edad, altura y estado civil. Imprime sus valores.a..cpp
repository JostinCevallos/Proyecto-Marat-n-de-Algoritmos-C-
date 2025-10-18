/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

int main() {
    // Declaración de variables
    int edad;
    double altura; // Usamos double para mayor precisión
    std::string estadoCivil;

    // Solicitar datos al usuario
    std::cout << "Introduce la edad: ";
    std::cin >> edad;

    std::cout << "Introduce la altura (ej. 1.75): ";
    std::cin >> altura;

    std::cout << "Introduce el estado civil: ";
    std::cin >> estadoCivil;

    // Imprimir los valores ingresados
    std::cout << "\n--- Valores ingresados ---" << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Altura: " << altura << std::endl;
    std::cout << "Estado Civil: " << estadoCivil << std::endl;

    return 0;
}
