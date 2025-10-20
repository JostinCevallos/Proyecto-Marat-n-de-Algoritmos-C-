#include <iostream>
#include <string>
using namespace std;

bool esKaprekar(int n) {
    if (n == 1) return true;
    long long sq = (long long)n * n;
    string s = to_string(sq);
    for (int i = 1; i < s.size(); ++i) {
        long long a = stoll(s.substr(0, i));
        long long b = stoll(s.substr(i));
        if (b && a + b == n) return true;
    }
    return false;
}

int main() {
    int N; cin >> N;
    cout << "Números Kaprekar hasta " << N << ":\n";
    for (int i = 1; i <= N; ++i)
        if (esKaprekar(i)) cout << i << " ";
    cout << endl;
    return 0;
}