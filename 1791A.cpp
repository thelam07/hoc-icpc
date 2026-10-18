#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        string s;
        cin >> s;
        string dk = "codeforces";
        if (dk.find(s) != string::npos) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}