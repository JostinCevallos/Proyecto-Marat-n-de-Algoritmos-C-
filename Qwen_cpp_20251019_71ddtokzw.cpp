#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int N; cin >> N;
    cout << "Números de Armstrong hasta " << N << ":\n";
    for (int i = 1; i <= N; ++i) {
        string s = to_string(i);
        int len = s.length(), suma = 0;
        for (char c : s)
            suma += pow(c - '0', len);
        if (suma == i) cout << i << " ";
    }
    cout << endl;
    return 0;
}