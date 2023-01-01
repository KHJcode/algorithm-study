#include <bits/stdc++.h>

#define MOD 1000000007

using ll = long long;
using namespace std;

ll arr[1000001], tree[4000001];

void init(ll s, ll e, ll x) {
    if (s == e) {
        tree[x] = arr[s];
    } else {
        ll m = (s + e) / 2;
        init(s, m, x * 2);
        init(m + 1, e, x * 2 + 1);
        tree[x] = tree[x * 2] * tree[x * 2 + 1] % MOD;
    }
}

ll sum(ll s, ll e, ll l, ll r, ll x) {
    if (e < l || r < s) {
        return 1;
    }
    if (l <= s && e <= r) {
        return tree[x];
    }
    ll m = (s + e) / 2;
    return sum(s, m, l, r, x * 2) * sum(m + 1, e, l, r, x * 2 + 1) % MOD;
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
            tree[x] = tree[x * 2] * tree[x * 2 + 1] % MOD;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, k, a, b, c, i;
    cin >> n >> m >> k;
    for (i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    init(1, n, 1);
    m += k;
    while (m--) {
        cin >> a >> b >> c;
        if (a == 1) {
            update(1, n, b, c, 1);
        } else {
            cout << sum(1, n, b, c, 1) << "\n";
        }
    }
    return 0;
}
