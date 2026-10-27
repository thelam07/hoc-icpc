#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int cur = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                cur += 1;
            }
        }
        int ans = cur;
        for (int i = k; i < n; i++) {
            cur += (s[i] == 'W');
            cur -= (s[i - k] == 'W');
            ans = min(ans, cur);
        }
        cout << ans << "\n";
    }
}