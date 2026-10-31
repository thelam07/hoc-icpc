#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int soTest;
    cin >> soTest;
    for (int t = 0; t < soTest; t++) {
        int n;
        cin >> n;

        vector<string> s(n);
        set<string> daCo;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            daCo.insert(s[i]);
        }

        string res;
        for (int i = 0; i < n; i++) {
            bool ok = false;
            for (int c = 1; c < (int)s[i].size(); c++) {
                string trai = s[i].substr(0, c);
                string phai = s[i].substr(c);
                if (daCo.count(trai) && daCo.count(phai)) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                res += '1';
            } else {
                res += '0';
            }
        }
        cout << res << "\n";
    }
}