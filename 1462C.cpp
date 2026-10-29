#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x > 45) {
            cout << -1 << '\n';
            continue;
        }
        string ketQua = "";
        for (int d = 9; d >= 1; d--) {
            if (x >= d) {
                ketQua = char('0' + d) + ketQua;
                x -= d;
            }
        }
        cout << ketQua << '\n';
    }
}