#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;
    if (x.size() == 3 && (x[0] == 'Y' || x[0] == 'y') && (x[1] == 'E' || x[1] == 'e') && (x[2] == 'S' || x[2] == 's')) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}