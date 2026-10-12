#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i< s.size(); i = i + 2) {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i > 0) {
            cout << "+";
        }
        cout << v[i];
    }
}