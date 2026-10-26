#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool hopLe = true;
        
        for (int i = 0; i + 1 < n; i++) {
            if ((a[i + 1] - a[i]) > 1) {
                hopLe = false;
                break;
            }
        }
        if (hopLe == true) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}