#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        string s;
        cin >> s;
        int n = s.size();
        int last = 0;
        int res = 0;
        for (int i = 1; i < n + 1; i++) {
            if (s[i - 1] == 'R') {
                res = max(res, i - last);
                last = i;
            }
        }
        res = max(res, n + 1 - last);
        cout << res << "\n";
    }
}