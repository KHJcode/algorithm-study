#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll is;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, sx, sy, ex, ey;
    cin >> n >> m >> sx >> sy >> ex >> ey;
    if (ex == sx && ey == sy)
        is = 1;
    else if (n == 1 || m == 1)
        is = 0;
    else if ((ex + ey) % 2 == (sx + sy) % 2)
        is = 1;
    cout << (is ? "YES" : "NO");
    return 0;
}
