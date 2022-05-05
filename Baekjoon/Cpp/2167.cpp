#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll arr[301][301];

ll mx(ll a, ll b) {
    return a > b ? a : b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, k, i, j, x, y, s;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> k;
            k += arr[i][j - 1];
            arr[i][j] = k;
        }
    }
    cin >> k;
    while (k--) {
        cin >> i >> j >> x >> y;
        s = 0;
        for (m = i; m <= x; m++)
            s += arr[m][y] - arr[m][j - 1];
        cout << s << "\n";
    }
    return 0;
}
