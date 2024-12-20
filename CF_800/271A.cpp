#include <iostream>
#include <algorithm>
using namespace std;

bool hasDigit(int y) {
    int digits[10] = {0};
    while (y > 0) {
        int digit = y % 10;
        if (digits[digit] > 0) {
            return false;
        }
        digits[digit]++;
        y /= 10;
    }
    return true;
}
int main () {
    int y;
    cin >> y;
    y++;
    while (true) {
        if (hasDigit(y)) {
            cout << y << "\n";
            return 0;
        }
        y++;
    }
}