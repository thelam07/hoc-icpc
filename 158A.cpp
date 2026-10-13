#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> diem(n);
    int dem = 0;
    for (int i = 0; i < n; i++) {
        cin >> diem[i];
        if (diem[i] > 0 && diem[i] >= diem[k-1]) {
            dem = dem + 1;
        }
    }
    cout << dem;
}