/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> edades;
    edades["Ana"] = 25;
    edades["Luis"] = 30;
    edades["Marta"] = 22;

    for (auto par : edades) {
        cout << par.first << " tiene " << par.second << " años." << endl;
    }
    return 0;
}




