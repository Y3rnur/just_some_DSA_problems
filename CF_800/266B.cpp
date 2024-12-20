#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string w;
    cin >> w;
    while (t) {
        for (int i = 1; i < n; i++) {
            if (w[i - 1] == 'B' && w[i] == 'G') {
                w[i - 1] = 'G';
                w[i] = 'B';
                i++;
            }
        }
        t--; 
    }
    cout << w << "\n";
    return 0;
}
