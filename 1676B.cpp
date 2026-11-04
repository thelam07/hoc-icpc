#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int tong = 0;
        for (int i = 1; i < n; i++) {
            tong = tong + (a[i] - a[0]);
        }
        cout << tong << "\n";
    }
}