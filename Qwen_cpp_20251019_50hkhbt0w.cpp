#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matriz = {{1,0,0},{4,5,0},{7,8,9}};
    int suma = 0, n = matriz.size();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j <= i; ++j)
            suma += matriz[i][j];
    cout << "Suma triangular inferior: " << suma << endl;
    return 0;
}