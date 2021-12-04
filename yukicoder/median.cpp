#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int N, A;
    double odd = 0, even = 0;
    std::vector<int> v;
    
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> A;
        v.emplace_back(A);
    }

    sort(v.begin(), v.end());

    if (N % 2 != 0) {
        odd = v.at(N / 2);
        std::cout << odd << std::endl;
    }

    else {
        even = (v.at(N / 2 - 1) + v.at(N / 2)) / 2.0;
        std::cout << even << std::endl;
    }
    return 0;
}