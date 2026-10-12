#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string r = "";
    for (int i = 0; i < s.size(); i++) {
        bool daCo = false;
        for (int j = 0; j < r.size(); j ++) {
            if (s[i] == r[j]) {
                daCo = true;
            }
        }
        if (daCo == false) {
            r += s[i];
        }
    }
    if (r.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}