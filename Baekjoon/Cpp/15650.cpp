#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, m;

void rec(vector<ll> v) {
    ll i;
    if (v.size() == m) {
        for (auto i : v) {
            cout << i << " ";
        }
        cout << "\n";
    } else {
        for (i = v.back() + 1; i <= n; i++) {
            vector<ll> nv = v;
            nv.push_back(i);
            rec(nv);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j;
    cin >> n >> m;
    for (i = 1; i <= n - m + 1; i++) {
        vector<ll> v(1, i);
        rec(v);
    }
    return 0;
}
