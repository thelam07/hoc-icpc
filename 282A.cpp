#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rs = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[1] == '+') {
            rs = rs + 1;
        } else {
            rs = rs -1;
        }
    }
    cout << rs;
}
