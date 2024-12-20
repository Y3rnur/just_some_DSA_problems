#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    int n, a, b;
    int x, y;
    cin >> n;
    unordered_set<int> s;
    cin >> a;
    while (a--) {
        cin >> x;
        s.insert(x);
    }
    cin >> b;
    while (b--) {
        cin >> y;
        s.insert(y);
    }
    if (s.size() == n) {
        cout << "I become the guy." << "\n";
    } else {
        cout << "Oh, my keyboard!" << "\n";
    }
    //
    return 0;
}