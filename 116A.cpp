#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int hienTai = 0;
    int lonNhat = 0;
    for (int t = 0; t < n; t++) {
        int a;
        int b;
        cin >> a >> b;
        hienTai = hienTai - a;
        hienTai = hienTai + b;

        lonNhat = max(lonNhat, hienTai);
    }
    cout << lonNhat;
}