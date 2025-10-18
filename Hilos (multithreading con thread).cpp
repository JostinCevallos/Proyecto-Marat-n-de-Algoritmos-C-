/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <thread>
using namespace std;

void tarea(string nombre) {
    for (int i = 0; i < 3; i++)
        cout << "Hola desde " << nombre << endl;
}

int main() {
    thread t1(tarea, "hilo 1");
    thread t2(tarea, "hilo 2");

    t1.join();
    t2.join();
    cout << "Hilos finalizados." << endl;
    return 0;
}




