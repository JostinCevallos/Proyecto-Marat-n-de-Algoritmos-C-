/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1, 7};
    sort(nums.begin(), nums.end());

    cout << "Ordenados: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}



