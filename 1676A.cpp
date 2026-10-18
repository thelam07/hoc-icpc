#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        string s;
        cin >> s;
        int dau = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int cuoi = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        if (dau == cuoi) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}