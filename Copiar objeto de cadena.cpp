/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter string s1: ";
    getline (cin, s1);

    s2 = s1;

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;

    return 0;
}