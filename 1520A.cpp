#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        string s;
        cin >> n;
        cin >> s;

        vector<bool> daGap(26, false);
        bool hopLe = true;

        daGap[s[0] - 'A'] = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (daGap[s[i] - 'A']) {
                    hopLe = false;
                    break;
                }
                daGap[s[i] - 'A'] = true;
            }
        }

        if (hopLe) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}