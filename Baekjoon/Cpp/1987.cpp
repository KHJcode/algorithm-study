#include <bits/stdc++.h>

using namespace std;

int r, c, res = 0, arr[21][21], dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
bool vst[29], loc[21][21];

void rec(int n, int x, int y) {
    if (x >= 0 && y >= 0 && x < r && y < c && !loc[x][y] && !vst[arr[x][y]]) {
        vst[arr[x][y]] = true;
        loc[x][y] = true;
        for (int i = 0; i < 4; i++) {
            rec(n + 1, x + dx[i], y + dy[i]);
        }
        vst[arr[x][y]] = false;
        loc[x][y] = false;
    } else {
        res = max(n, res);
    }
}

int main() {
    int i, j;
    char a;
    cin >> r >> c;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a;
            arr[i][j] = a - 65;
        }
    }
    rec(0, 0, 0);
    cout << res;
    return 0;
}
