#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int truoc, x;
    int hienTai = 1, ketQua = 1;
    cin >> truoc;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > truoc) {
            hienTai++;
        } else {
            hienTai = 1;
        }
        ketQua = max(ketQua, hienTai);
        truoc = x;
    }
    cout << ketQua << '\n';
}