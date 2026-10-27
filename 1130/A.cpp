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
        vector<int> a(n + 1), vtri(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            vtri[a[i]] = i;
        }

        int p = n - k + 1;

        vector<bool> seen(n + 2, false);
        for (int i = 1; i <= p; i++) seen[a[i]] = true;
        int m = 0;
        while (seen[m]) m++;

        if (m >= p) {
            cout << -1 << "\n";
            continue;
        }

        int mx = 1;
        for (int i = 1; i <= p; i++)
            if (a[i] > a[mx]) mx = i;

        cout << mx << " " << vtri[m] << "\n";
    }
    return 0;
}