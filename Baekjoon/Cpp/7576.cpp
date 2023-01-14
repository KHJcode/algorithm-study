#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, m, arr[1001][1001];

queue<pair<ll, ll>> q;

ll mx(ll a, ll b) {
    return a > b ? a : b;
}

bool check(ll y, ll x) {
    return y > -1 && n > y && x > -1 && m > x;
}

void push(ll y, ll x, ll v) {
    if (check(y, x) && arr[y][x] == 0) {
        arr[y][x] = v;
        q.push({y, x});
    }
}

void bfs() {
    while (!q.empty()) {
        ll y = q.front().first;
        ll x = q.front().second;
        ll v = arr[y][x] + 1;
        q.pop();
        push(y + 1, x, v);
        push(y - 1, x, v);
        push(y, x - 1, v);
        push(y, x + 1, v);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j, c = 0, r = 0;
    cin >> m >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                q.push({i, j});
            }
            c += arr[i][j] * arr[i][j];
        }
    }
    if (c == n * m) {
        cout << 0;
    } else {
        bfs();
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (arr[i][j] == 0) {
                    r = 0;
                    i = n;
                    break;
                }
                r = mx(r, arr[i][j]);
            }
        }
        cout << r - 1;
    }
    return 0;
}
