/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Incluir la librería iostream para entrada/salida

int main() {
    int num1, num2, resultado; // Declarar variables enteras

    std::cout << "Ingrese el primer número: "; // Solicitar el primer número
    std::cin >> num1; // Leer el primer número del usuario

    std::cout << "Ingrese el segundo número: "; // Solicitar el segundo número
    std::cin >> num2; // Leer el segundo número del usuario

    resultado = num1 - num2; // Realizar la resta con el operador '-'

    std::cout << "La resta es: " << resultado << std::endl; // Mostrar el resultado

    return 0; // Indicar que el programa terminó correctamente
}