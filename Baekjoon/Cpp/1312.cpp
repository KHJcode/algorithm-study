#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c;
    c++;
    while (c--) {
        d = a / b;
        a = (a % b) * 10;
    }
    cout << d;
    return 0;
}
