#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int x, y, z;
        cin >> x >> y >> z;
        int tong = x + y + z;

        char nuocDi;
        if (y >= z) {
            nuocDi = 'R';
        } else if (z >= x) {
            nuocDi = 'S';
        } else {
            nuocDi = 'P';
        }

        string s = "";
        for (int i = 0; i < tong; i++) {
            s = s + nuocDi;
        }
        cout << s << '\n';
    }
}