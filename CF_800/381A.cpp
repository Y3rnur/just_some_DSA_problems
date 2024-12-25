#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int i = 0;
    int j = n - 1;
    bool t = true;
    int sum = 0;
    int dum = 0;
    while (i <= j) {
        int d;
        if (s[i] >= s[j]) {
            d = s[i];
            i++;
        } else {
            d = s[j];
            j--;
        }
        if (t) {
            sum += d;
            t = false;
        } else {
            dum += d;
            t = true;
        }
    }
    cout << sum << " " << dum << "\n";
    return 0;
}