#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >> n;
        vector<long long> c(n);
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (i % 2 == 0) {
                c[i] = x;
            } else {
                c[i] = -x;
            }
        }
        sort(c.begin(), c.end());

        int p = (n + 1) / 2;
        int q = n - p;

        long long ketQua = 0;
        for (int i = 0; i < q; i++) {
            ketQua = ketQua - c[i];
        }
        for (int i = q; i < n; i++) {
            ketQua = ketQua + c[i];
        }

        cout << ketQua << '\n';
    }
}