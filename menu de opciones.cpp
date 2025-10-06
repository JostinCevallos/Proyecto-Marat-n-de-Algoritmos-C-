/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion, edad;
    string nombre;
    do {
        cout << "\n=== MENÚ ===" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Mostrar tu edad en 10 años" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingresa tu nombre: ";
                cin >> nombre;
                cout << "¡Hola, " << nombre << "!" << endl;
                break;
            case 2:
                cout << "Ingresa tu edad actual: ";
                cin >> edad;
                cout << "En 10 años tendrás " << edad + 10 << " años." << endl;
                break;
            case 3:
                cout << "¡Adiós!" << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 3);
    return 0;
}