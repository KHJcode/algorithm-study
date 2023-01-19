#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, m, mx, dy[] = {0, 0, 1, -1}, dx[] = {1, -1, 0, 0}, arr[501][501];

vector<pair<ll, ll>> vv;

bool check(ll y, ll x) {
    return n > y && y > -1 && m > x && x > -1;
}

void rec(ll y, ll x, ll s) {
    if (vv.size() == 4) {
        mx = max(mx, s);
    } else {
        ll i, j, l;
        for (i = 0; i < vv.size(); i++) {
            for (j = 0; j < 4; j++) {
                ll ny = vv[i].first + dy[j];
                ll nx = vv[i].second + dx[j];
                bool is = true;
                for (l = 0; l < vv.size(); l++) {
                    if (vv[l].first == ny && vv[l].second == nx) {
                        is = false;
                        break;
                    }
                }
                if (check(ny, nx) && is) {
                    vv.push_back({ny, nx});
                    rec(ny, nx, s + arr[ny][nx]);
                    vv.pop_back();
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            vv.push_back({i, j});
            rec(i, j, arr[i][j]);
            vv.pop_back();
        }
    }
    cout << mx;
    return 0;
}
