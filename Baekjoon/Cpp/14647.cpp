#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll lr, lc, sc, arr[501][501];

ll mx(ll a, ll b) {
    return a > b ? a : b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, j, c, d;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        c = 0;
        for (j = 0; j < m; j++) {
            cin >> d;
            arr[i][j] = d;
            for (char cr: to_string(d))
                if (cr == '9')
                    c++;
        }
        sc += c;
        lr = mx(c, lr);
    }
    for (i = 0; i < m; i++) {
        c = 0;
        for (j = 0; j < n; j++)
            for (char cr: to_string(arr[j][i]))
                if (cr == '9')
                    c++;
        lc = mx(c, lc);
    }
    cout << sc - mx(lc, lr);
    return 0;
}
