#include <bits/stdc++.h>
using namespace std;

bool laMayMan(int x) {
    if (x <= 0) {
        return false;
    }
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) {
            return false;
        }
        x = x / 10;
    }
    return true;
}

bool ganMayMan(int n) {
    for (int i = 1; i <= n; i++) {
        if (laMayMan(i) && (n % i == 0)) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if (ganMayMan(n) == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}