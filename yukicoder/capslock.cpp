#include <iostream>

int main () {
    std::string S;

    std::cin >> S;

    for (int i = 0; i < (int)(S.length()); i++)
        if (isupper(S[i]) != 0) {
            S[i] = (char)tolower(S[i]);
        }
        else {
            S[i] = (char)toupper(S[i]);
        }

    std::cout << S << std::endl;

    return 0;
}