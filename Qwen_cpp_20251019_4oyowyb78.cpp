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
    int N; cin >> N;
    cout << "Números felices hasta " << N << ":\n";
    for (int i = 1; i <= N; ++i)
        if (esFeliz(i)) cout << i << " ";
    cout << endl;
    return 0;
}