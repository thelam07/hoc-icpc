#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string c0 = "0000000";
    string c1 = "1111111";
    if (s.find(c0) != string::npos || s.find(c1) != string::npos ) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}