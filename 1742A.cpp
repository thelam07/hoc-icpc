#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> v(3);
    for (int i = 0; i < t; i++) {
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if ((v[0] + v[1]) == v[2]) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}