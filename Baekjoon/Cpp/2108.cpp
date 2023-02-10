#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll arr[8001];

ll get(ll x) {
    return arr[x + 4000];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, d, i, c = 0, mx = 0;
    vector<ll> v, s, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> d;
        v.push_back(d);
        c += d;
        if (get(d) == 0) {
            s.push_back(d);
        }
        arr[d + 4000] += 1;
    }
    sort(v.begin(), v.end());
    cout << round(double(c) / double(n)) + 0 << "\n";
    cout << v[n / 2] << "\n";
    for (auto i : s) {
        if (get(i) > get(mx)) {
            mx = i;
            j.clear();
            j.push_back(i);
        } else if (get(i) == get(mx)) {
            j.push_back(i);
        }
    }
    if (j.size() > 1) {
        sort(j.begin(), j.end());
        mx = j[1];
    }
    cout << mx << "\n";
    cout << v[n - 1] - v[0] << "\n";
    return 0;
}
