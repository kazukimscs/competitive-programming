#include <iostream>
#include <string>

using namespace std;

int main () {
    int N, K;
    int rock = 0;
    int scissors = 1;
    int paper = 2;

    cin >> N >> K;

    if (N == K) {
        cout << "Drew" << endl;
    }

    else if (N == rock && K == scissors) {
        cout << "Won" << endl;
    }

    else if (N == scissors && K == paper) {
        cout << "Won" << endl;
    }

    else if (N == paper && K == rock) {
        cout << "Won" << endl;

    }

    else {
        cout << "Lost" << endl;
    }

    return 0;
}