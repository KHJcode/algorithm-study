#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, m, arr[9][9], narr[9][9];

void clear() {
    ll i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            narr[i][j] = arr[i][j];
        }
    }
}

bool check(ll y, ll x) {
    if (y > -1 && x > -1 && y < n && x < m && narr[y][x] == 0) {
        return true;
    }
    return false;
}

void bfs(ll y, ll x) {
    if (check(y, x)) {
        narr[y][x] = 2;
        bfs(y - 1, x);
        bfs(y, x - 1);
        bfs(y + 1, x);
        bfs(y, x + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j, k, a, b, d, mx = 0;
    vector<pair<ll, ll>> pv, dv;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
            narr[i][j] = arr[i][j];
            if (arr[i][j] == 0) {
                pv.push_back({i, j});
            } else if (arr[i][j] == 2) {
                dv.push_back({i, j});
            }
        }
    }
    for (i = 0; i < pv.size() - 2; i++) {
        for (j = i + 1; j < pv.size() - 1; j++) {
            for (k = j + 1; k < pv.size(); k++) {
                d = 0;
                clear();
                narr[pv[i].first][pv[i].second] = 1;
                narr[pv[j].first][pv[j].second] = 1;
                narr[pv[k].first][pv[k].second] = 1;
                for (a = 0; a < dv.size(); a++) {
                    narr[dv[a].first][dv[a].second] = 0;
                    bfs(dv[a].first, dv[a].second);
                }
                for (a = 0; a < n; a++) {
                    for (b = 0; b < m; b++) {
                        d += narr[a][b] == 0;
                    }
                }
                mx = max(d, mx);
            }
        }
    }
    cout << mx;
    return 0;
}
