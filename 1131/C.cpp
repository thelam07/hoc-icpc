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
        vector<int> a(n);
        long long tong = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tong = tong + a[i];
        }

        if (tong == n) {
            cout << -1 << '\n';
        } else if (n == 2) {
            cout << tong - 1 << '\n';
        } else {
            bool coGiua = false;
            for (int i = 1; i < n - 1; i++) {
                if (a[i] >= 2) {
                    coGiua = true;
                }
            }
            if (coGiua == true) {
                cout << tong - 1 << '\n';
            } else {
                cout << tong - (n - 1) << '\n';
            }
        }
    }
}