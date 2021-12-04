#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, step;
    cin >> a >> b;

    if (b % a == 0) {
        step = b / a;
    }

    else {
        step = b / a + 1;
    }

    cout << step << endl;

    return 0;
}