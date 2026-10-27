#include <bits/stdc++.h>
using namespace std;

bool laNamDep(int year) {
    int a = year / 1000;
    int b = year / 100 % 10;
    int c = year / 10 % 10;
    int d = year % 10;
    return a != b && a != c && a != d && b != c && b != d && c != d;
}

int timNamDep(int year) {
    year = year + 1;
    while (laNamDep(year) == false) {
        year = year + 1;
    }
    return year;
}

int main() {
    int year;
    cin >> year;
    cout << timNamDep(year);
}