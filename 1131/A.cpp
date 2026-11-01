#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n, m;
        string p, q;
        cin >> n >> m >> p >> q;

        map<char, int> demChu;
        for (int i = 0; i < n; i++) {
            demChu[p[i]]++;
        }
        for (int i = 0; i < m; i++) {
            demChu[q[i]]--;
        }

        bool ok = true;
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            if (c == 's' || c == 'i' || c == 'x') {
                if (demChu[c] != 1) {
                    ok = false;
                    break;
                }
            } else {
                if (demChu[c] != 0) {
                    ok = false;
                    break;
                }
            }
        }

        if (ok == true) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}