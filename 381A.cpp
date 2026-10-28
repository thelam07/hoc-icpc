#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int r = 0;
    int l = n - 1;
    bool luotS = true;
    int tongS = 0;
    int tongD = 0;
    while (r <= l) {
        if (a[r] >= a[l]) {
            if (luotS) {
                tongS += a[r];
            } else {
                tongD += a[r];
            }
            r++;
        } else {
            if (luotS) {
                tongS += a[l];
            } else {
                tongD += a[l];
            }
            l--;
        }
        luotS = !luotS;
    }
    cout << tongS << " " << tongD;
}