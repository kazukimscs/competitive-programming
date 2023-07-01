#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    vector<string> c, d;
    vector<int> p;

    int sum = 0;

    cin >> n >> m;

    string a;
    int b;
    for (int i = 0; i < n; i++) {
        cin >> a;
        c.emplace_back(a);
    }
    for (int i = 0; i < m; i++) {
        cin >> a;
        d.emplace_back(a);
    }
    for (int i = 0; i < m + 1; i++) {
        cin >> b;
        p.emplace_back(b);
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < m; k++) {
            if(c[j] == d[k]) {
                sum += p[k + 1];
                break;
            } else if (k == m - 1) {
                sum += p[0];
            }
        }
    }

    cout << sum << endl;

    return 0;

}
