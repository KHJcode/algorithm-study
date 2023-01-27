#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll rec(ll x, ll n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    }
    return (x * rec(x, n - 1)) % 1234567891;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll l, i, h = 0;
    string s;
    cin >> l >> s;
    for (i = 0; i < l; i++) {
        h += ((ll(s[i]) - 96) * rec(31, i)) % 1234567891;
    }
    cout << h % 1234567891;
    return 0;
}
