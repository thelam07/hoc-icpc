#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> demTen;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (demTen.count(s) == 0) {
            demTen[s] = 0;
            cout << "OK\n";
        } else {
            demTen[s]++;
            cout << s << demTen[s] << '\n';
        }
    }
    return 0;
}