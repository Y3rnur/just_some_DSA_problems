
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    set<int> exp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    queue<int> not_exp;
    for (int i = 1; i <= n; i++) {
        not_exp.push(i);
    }
    for (int i = 0; i < n; i++) {
        if (exp.find(a[i]) == exp.end()) {
            b[i] = a[i];
            exp.insert(a[i]);
        } else {
            while (exp.find(not_exp.front()) != exp.end()) {
                not_exp.pop();
            }
            b[i] = not_exp.front();
            exp.insert(b[i]);
            not_exp.pop();
        }
    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
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