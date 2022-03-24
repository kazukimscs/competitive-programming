#include <iostream>
#include <string>

int main () {
    int A, B;
    std::string number;

    std::cin >> A >> B;

    for (int i = A; i <= B; i++) {
        number = std::to_string(i);

        if (i % 3 == 0 || number.find("3") != std::string::npos) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}