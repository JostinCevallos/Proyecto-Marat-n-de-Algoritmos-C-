/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Animal {
public:
    void comer() {
        cout << "El animal está comiendo" << endl;
    }
};

class Perro : public Animal {
public:
    void ladrar() {
        cout << "El perro ladra: ¡Guau!" << endl;
    }
};

int main() {
    Perro p;
    p.comer();
    p.ladrar();
    return 0;
}
