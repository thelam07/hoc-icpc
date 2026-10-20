#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        int p = 1;
        while (n > 0) {
            int d = n % 10;
            if (d != 0) {
                v.push_back(d * p);
            }
            n /= 10;
            p *= 10;
        }
        cout << v.size() << "\n";
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
}