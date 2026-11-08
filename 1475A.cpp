#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        long long n;
        cin >> n;

        while (n % 2 == 0) {
            n /= 2;
        }

        if (n > 1) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}