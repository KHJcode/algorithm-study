#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll arr[1001];

ll sm(ll s, ll e) {
    ll su = 0;
    for (ll i = s; i <= e; i++) {
        su += arr[i];
    }
    return su;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, q, i, k, a, b, c, d, s;
    cin >> n >> q;
    for (i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (i = 0; i < q; i++) {
        cin >> k >> a >> b;
        s = sm(a, b);
        if (k == 1) {
            arr[a] ^= arr[b] ^= arr[a] ^= arr[b];
        } else {
            cin >> c >> d;
            s -= sm(c, d);
        }
        cout << s << "\n";
    }
    return 0;
}
