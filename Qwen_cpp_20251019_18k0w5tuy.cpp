#include <iostream>
using namespace std;

int sumaDigitos(int n) {
    int s = 0;
    while (n) { s += n % 10; n /= 10; }
    return s;
}

int main() {
    int N; cin >> N;
    cout << "Primeros " << N << " números Harshad:\n";
    for (int i = 1, cont = 0; cont < N; ++i)
        if (i % sumaDigitos(i) == 0) {
            cout << i << " ";
            cont++;
        }
    cout << endl;
    return 0;
}