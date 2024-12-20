#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t;
    cin >> t;
    n--;
    int max = t;
    int min = t;
    int res = 0;
    if (n != 0) {
        while (n--) {
            cin >> t;
            if (max < t) {
                max = t;
                res++;
            }
            if (min > t) {
                min = t;
                res++;
            }
        }
    }
    cout << res << "\n";
}