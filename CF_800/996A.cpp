#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int counter = 0;
    while (n % 100 != n) {
        n -= 100;
        counter++;
    }
    while (n % 20 != n) {
        n -= 20;
        counter++;
    }
    while (n % 10 != n) {
        n -= 10;
        counter++;
    }
    while (n % 5 != n) {
        n -= 5;
        counter++;
    }
    while (n % 1 != n) {
        n -= 1;
        counter++;
    }
    cout << counter << "\n";
    return 0;
}