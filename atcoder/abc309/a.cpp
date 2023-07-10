#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if ((a == 1 || a == 4 || a == 7) && (b == a + 1)) {
        cout << "Yes" << endl;
    } else if ((a == 2 || a == 5 || a == 8) && (b == a + 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}
