#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int sum = 1;
    while (k * sum % 10 != 0 && (k * sum - r) % 10 != 0) {
        sum++;
    }
    cout << sum << "\n";
    return 0;
}