#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main () {
    string s, t;
    int count = 0;

    cin >> s;

    for (int i = 0; i < (int)s.size(); i++) {
        t += "oxx";
    }

    for (int j = 0; j < (int)s.size() + 1; j++) {
        string result = t.substr(j, (int)s.size());
        if (result == s) {
            cout << "Yes" << endl;
            count++;
            break;
        }
    }

    if (count == 0) {
        cout << "No" << endl;
    }

    return 0;
}