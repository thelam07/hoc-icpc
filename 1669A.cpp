#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int rate;
        cin >> rate;
        if (rate >= 1900) {
            cout << "Division 1" << "\n";
        } else if (1600 <= rate) {
            cout << "Division 2" << "\n";
        } else if (1400 <= rate) {
            cout << "Division 3" << "\n";
        } else {
            cout << "Division 4" << "\n";
        }
    }
}