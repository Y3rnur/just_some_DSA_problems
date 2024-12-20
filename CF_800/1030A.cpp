#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        int a;
        cin >> a;
        if (a != 0) {
            cout << "hard" << "\n";
            return 0;
        }
        n--;
    }
    cout << "easy" << "\n";
    return 0;
}