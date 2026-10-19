#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >> n;
        if (n % 3 != 0) {
            cout << "First" << "\n";
        } else {
            cout << "Second" << "\n";
        }
    }
}