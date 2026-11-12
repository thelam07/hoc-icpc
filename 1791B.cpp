#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        bool gapKeo = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') {
                y++;
            } else if (s[i] == 'D') {
                y--;
            } else if (s[i] == 'L') {
                x--;
            } else {
                x++;
            }

            if (x == 1 && y == 1) {
                gapKeo = true;
                break;
            }
        }

        if (gapKeo) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}