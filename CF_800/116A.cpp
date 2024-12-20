#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxi = 0;
    int en, ex;
    int real = -1;
    while (n != 0) {
        cin >> ex >> en;
        maxi = (maxi - ex + en);
        real = max(real, maxi);
        n--;
    }
    cout << real << "\n";
    return 0;
}