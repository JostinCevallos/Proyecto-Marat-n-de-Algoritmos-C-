#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

bool esSemiprimo(int n) {
    int cont = 0;
    for (int i = 2; i * i <= n && cont <= 2; ++i)
        while (n % i == 0 && esPrimo(i)) {
            cont++;
            n /= i;
        }
    if (n > 1 && esPrimo(n)) cont++;
    return cont == 2;
}

int main() {
    int N; cin >> N;
    cout << "Semiprimos hasta " << N << ":\n";
    for (int i = 4; i <= N; ++i)
        if (esSemiprimo(i)) cout << i << " ";
    cout << endl;
    return 0;
}