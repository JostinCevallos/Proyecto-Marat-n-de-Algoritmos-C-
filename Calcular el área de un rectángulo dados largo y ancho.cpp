/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

int main() {
  // Declarar variables para largo, ancho y área
  int largo, ancho, area;

  // Solicitar al usuario que ingrese el largo del rectángulo
  std::cout << "Ingrese el largo del rectangulo: ";
  std::cin >> largo;

  // Solicitar al usuario que ingrese el ancho del rectángulo
  std::cout << "Ingrese el ancho del rectangulo: ";
  std::cin >> ancho;

  // Calcular el área multiplicando el largo por el ancho
  area = largo * ancho;

  // Mostrar el resultado del área
  std::cout << "El area del rectangulo es: " << area << std::endl;

  return 0;
}

