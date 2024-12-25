#include <iostream>
using namespace std;

int main () {
    string n;
    cin >> n;
    int t = n.size();
    int num = 0;
    string res;
    for (int i = 1; i <= t; i++) {
        if (n[i - 1] == '-') {
            if (n[i] == '-') {
                res += '2';
            } else {
                res += '1';
            }
            i++;
        } else {
            res += '0';
        }
    }
    cout << res << "\n";
    return 0;
}