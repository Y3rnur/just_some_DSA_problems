#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    while (n--) {
        string a;
        cin >> a;
        if (a[0] == 'T') {
            sum += 4;
        } else if (a[0] == 'C') {
            sum += 6;
        } else if (a[0] == 'O') {
            sum += 8;
        } else if (a[0] == 'D') {
            sum += 12;
        } else if (a[0] == 'I') {
            sum += 20;
        }
    }
    cout << sum << "\n";
    return 0;
}