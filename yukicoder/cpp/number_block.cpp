#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int l, n, block_wide;
    int sum_block_wide = 0, number_block = 0;
    std::vector<int> w;

    std::cin >> l >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> block_wide;
        w.emplace_back(block_wide);
    }

    std::sort(w.begin(), w.end());
    number_block = n;

    for (int j = 0; j < n; j++) {
        sum_block_wide += w.at(j);
        if (sum_block_wide > l) {
            number_block = j;
            break;
        }
    }

    std::cout << number_block << std::endl;

    return 0;
}