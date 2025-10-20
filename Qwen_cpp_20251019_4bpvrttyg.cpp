#include <iostream>
using namespace std;

int invertir(int n) {
    int inv = 0;
    while (n) { inv = inv * 10 + n % 10; n /= 10; }
    return inv;
}

int main() {
    int n; cin >> n;
    cout << (n == invertir(n) ? "Es palíndromo" : "No es palíndromo") << endl;
    return 0;
}