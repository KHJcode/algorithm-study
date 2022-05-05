#include <bits/stdc++.h>

#define M 101

typedef long long ll;

using namespace std;

ll c, arr[M][M];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, sx, sy, ex, ey, j, k;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> sx >> sy >> ex >> ey;
        for (j = sy; j <= ey; j++)
            for (k = sx; k <= ex; k++)
                arr[j][k]++;
    }
    for (i = 1; i <= 100; i++)
        for (j = 1; j <= 100; j++)
            if (arr[i][j] > m)
                c++;
    cout << c;
    return 0;
}
