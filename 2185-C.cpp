#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        int hienTai = 1;
        int lonNhat = 1;
        for (int j = 1; j < n + 1; j++) {
            cin >> a[j-1];
        }
        sort(a.begin(), a.end());
        for (int k = 1; k < n; k++) {
            if (a[k] == a[k-1]) {
                hienTai=hienTai;
            } else if ((a[k] - a[k-1]) == 1) {
                hienTai += 1;
            } else {
                hienTai = 1;
            }
            lonNhat = max(lonNhat, hienTai);
        }
        cout << lonNhat << "\n";
    }
}