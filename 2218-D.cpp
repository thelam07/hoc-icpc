#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int LIM = 110000;
    vector<bool> laHop(LIM + 1, false);
    vector<long long> nguyenTo;

    for (int i = 2; i <= LIM; i++) {
        if (!laHop[i]) {
            nguyenTo.push_back(i);
            for (long long j = (long long)i * i; j <= LIM; j += i) {
                laHop[j] = true;
            }
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << nguyenTo[i] * nguyenTo[i + 1] << ' ';
        }
        cout << '\n';
    }
}