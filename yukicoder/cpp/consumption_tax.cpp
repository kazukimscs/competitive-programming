#include <iostream>

int main () {
    int d, p;

    std::cin >> d >> p;

    std::cout << d + int(d * p * 1e-2) << std::endl;
    //std::cout << d + d * p / 100 << std::endl;こっちの方がスマート
    return 0;
}