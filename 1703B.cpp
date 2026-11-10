#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        string s;
        cin >> n >> s;

        vector<bool> daGap(26, false);
        int soDoi = 0;

        for (int i = 0; i < n; i++) {
            if (!daGap[s[i] - 'A']) {
                daGap[s[i] - 'A'] = true;
                soDoi++;
            }
        }

        cout << n + soDoi << "\n";
    }
}