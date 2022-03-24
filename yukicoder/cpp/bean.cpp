#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main () {
    int k, n, f, age;
    int age_sum = 0;
    std::vector<int> a;

    std::cin >> k >> n >> f;

    for(int i = 0; i < f; i++) {
        std::cin >> age;
        a.emplace_back(age);
    }

    age_sum = std::accumulate(a.begin(), a.end(), 0);

    if (k * n - age_sum >= 0) {
        std::cout << k * n - age_sum << std::endl;
    }

    else {
        std::cout << -1 << std::endl;
    }

    return 0;
}