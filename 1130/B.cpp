#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        int cnt = 0;
        for (char c : a) {
            if (c == 'f') {
                cnt++;
            }
        }
        for (char c : b) {
            if (c == 'f') {
                cnt++;
            }
        }
        cout << cnt % 2 << "\n";
    }
    return 0;
}