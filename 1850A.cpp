#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    vector<int> v(3);
    for (int t = 0; t < soTest; t++) {
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int tong = v[0] + v[1];
        if (tong >= 10) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}