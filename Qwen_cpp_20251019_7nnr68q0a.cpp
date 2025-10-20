#include <iostream>
using namespace std;

bool esFibonacci(int n) {
    if (n < 0) return false;
    int a = 0, b = 1;
    while (b < n) { int t = b; b += a; a = t; }
    return b == n || n == 0;
}

int main() {
    int n; cin >> n;
    cout << (esFibonacci(n) ? "Pertenece a Fibonacci" : "No pertenece") << endl;
    return 0;
}