#include <bits/stdc++.h>
using namespace std;

struct conRong {
    int sucManh;
    int phanThuong;
};

bool soSanh(conRong a, conRong b) {
    return a.sucManh < b.sucManh;
}

int main() {
    int s, n;
    cin >> s >> n;
    vector<conRong> ds(n);
    for (int i = 0; i < n; i++) {
        cin >> ds[i].sucManh >> ds[i].phanThuong;
    }
    sort(ds.begin(), ds.end(), soSanh);

    for (int i = 0; i < n; i++) {
        if (s > ds[i].sucManh) {
            s += ds[i].phanThuong;
        } else {
            cout << "NO" << "\n";
            return 0;
        }
    }
    cout << "YES" << "\n";
}