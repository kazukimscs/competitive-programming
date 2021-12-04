#include <iostream>
#include <string>

using namespace std;

int main() {
    int HappyDay = 0;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 1; i <= 12; i++) {
        for (int date = 1; date <= month[i - 1]; date++) {
            if (date % 10 + date /10 == i) {
                HappyDay++;
            }
        }
    }

    cout << HappyDay << endl;

    return 0;
}