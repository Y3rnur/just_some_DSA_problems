#include <iostream>
using namespace std;

int main() {
    int t;
    int change = 0;
    cin >> t;
    int i = 0;
    string colors;
    cin >> colors;
    if (t <= 1) {
        cout << "0" << endl;
        return 0;
    }
    while (i < t - 1) {
        if (colors[i] == colors[i + 1]) {
            change++;
        }
        i++;
    }
    cout << change << endl;
    return 0;
}