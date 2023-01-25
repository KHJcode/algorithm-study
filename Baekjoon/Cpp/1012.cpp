#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll m, n, arr[51][51];

bool check(ll y, ll x) {
    return y > -1 && y < n && x > -1 && x < m && arr[y][x] == 1;
}

void dfs(ll y, ll x, ll d) {
    if (check(y, x)) {
        arr[y][x] = d;
        dfs(y, x + 1, d);
        dfs(y, x - 1, d);
        dfs(y - 1, x, d);
        dfs(y + 1, x, d);
    }
}

void clear() {
    ll i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            arr[i][j] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, k, i, j, c, x, y;
    set<ll> s;
    vector<pair<ll, ll>> v;
    cin >> t;
    while (t--) {
        s.clear();
        v.clear();
        clear();
        c = 2;
        cin >> m >> n >> k;
        while (k--) {
            cin >> x >> y;
            v.push_back({y, x});
        }
        for (i = 0; i < v.size(); i++) {
            arr[v[i].first][v[i].second] = 1;
        }
        for (i = 0; i < v.size(); i++) {
            dfs(v[i].first, v[i].second, c++);
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (arr[i][j] > 1) {
                    s.insert(arr[i][j]);
                }
            }
        }
        cout << s.size() << "\n";
    }
    return 0;
}
