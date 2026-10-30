#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        string b;
        cin >> b;

        string a;
        a += b[0];
        for (int i = 1; i < (int)b.size(); i += 2) {
            a += b[i];
        }

        cout << a << "\n";
    }
}