#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    int sum(0);
    vector <int> h(n), v(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i] >> v[i];
        for (int j = 0; j < i; j++) {
            if (h[i] == v[j]) {
                sum++;
            }
            if (v[i] == h[j]) {
                sum++;
            }
        }
    }
    cout << sum << "\n";
    return 0;
}