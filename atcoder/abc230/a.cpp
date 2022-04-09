#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

int main () {
    int n;

    cin >> n;

    if (n >= 1 && n <= 9) {
        cout << "AGC00" + to_string(n) << endl;
    }

    else if (n >= 10 && n <= 41) {
        cout << "AGC0" + to_string(n) << endl;
    }

    else if ( n >= 42 && n <= 54) {
        n++;
        cout << "AGC0" + to_string(n) << endl;
    }

    return 0;
}
