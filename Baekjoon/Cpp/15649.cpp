#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<ll> v[9];

unordered_set<ll> def;

ll m;

void rec(ll x, ll c, unordered_set<ll> arr) {
    arr.insert(x);
    if (arr.size() != c) {
        return;
    }
    if (c == m) {
        for (ll i = m - 1; i > -1; i--) {
            cout << *next(arr.begin(), i) << " ";
        }
        cout << "\n";
        return;
    }
    for (auto i: *&v[x]) {
        rec(i, c + 1, arr);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j, n;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j) {
                continue;
            }
            v[i].push_back(j);
        }
    }
    for (i = 1; i <= n; i++) {
        rec(i, 1, def);
    }
    return 0;
}
