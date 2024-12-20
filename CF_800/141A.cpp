#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (d == c) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;









    /*
            #### BELOW IS FOR COUNTING THE OCCURRENCES AND DETERMINING IF WE CAN CONSTRUCT THE CONCATENATION BY THE PILE STRING (IT CAN BE MORE THAN NEEDED)
    vector<int> s1(26);
    vector<int> s2(26);
    for (int i = 0; i < a.size(); i++) {
        s1[a[i] - 'A']++;
    }
    for (int i = 0; i < b.size(); i++) {
        s1[b[i] - 'A']++;
    }
    for (int i = 0; i < c.size(); i++) {
        s2[c[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (s1[i] > s2[i]) {
            cout << "NO" << "\n";
            return 0;
        }
    }
    cout << "YES" << "\n";
    */
    return 0;
}