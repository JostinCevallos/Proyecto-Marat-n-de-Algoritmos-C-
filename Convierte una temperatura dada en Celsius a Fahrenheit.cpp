/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip> // Para formatear la salida (opcional)

using namespace std;

int main() {
    float celsius, fahrenheit;

    // Solicitar al usuario que ingrese la temperatura en Celsius
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius; // Leer la entrada del usuario

    // Aplicar la fórmula de conversión: F = (C * 9/5) + 32
    // Se usa 9.0/5.0 o 1.8 para asegurar operaciones de punto flotante
    fahrenheit = (celsius * 1.8) + 32;

    // Mostrar el resultado con una precisión de dos decimales (opcional)
    cout << fixed << setprecision(2);
    cout << "\nLa temperatura equivalente en Fahrenheit es: " << fahrenheit << " F" << endl;

    return 0;
}
