#include <iostream>
#include <vector>
int main() {
    std::vector<std::vector<int>> m = {{1,2},{3,4},{5,6}};
    int f = m.size(), c = m[0].size();
    std::vector<std::vector<int>> t(c, std::vector<int>(f));
    for (int i = 0; i < f; ++i)
        for (int j = 0; j < c; ++j) t[j][i] = m[i][j];
    for (auto& r : t) {
        for (int x : r) std::cout << x << " ";
        std::cout << std::endl;
    }
    return 0;
}