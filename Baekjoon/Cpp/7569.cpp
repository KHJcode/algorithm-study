#include <bits/stdc++.h>

using namespace std;

int n, m, h, arr[101][101][101], vst[101][101][101], map_z[] = {1, -1, 0, 0, 0, 0}, map_y[] = {0, 0, 0, 0, -1, 1}, map_x[] = {0, 0, -1, 1, 0, 0};

queue<vector<int>> que;

bool check(int z, int y, int x, int c) {
    return z > 0 && z <= h && x > 0 && x <= m && y > 0 && y <= n && arr[z][y][x] == 0 && (vst[z][y][x] > c || vst[z][y][x] == 0);
}

int main() {
    vector<int> d;
    int i, j, k, v, nz, ny, nx, sum = 0, cnt = 0, wcnt = 0, mx = 0;
    cin >> m >> n >> h;
    for (i = 1; i <= h; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 1; k <= m; k++) {
                cin >> arr[i][j][k];
                if (arr[i][j][k] != -1) {
                    sum++;
                    if (arr[i][j][k] == 1) {
                        que.push({i, j, k});
                        vst[i][j][k] = 1;
                    } else {
                        wcnt++;
                    }
                }
            }
        }
    }
    while (!que.empty()) {
        d = que.front();
        que.pop();
        v = vst[d[0]][d[1]][d[2]];
        for (i = 0; i < 6; i++) {
            nz = d[0] + map_z[i];
            ny = d[1] + map_y[i];
            nx = d[2] + map_x[i];
            if (check(nz, ny, nx, v + 1)) {
                vst[nz][ny][nx] = v + 1;
                que.push({nz, ny, nx});
            }
        }
    }
    for (i = 1; i <= h; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 1; k <= m; k++) {
                if (vst[i][j][k]) {
                    cnt++;
                    mx = max(mx, vst[i][j][k]);
                }
            }
        }
    }
    cout << (wcnt == 0 ? 0 : (sum == cnt ? mx - 1 : -1));
    return 0;
}
