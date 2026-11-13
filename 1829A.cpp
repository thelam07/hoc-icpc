#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        string s;
        cin >> s;

        string mau = "codeforces";
        int demKhac = 0;

        for (int i = 0; i < 10; i++) {
            if (s[i] != mau[i]) {
                demKhac++;
            }
        }

        cout << demKhac << "\n";
    }
}