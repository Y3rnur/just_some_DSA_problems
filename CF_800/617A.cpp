#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int counter = 0;
    while (a != 0) {
        if (a >= 5) {
            a -= 5;
            counter++;
        } else if (a >= 4) {
            a -= 4;
            counter++;
        } else if (a >= 3) {
            a -= 3;
            counter++;
        } else if (a >= 2) {
            a -= 2;
            counter++;
        } else {
            a -= 1;
            counter++;
        }
    }
    cout << counter << "\n";
    return 0;
}