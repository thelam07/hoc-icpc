#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >> n;

        int bTotNhat = 0;
        int viTri = 0;

        for (int i = 1; i <= n; i++) {
            int a, b;
            cin >> a >> b;

            if (a <= 10 && b > bTotNhat) {
                bTotNhat = b;
                viTri = i;
            }
        }
        cout << viTri << "\n";
    }
}