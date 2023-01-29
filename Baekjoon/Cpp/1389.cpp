#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll dis[101][101];

ll mn(ll a, ll b) {
    return a > b ? b : a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, j, a, b, c, mc = 2147483647, mf = 1;
    cin >> n >> m;
    for (i = 0; i < m; i++) {
        cin >> a >> b;
        dis[a][b] = 1;
        dis[b][a] = 1;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (dis[i][j] == 0 && i != j) {
                dis[i][j] = mc;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (a = 1; a <= n; a++) {
            for (b = 1; b <= n; b++) {
                dis[a][b] = mn(dis[a][b], dis[a][i] + dis[i][b]);
                dis[b][a] = dis[a][b];
            }
        }
    }
    for (i = n; i > 0; i--) {
        c = 0;
        for (j = 1; j <= n; j++) {
            if (i == j) {
                continue;
            }
            c += dis[i][j];
        }
        if (c <= mc) {
            mc = c;
            mf = i;
        }
    }
    cout << mf;
    return 0;
}
