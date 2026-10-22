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
        map<int, int> dem;
        long long kq = 0;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            int b = a - j;
            kq += dem[b];
            dem[b]++;
        }
        cout << kq << "\n";
    }
}