/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maximo(10, 20) << endl;
    cout << maximo(4.5, 2.3) << endl;
    cout << maximo('A', 'Z') << endl;
    return 0;
}
