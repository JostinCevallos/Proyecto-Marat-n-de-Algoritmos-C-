#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    while (n > 9) {
        int s = 0;
        while (n) { s += n % 10; n /= 10; }
        n = s;
    }
    cout << "Dígito final: " << n << endl;
    return 0;
}