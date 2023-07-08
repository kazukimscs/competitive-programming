#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    int n;
    typedef pair<int ,int> pair;
    vector<pair> ab;
    vector<int> id;
    typedef long long ll;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ab.emplace_back(pair(a, b));
    }

    for (int j = 0; j < n; j++) {
        id.emplace_back(j);
    }

    auto fn = [&ab](int left, int right) -> bool {
        auto [left_a, left_b] = ab[left];
        auto [right_a, right_b] = ab[right];
        return (ll)right_a * (left_a + left_b) < (ll)left_a * (right_a + right_b); 
    };

    stable_sort(id.begin(), id.end(), fn);

    for (int k = 0; k < n; k++) {
        cout << id[k] + 1 << " ";
    }
    cout << endl;

    return 0;

}
