
#include <iostream>
using namespace std;

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int sum = 0;
    int rem = 0;
    if (m <= a) {
        sum += m;
    } else {
        sum += a;
        rem += (m - a);
    }
    if (m <= b) {
        sum += m;
    } else {
        sum += b;
        rem += (m - b);
    }
    if (rem != 0) {
        if (rem <= c) {
            sum += rem;
        } else {
            sum += c;
        }
        cout << sum << "\n";
    } else {
        cout << sum << "\n";
    }
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


/*
    BETTER SOLUTION BY CHATGPT:

#include <iostream>
using namespace std;

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    // Calculate maximum sum distributable
    int sum = min(m, a) + min(m, b);
    int rem = max(0, m - a) + max(0, m - b);

    // Add the remainder to the third container
    sum += min(rem, c);

    cout << sum << "\n";
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

*/