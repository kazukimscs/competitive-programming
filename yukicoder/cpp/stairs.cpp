#include <iostream>
#include <string>

using namespace std;

int main() {
    int S, F, ans;

    cin >> S >> F;

    if (S == F) {
        ans = 2;
    }

    else if (S > F) {
        ans = S / F + 1;
    }

    else {
        ans = 1;
    }

    cout << ans << endl;
}