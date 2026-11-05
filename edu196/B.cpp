#include <bits/stdc++.h>
using namespace std;

int main() {
    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >> n;
        vector<long long>  a(n);
        for (int k = 0; k < n; k++) {
            cin >> a[k];
        }
        int best = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0;j < n; j++) {
                if (a[j] % a[i] == 0) {
                    cnt++;
                }
            }
            best = max(best, cnt);
        }
        cout << n - best << "\n";
    }
}