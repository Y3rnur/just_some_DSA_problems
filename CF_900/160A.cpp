#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        sum += s[i];
    }
    sort(s.begin(), s.end(), std::greater<int>());
    int m = 0;
    int i = 0;
    while (sum / 2 >= m) {
        m += s[i];
        i++;
    }
    cout << i << "\n";
    return 0;
}