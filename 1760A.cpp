#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        vector<int> a(3);
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << a[1] << "\n";
    }
}