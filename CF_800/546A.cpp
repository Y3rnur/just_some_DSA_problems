#include <iostream>
using namespace std;

int main () {
    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0;
    int m = w;
    int ork = k;
    while (w != 0) {
        sum += k;
        w--;
        k = (m - w + 1) * ork;
    }
    if (sum - n <= 0) {
        cout << "0" << endl;
        return 0;
    }
    cout << sum - n << endl;
    return 0;
}