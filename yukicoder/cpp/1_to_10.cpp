#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int b;
    int count = 0;
    std::vector<int> v;

    for (int i = 0; i < 9; i++) {
        std::cin >> b;
        v.emplace_back(b);
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < 9; j++) {
        if (v.at(j) != j + 1) {
            std::cout << j + 1 << std::endl;
            count++;
            break;
        }
    }

    if (count == 0) {
        std::cout << 10 << std::endl;
    }

    return 0;
}