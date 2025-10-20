#include <iostream>
#include <cmath>
using namespace std;

bool esTriangular(int n) {
    if (n <= 0) return false;
    int k = (int)((sqrt(8LL * n + 1) - 1) / 2);
    return k * (k + 1) / 2 == n;
}

int main() {
    int n; cin >> n;
    cout << (esTriangular(n) ? "Es triangular" : "No es triangular") << endl;
    return 0;
}