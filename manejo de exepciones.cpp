/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int dividir(int a, int b) {
    if (b == 0)
        throw runtime_error("Error: división por cero.");
    return a / b;
}

int main() {
    try {
        cout << dividir(10, 2) << endl;
        cout << dividir(8, 0) << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }
    return 0;
}
