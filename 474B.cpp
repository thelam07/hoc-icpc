#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> tienTo(n);
    int tong = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        tong += a;
        tienTo[i] = tong;
    }

    int m;
    cin >> m;
    for (int j = 0; j < m; j++) {
        int q;
        cin >> q;

        int trai = 0;
        int phai = n;
        while (trai < phai) {
            int giua = trai + (phai - trai) / 2;
            if (tienTo[giua] >= q) {
                phai = giua;
            } else {
                trai = giua + 1;
            }
        }
        cout << trai + 1 << "\n";
    }
}