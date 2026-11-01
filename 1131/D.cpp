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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long mid = a[n/2];
        long long cost = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > mid) {
                cost = cost + (a[i] - mid);
            } else {
                cost = cost + (mid - a[i]);
            }
        }
        long long soThaoTac = a[n-1] - a[0];

        cout << cost << " " << soThaoTac << "\n";
    }
}