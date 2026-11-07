#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        vector<string> a(10);
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }

        int total = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (a[i][j] == 'X') {
                    total += min(min(i, j), min(9 - i, 9 - j)) + 1;
                }
            }
        }

        cout << total << "\n";
    }
    return 0;
}