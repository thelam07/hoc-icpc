#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >> n;
        for (int i = 2; i <= n; i++) {
            cout << i << " ";
        }
        cout << 1 << "\n";
    }
}