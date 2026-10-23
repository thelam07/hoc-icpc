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
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        int kq = INT_MAX;
        for (int i = 0; i + 1 < n; i++) {
            kq = min(kq, s[i + 1] - s[i]);
        }
        cout << kq << "\n";
    }
}