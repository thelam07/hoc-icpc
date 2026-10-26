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
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());

        for (int i = 0; i < k; i++) {
            if (b[i] > a[i]) {
                swap(a[i], b[i]);
            } else {
                break;
            }
        }
        int tong = 0;
        for (int i = 0; i < n; i++) {
            tong += a[i];
        }
        cout << tong << "\n";
    }
}