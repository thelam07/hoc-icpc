#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int l, r;
        cin >> l >> r;
        if (l == -r) {
            cout << 0 << "\n";
        } else if (l > 0 || r < 0) {
            cout << r - l << "\n";
        } else {
            cout << r - l - 2 * min(-l, r) - 1 << "\n";
        }
    }
}