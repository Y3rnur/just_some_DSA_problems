
#include <iostream>
using namespace std;
#define int long long
const int N = 3e5 + 10;
int a[N];

void solve() {
    int n;
    cin >> n;

    int sum1, sum2, sum;
    sum1 = 0;
    sum2 = 0;
    sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 == 0) {           // calculate odd and even sums
            sum1 += a[i];
        } else {
            sum2 += a[i];
        }
        sum += a[i];                // calculate the total sum
    }
    if (sum % n == 0) {         // we can infer the equality of all elements, only if the total sum results in average
        int o = (n + 1) / 2;
        int e = n - o;
        sum /= n;               // calculate the odd-even indices
        if (sum1 == sum * o && sum2 == sum * e) {           // if the odd sum is equal to the average sum * number of odds,
            cout << "YES" << "\n";                          // it is possible to make them equal (same goes for even)
            return;                                         // if they are both satisfied, it means all elements can be equal
        }
    }
    cout << "NO" << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}