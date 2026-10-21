#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int a, b;
        cin >> a >> b;
        int canh = max(2*min(a,b), max(a,b));
        cout << canh * canh << "\n";
    }
}