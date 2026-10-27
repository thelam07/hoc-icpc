#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int a, b;
        cin >> a >> b;
        int d = abs(a - b);
        int res = (d + 9) / 10;
        cout << res << "\n";
    }
}