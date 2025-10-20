#include <iostream>
using namespace std;

int invertir(int n) {
    int inv = 0;
    while (n) { inv = inv * 10 + n % 10; n /= 10; }
    return inv;
}

int main() {
    int N; cin >> N;
    cout << "Palíndromos hasta " << N << ":\n";
    for (int i = 0; i <= N; ++i)
        if (i == invertir(i)) cout << i << " ";
    cout << endl;
    return 0;
}