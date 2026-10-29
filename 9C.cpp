#include <bits/stdc++.h>
using namespace std;

long long n;
int dem = 0;

void sinhSo(long long x) {
    if (x > n) {
        return;
    }
    dem++;
    sinhSo(x * 10);
    sinhSo(x * 10 + 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    sinhSo(1);
    cout << dem << "\n";
}