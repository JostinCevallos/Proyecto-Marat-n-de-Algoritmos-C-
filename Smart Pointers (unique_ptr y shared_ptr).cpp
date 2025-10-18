/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

class Persona {
public:
    string nombre;
    Persona(string n) : nombre(n) {
        cout << nombre << " creada.\n";
    }
    ~Persona() {
        cout << nombre << " destruida.\n";
    }
};

int main() {
    unique_ptr<Persona> p1 = make_unique<Persona>("Ana");
    {
        shared_ptr<Persona> p2 = make_shared<Persona>("Luis");
        shared_ptr<Persona> p3 = p2; // comparte la misma instancia
        cout << "Contador de referencias: " << p2.use_count() << endl;
    } // p2 y p3 se destruyen aquí
    return 0;
}







