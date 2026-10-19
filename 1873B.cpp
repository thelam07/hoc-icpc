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
        int tich = a[0] + 1;
        for (int j = 1; j < n; j++) {
            tich = tich * a[j];
        }
        cout << tich << "\n";
        
    }
}