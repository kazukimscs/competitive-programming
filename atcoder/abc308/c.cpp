#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool desc_asc(pair<double, int>& left, pair<double, int>& right) {
    if (left.first == right.first) {
        return left.second < right.second;
    } else {
        return right.first < left.first;
    }
}

int main() {
    int n;
    int temp_a, temp_b;
    double temp_ans;
    vector<double> a;
    vector<double> b;
    typedef pair<double, int> n_s;
    vector<n_s> success_rate;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp_a >> temp_b;
        a.emplace_back(static_cast<double>(temp_a));
        b.emplace_back(static_cast<double>(temp_b));
        temp_ans = a.at(i) / (a.at(i) + b.at(i));
        success_rate.emplace_back(n_s(temp_ans, i + 1));
    }

    sort(success_rate.begin(), success_rate.end(), desc_asc);

    for (int k = 0; k < n; k++) {
        cout << success_rate[k].second << endl;
    }

    return 0;
}
