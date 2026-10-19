#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    long long tong = 0;
    for (int i = 0; i < k; i++) {
        tong += h[i];
    }
    long long nhonhat = tong;
    int vitri = 1;

    for (int j = 1; j <= n - k; j++) {
        tong += h[j + k - 1] - h[j - 1];
        if (tong < nhonhat) {
            nhonhat = tong;
            vitri = j + 1;
        }
    }
    cout << vitri;
}