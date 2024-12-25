#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int t = n.size();
    int conseq = 0;
    int res = 0;
    for (int i = 1; i < t; i++) {
        if (n[i] == n[i - 1]) {
            conseq++;
            if (conseq == 6) {
                cout << "YES" << "\n";
                return 0;
            }
        } else {
            conseq = 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}