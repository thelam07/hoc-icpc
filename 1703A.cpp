#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        if (s == "yes") {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}