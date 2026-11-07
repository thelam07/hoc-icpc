#include <bits/stdc++.h>
using namespace std;

long long luyThua2(int x) {
    long long kq = 1;
    for (int i = 0; i < x; i++) {
        kq = kq * 2;
    }
    return kq;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int soTest;
    cin >> soTest;
    for(int t = 0; t < soTest; t++) {
        int n;
        cin >> n;

        vector<long long> buoc(n);
        long long tong = 0;

        for (int i = 0; i < n; i++) {
            int somu;
            cin >> somu;
            buoc[i] = luyThua2(somu);
            tong = tong + buoc[i];
        }

        sort(buoc.begin(), buoc.end());
        reverse(buoc.begin(), buoc.end());

        long long mucTieu = tong / 2;
        long long s = 0;
        for (int i = 0; i < n; i++) {
            if (s + buoc[i] <= mucTieu) {
                s = s + buoc[i];
            }
        }

        cout << s * (tong - s) << "\n";
    }
}