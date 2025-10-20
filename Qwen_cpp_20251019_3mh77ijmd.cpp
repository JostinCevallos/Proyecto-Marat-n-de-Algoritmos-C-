// Igual que 423, pero con mensaje opuesto
#include <iostream>
#include <unordered_set>
using namespace std;

int sumaCuadrados(int n) {
    int s = 0;
    while (n) { int d = n % 10; s += d * d; n /= 10; }
    return s;
}

bool esFeliz(int n) {
    unordered_set<int> vistos;
    while (n != 1 && !vistos.count(n)) {
        vistos.insert(n);
        n = sumaCuadrados(n);
    }
    return n == 1;
}

int main() {
    int n; cin >> n;
    cout << (esFeliz(n) ? "No es triste" : "Es triste") << endl;
    return 0;
}