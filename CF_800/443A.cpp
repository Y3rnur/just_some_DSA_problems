#include <iostream>
#include <string.h>
#include <unordered_set>
using namespace std;

int main() {
    string n;
    getline(cin, n);
    unordered_set<char> s = {};
    int i = 1;
    int m = n.size();
    while (i != m - 1) {
        if (n[i] >= 'a' && n[i] <= 'z') {
            s.insert(n[i]);
        }
        i++;
    }
    cout << s.size() << "\n";
    return 0;
}