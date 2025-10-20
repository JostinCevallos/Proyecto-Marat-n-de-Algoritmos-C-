#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matriz = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int filas = matriz.size();
    if (filas == 0) return 0;
    int cols = matriz[0].size();
    int suma = 0;

    // Primera y última fila
    for (int j = 0; j < cols; ++j) {
        suma += matriz[0][j];
        if (filas > 1) suma += matriz[filas-1][j];
    }

    // Primeras y últimas columnas (sin esquinas)
    for (int i = 1; i < filas - 1; ++i) {
        suma += matriz[i][0];
        if (cols > 1) suma += matriz[i][cols-1];
    }

    cout << "Suma de los bordes: " << suma << endl;
    return 0;
}