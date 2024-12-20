#include <iostream>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    cout << (b - a % b) % b << "\n";
    return;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}