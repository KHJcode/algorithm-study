#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, mn = 100, arr[10];

vector<ll> v;

ll get(ll x) {
    if (x < 10) {
        return 1;
    }
    return 1 + get(x * 0.1);
}

ll getx(ll m) {
    ll d = 1;
    m -= 1;
    while (m--) {
        d *= 10;
    }
    return d;
}

ll sub(ll a, ll b) {
    return max(a, b) - min(a, b);
}

ll res(ll a, ll b) {
    if (sub(a, n) > sub(b, n)) {
        return b;
    } else {
        return a;
    }
}

void rec(ll x, ll s) {
    if (x == 0) {
        mn = res(mn, s);
    } else {
        for (auto i : v) {
            rec(x - 1, getx(x) * i + s);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m, d, i, x;
    cin >> n >> m;
    while (m--) {
        cin >> d;
        arr[d] = 1;
    }
    for (i = 0; i < 10; i++) {
        if (arr[i] == 0) {
            v.push_back(i);
        }
    }
    x = get(n);
    if (x > 1) {
        rec(x - 1, 0);   
    }
    rec(x, 0);
    rec(x + 1, 0);
    cout << min(sub(n, mn) + (mn == 100 ? 0 : get(mn)), sub(n, 100));
    return 0;
}
