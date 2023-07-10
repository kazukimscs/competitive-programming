#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <string>
#include <iterator>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    typedef pair<int, int> pair;
    vector<pair> coord;

    for (auto& str : v) {
        cin >> str;
    }
    vector<string> roated_v = v;

    for (int i = 0; i < n - 1; i++) {
        coord.emplace_back(0, i);
    }
    for (int i = 0; i < n - 1; i++) {
        coord.emplace_back(i, n - 1);
    }
    for (int i = 0; i < n - 1; i++) {
        coord.emplace_back(n - 1, n - 1 - i);
    }
    for (int i = 0; i < n - 1; i++) {
        coord.emplace_back(n - 1 - i, 0);
    }

    size_t m = coord.size();
    for (size_t j = 0; j < m; j++) {
        auto [l, r] = coord[j];
        auto [nl, nr] = coord[(j + 1) % m];
        roated_v[nl][nr] = v[l][r];
    }
    
    for (int k = 0; k < n; k++) {
        cout << roated_v[k] << endl;
    }

    return 0;
}
