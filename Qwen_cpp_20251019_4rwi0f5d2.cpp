#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotar90(const vector<vector<int>>& m) {
    if (m.empty()) return {};
    int n = m.size(), p = m[0].size();
    vector<vector<int>> r(p, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < p; ++j)
            r[j][n - 1 - i] = m[i][j];
    return r;
}

int main() {
    vector<vector<int>> m = {{1,2,3},{4,5,6}};
    auto r = rotar90(m);
    for (auto &f : r) {
        for (int x : f) cout << x << " ";
        cout << endl;
    }
    return 0;
}