/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    cout << "Ciclo while:\n";
    while (i <= 5) {
        cout << i << " ";
        i++;
    }

    cout << "\n\nCiclo do-while:\n";
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);

    cout << endl;
    return 0;
}
