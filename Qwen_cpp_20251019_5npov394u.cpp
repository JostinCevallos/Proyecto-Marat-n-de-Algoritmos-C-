#include <iostream>
#include <vector>
#include <unordered_set>
int main() {
    std::vector<int> a = {1,2,3,4}, b = {3,4,5,6};
    std::unordered_set<int> s(a.begin(), a.end());
    for (int x : b)
        if (s.count(x)) { std::cout << x << " "; s.erase(x); }
    std::cout << std::endl;
    return 0;
}