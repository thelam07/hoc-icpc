#include <bits/stdc++.h>
using namespace std;

struct Laptop {
    int gia;
    int chatLuong;
};

bool soSanh(Laptop a, Laptop b) {
    return a.gia < b.gia;
}

int main() {
    int n;
    cin >> n;
    vector<Laptop> ds(n);
    for (int i = 0; i < n; i++) {
        cin >> ds[i].gia >> ds[i].chatLuong;
    }

    sort(ds.begin(), ds.end(), soSanh);

    for (int i = 0; i < n - 1; i++) {
        if (ds[i].chatLuong > ds[i+1].chatLuong) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}