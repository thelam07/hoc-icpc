#include <bits/stdc++.h>
using namespace std;

long long n;
long long ketQua = LLONG_MAX;

void sinhSo(long long x, int so4, int so7, int len) {
    if (len > 10) return;
    if (x >= n && so4 == so7) {
        ketQua = min(ketQua, x);
    }
    sinhSo(x * 10 + 4, so4 + 1, so7, len + 1);
    sinhSo(x * 10 + 7, so4, so7 + 1, len + 1);
}

int main() {
    cin >> n;
    sinhSo(0, 0, 0, 0);
    cout << ketQua;
}