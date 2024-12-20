#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        int i = 0;
        cin >> n >> k;
        bool finish = false;
        while (n--) {
            string a;
            cin >> a;
            if (a.size() > k && !finish) {
                cout << i << "\n";
                finish = true;
            }
            if (!finish) {
                k = k - a.size();
                i++;
            }
        }
        if (!finish) {
            cout << i << "\n";
        }
    }
    return 0;
}