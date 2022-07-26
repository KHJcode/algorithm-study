#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, nn = 1000000001, xx = -1000000001, arr[12];

ll mn(ll a, ll b) {
    return a < b ? a : b;
}

ll mx(ll a, ll b) {
    return a > b ? a : b;
}

void rec(ll x, ll c, ll xd, ll xp, ll xg, ll xs) {
    if (c == 0) {
        nn = mn(nn, x);
        xx = mx(xx, x);
    } else {
        ll v = arr[n - c];
        --c;
        if (xd) {
            rec(x + v, c, xd - 1, xp, xg, xs);
        }
        if (xp) {
            rec(x - v, c, xd, xp - 1, xg, xs);
        }
        if (xg) {
            rec(x * v, c, xd, xp, xg - 1, xs);
        }
        if (xs) {
            rec(x / v, c, xd, xp, xg, xs - 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, d, p, g, s;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> d >> p >> g >> s;
    rec(arr[0], n - 1, d, p, g, s);
    cout << xx << "\n" << nn;
    return 0;
}
