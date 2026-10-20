#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> t(n);
    for (int a = 0; a < n; a++) {
        cin >> t[a];
    }
    int i = 0, j = n - 1;
    long long tA = 0, tB = 0;
    int soA = 0, soB = 0;
    while (i <= j) {
        if (tA <= tB) {
            soA++;
            tA += t[i];
            i++;
        } else {
            soB++;
            tB += t[j];
            j--;
        }
    }
    cout << soA<< " " << soB;
}