#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<bool> daGap(100001, false);
    vector<int> dapAn(n + 1, 0);

    for (int i = n - 1; i >= 0; i--) {
        if (daGap[a[i]]) {
            dapAn[i] = dapAn[i + 1];
        } else {
            daGap[a[i]] = true;
            dapAn[i] = dapAn[i + 1] + 1;
        }
    }

    for (int q = 0; q < m; q++) {
        int l;
        cin >> l;
        cout << dapAn[l - 1] << "\n";
    }
}