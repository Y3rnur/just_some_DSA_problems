#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a;
    cin >> a;
    if (a % 2 == 0) {
        a = a / 2;
    } else {
        a = (-1) * (a + 1) / 2;
    }
    cout << a << "\n";
    return 0;
}