#include <iostream>

int main () {
    std::string S1, S2;

    std::cin >> S1;
    std::cin >> S2;

    if (S1 == "#." && S2 == ".#") {
        std::cout << "No" << std::endl;
    }

    else if (S1 == ".#" && S2 == "#.") {
        std::cout << "No" << std::endl;
    }

    else {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}