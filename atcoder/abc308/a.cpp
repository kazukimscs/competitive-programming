#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main () {
    std::vector<int> v(8);
    int j = 0;

    for (int i = 0; i < 8; i++) {
        cin >> v.at(i);
    }

    while (j < 8 && (v[j] >= 100 && v[j] <= 675) && (v[j] % 25 == 0) && (v[j] <= v[j+1])) {
        j++;
    }

    if (j == 7) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl; 
    }

    return 0;
}
