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
        bool lap = false;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] == a[j + 1]) {
                lap = true;
                break;
            }                               
        }
        if (lap == true) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
}