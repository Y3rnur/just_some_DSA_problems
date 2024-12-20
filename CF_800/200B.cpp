#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int t = n;
    double res = 0;
    while (n--) {
        int a;
        cin >> a;
        res += (a / double(100));
    }
    cout << res / t * 100 << "\n";
    return 0;
}