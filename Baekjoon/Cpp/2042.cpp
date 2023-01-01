#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll arr[1000001], tree[4000001];

ll init(ll s, ll e, ll x) {
    if (s == e) {
        tree[x] = arr[s];
    } else {
        ll m = (s + e) / 2;
        tree[x] = init(s, m, x * 2) + init(m + 1, e, x * 2 + 1);   
    }
    return tree[x];
}

ll sum(ll s, ll e, ll l, ll r, ll x) {
    if (e < l || r < s) {
        return 0;
    }
    if (l <= s && e <= r) {
        return tree[x];
    }
    ll m = (s + e) / 2;
    return sum(s, m, l, r, x * 2) + sum(m + 1, e, l, r, x * 2 + 1);
}

void update(ll s, ll e, ll i, ll v, ll x) {
    if (s <= i && i <= e) {
        if (s == e) {
            arr[i] = v;
            tree[x] = v;
        } else {
            ll m = (s + e) / 2;
            update(s, m, i, v, x * 2);
            update(m + 1, e, i, v, x * 2 + 1);
            tree[x] = tree[x * 2] + tree[x * 2 + 1];
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, k, i, a, b, c;
    cin >> n >> m >> k;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    init(0, n - 1, 1);
    m += k;
    while (m--) {
        cin >> a >> b >> c;
        if (a == 1) {
            update(0, n - 1, b - 1, c, 1);
        } else {
            cout << sum(0, n - 1, b - 1, c - 1, 1) << "\n";
        }
    }
    return 0;
}
