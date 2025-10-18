/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

enum class Dia { Lunes, Martes, Miercoles, Jueves, Viernes };

int main() {
    Dia hoy = Dia::Miercoles;

    switch (hoy) {
        case Dia::Lunes: cout << "Inicio de semana"; break;
        case Dia::Miercoles: cout << "Mitad de semana"; break;
        case Dia::Viernes: cout << "¡Viernes!"; break;
        default: cout << "Otro día"; break;
    }
    cout << endl;
    return 0;
}






