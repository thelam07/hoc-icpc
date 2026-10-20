#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0;
    long long tong = 0;
    int nhieuNhat = 0;
    int dem = 0;
    for (int r = 0; r < n; r++) {
        tong += a[r];
        dem += 1;
        while (tong > t) {
            tong = tong - a[l];
            dem = dem - 1;
            l += 1;
        }
        nhieuNhat = max(dem, nhieuNhat);
    }
    cout << nhieuNhat;
}