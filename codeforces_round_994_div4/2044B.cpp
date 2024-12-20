
#include <iostream>
using namespace std;

void solve() {
    string n;
    string e;
    cin >> n;
    int v = n.size();
    while (v--) {
        if (n[v] == 'p') {
            e += 'q';
        } else if (n[v] == 'q') {
            e += 'p';
        } else {
            e += 'w';
        }
    }
    cout << e << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}