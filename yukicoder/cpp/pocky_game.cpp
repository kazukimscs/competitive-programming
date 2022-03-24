#include <iostream>

int main () {
    int l, k;
    int rest = 0;

    std::cin >> l >> k;

    rest = (l - 1) / (k * 2) * k;

    std::cout << rest << std::endl;
    
    return 0;
}