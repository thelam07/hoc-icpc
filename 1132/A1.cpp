#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        long long n;
        cin >> n;
        cout << (n * n) / 4 << "\n";
    }
}