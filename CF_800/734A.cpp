#include <iostream>
using namespace std;

int main() {
    int n;
    string w;
    cin >> n >> w;
    int a = 0;
    int m = n;
    while (n != 0) {
        if (w[n - 1] == 'A') {
            a++;
        }
        n--;
    }
    if (m - a > a) {
        cout << "Danik" << "\n";
    } else if (m - a < a) {
        cout << "Anton" << "\n";
    } else {
        cout << "Friendship" << "\n";
    }
    return 0;
}