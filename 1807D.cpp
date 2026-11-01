#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;

    for (int t = 0; t < soTest; t++) {
        int n, soTruyVan;
        cin >> n >> soTruyVan;

        vector<long long> tienTo(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            long long giaTri;
            cin >> giaTri;
            tienTo[i] = tienTo[i - 1] + giaTri;
        }

        long long tongCaMang = tienTo[n];

        for (int q = 0; q < soTruyVan; q++) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long tongDoan = tienTo[r] - tienTo[l - 1];
            long long soPhanTu = r - l + 1;
            long long tongMoi = tongCaMang - tongDoan + soPhanTu * k;

            if (tongMoi % 2 == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}