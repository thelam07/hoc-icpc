#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;

        int trai = 0;
        int phai = n;
        while (trai < phai) {
            int giua = trai + (phai - trai) / 2;
            if (a[giua] > m) {
                phai = giua;
            } else {
                trai = giua + 1;
            }
        }
        cout << trai << "\n";
    }
}