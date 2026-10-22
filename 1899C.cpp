
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cur = a[0];
        int res = a[0];

        for (int i = 1; i < n; i++) {
            if (abs(a[i] % 2) != abs(a[i - 1] % 2)) {
                cur = max(a[i], cur + a[i]);
            } else {
                cur = a[i];
            }

            res = max(res, cur);
        }

        cout << res << "\n";
    }
}
