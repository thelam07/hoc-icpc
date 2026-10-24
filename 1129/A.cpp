#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int pre = 0;
        int mex = 0;
        for (int v = 0; v <= n; v++) {
            pre += cnt[v];
            if (cnt[v] >= 1 && pre >= k * (v + 1)) {
                mex++;
            } else {
                break;
            }
        }
        cout << mex << "\n";
    }
    return 0;
}