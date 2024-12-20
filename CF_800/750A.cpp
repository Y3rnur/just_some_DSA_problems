#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int t = 240 - k;
    int i = 1;
    int res = 0;
    if (t != 0) {
        while (t - 5 * i >= 0 && i <= n) {
            t -= 5 * i;
            res++;
            i++;
        }
    }
    cout << res << "\n";
}