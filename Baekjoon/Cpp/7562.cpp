#include <bits/stdc++.h>

using namespace std;

int vst[301][301];
int xarr[] = {1, 1, 2, 2, -1, -1, -2, -2};
int yarr[] = {2, -2, 1, -1, -2, 2, 1, -1};

queue<pair<int, int>> que;

bool check(int l, int x, int y) {
    return vst[x][y] == 0 && x < l && x >= 0 && y < l && y >= 0;
}

void clear(int l) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            vst[i][j] = 0;
        }
    }
}

int main() {
    int l, i, x, t, sx, sy, ex, ey;
    pair<int, int> d;
    cin >> t;
    while (t--) {
        cin >> l >> sx >> sy >> ex >> ey;
        clear(l);
        que = queue<pair<int, int>>();
        vst[sx][sy] = 1;
        que.push({sx, sy});
        while (!que.empty()) {
            d = que.front();
            que.pop();
            if (d.first == ex && d.second == ey) {
                break;
            }
            x = vst[d.first][d.second];
            for (i = 0; i < 8; i++) {
                if (check(l, d.first + xarr[i], d.second + yarr[i])) {
                    vst[d.first + xarr[i]][d.second + yarr[i]] = x + 1;
                    que.push({d.first + xarr[i], d.second + yarr[i]});
                }
            }
        }
        cout << max(vst[ex][ey] - 1, 0) << "\n";
    }
    return 0;
}
