#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    int res = abs(s[1] - s[0]) + abs(s[1] - s[2]);
    cout << res << "\n";
    return 0;
}