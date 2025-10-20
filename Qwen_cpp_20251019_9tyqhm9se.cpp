#include <iostream>
using namespace std;

int sumaDigitos(int n) {
    int s = 0;
    while (n) { s += n % 10; n /= 10; }
    return s;
}

int main() {
    int n; cin >> n;
    cout << (n % sumaDigitos(n) == 0 ? "Es Harshad" : "No es Harshad") << endl;
    return 0;
}