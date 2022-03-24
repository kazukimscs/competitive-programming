#include <iostream>

int main () {
    int L, M, N;
    int L_ans, M_ans, N_ans;

    std::cin >> L >> M >> N;

    N_ans = N % 25;
    M += N / 25;

    M_ans = M % 4;
    L += M * 25 / 100;

    L_ans = L % 10;

    std::cout << L_ans + M_ans + N_ans << std::endl;
    
    return 0;
}