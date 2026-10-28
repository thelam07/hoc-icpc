#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> pre(n, 0);
    for (int a = 1; a < n; a++) {
        pre[a] = pre[a - 1] + (s[a - 1] == s[a]);
    }
    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << pre[r - 1] - pre[l - 1] << "\n";
    }
}