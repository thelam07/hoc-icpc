#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int dem = 0;
    int lay = 0;
    int tong = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tong = tong + a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i ++) {
        if (lay <= tong - lay) {
            lay = lay + a[i];
            dem = dem + 1;
        }
    }
    cout << dem;
}