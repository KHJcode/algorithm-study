#include <bits/stdc++.h>

#define INF 2147483647

using ll = long long;
using namespace std;

ll dis[101][101];

ll mn(ll a, ll b) {
    return a > b ? b : a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, a, b, c, i;
    cin >> n >> m;
    for (i = 1; i < n; i++) {
        for (a = i + 1; a <= n; a++) {
            dis[a][i] = INF;
            dis[i][a] = INF;
        }
    }
    for (i = 0; i < m; i++) {
        cin >> a >> b >> c;
        dis[a][b] = mn(dis[a][b], c);
    }
    for (i = 1; i <= n; i++) {
        for (a = 1; a <= n; a++) {
            for (b = 1; b <= n; b++) {
                dis[a][b] = mn(dis[a][b], dis[a][i] + dis[i][b]);
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (a = 1; a <= n; a++) {
            cout << (dis[i][a] == INF ? 0 : dis[i][a]) << " ";
        }
        cout << "\n";
    }
    return 0;
}
