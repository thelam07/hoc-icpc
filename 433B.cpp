#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<long long> u = v;
    sort(u.begin(), u.end());

    vector<long long> pv(n + 1, 0), pu(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pv[i + 1] = pv[i] + v[i];
        pu[i + 1] = pu[i] + u[i];
    }

    int m;
    cin >> m;
    for (int k = 0; k < m; k++) {
        int loai, l, r;
        cin >> loai >> l >> r;
        if (loai == 1) {
            cout << pv[r] - pv[l - 1] << "\n";
        } else {
            cout << pu[r] - pu[l - 1] << "\n";
        }
    }
}