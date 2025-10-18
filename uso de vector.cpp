/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    int suma = 0;

    for (int n : numeros) {
        suma += n;
    }

    double promedio = (double)suma / numeros.size();
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
