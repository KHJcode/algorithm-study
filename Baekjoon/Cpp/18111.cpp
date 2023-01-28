#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll gph[300];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, b, i, j, s, bb, mn = 257, mx = 0, mf, ms = 2147483648, arr[501][501];
    vector<pair<ll, ll>> v;
    cin >> n >> m >> b;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
            gph[arr[i][j]] += 1;
            mn = min(mn, arr[i][j]);
            mx = max(mx, arr[i][j]);
        }
    }
    for (i = mn; i < mx + 1; i++) {
        if (gph[i] > 0) {
            v.push_back({i, gph[i]});
        }
    }
    for (i = mn; i < mx + 1; i++) {
        s = 0;
        bb = b;
        for (j = 0; j < v.size(); j++) {
            if (i == v[j].first) {
                continue;
            } else if (i < v[j].first) {
                s += 2 * (v[j].first - i) * v[j].second;
                bb += (v[j].first - i) * v[j].second;
            } else {
                s += 1 * (i - v[j].first) * v[j].second;
                bb -= (i - v[j].first) * v[j].second;
            }
        }
        if (bb < 0) {
            continue;
        }
        if (ms >= s) {
            ms = s;
            mf = i;
        }
    }
    cout << ms << " " << mf;
    return 0;
}
