#include <bits/stdc++.h>
using namespace std;

int main() {
    int viTri[2] = {0, 0};
    for (int hang = 0; hang < 5; hang++) {
        for (int cot = 0; cot < 5; cot++) {
            int x;
            cin >> x;
            if (x == 1) {
            viTri[0] = hang;
            viTri[1] = cot;
            }
        }
    }
    cout << abs(viTri[0] - 2) + abs(viTri[1] - 2);
}