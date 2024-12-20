#include <bits/stdc++.h>
using namespace std;

int main () {
    string word;
    cin >> word;
    int lower = 0;
    int upper = 0;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            lower++;
        } else {
            upper++;
        }
    }
    if (lower >= upper) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    else {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    cout << word << endl;
    return 0;
}